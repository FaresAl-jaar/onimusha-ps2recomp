#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340110
// Address: 0x340110 - 0x3401c0
void sub_00340110_0x340110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340110_0x340110");
#endif

    switch (ctx->pc) {
        case 0x340124u: goto label_340124;
        case 0x340164u: goto label_340164;
        case 0x34017cu: goto label_34017c;
        case 0x340194u: goto label_340194;
        case 0x3401acu: goto label_3401ac;
        default: break;
    }

    ctx->pc = 0x340110u;

    // 0x340110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34011c: 0xc0a5ee4  jal         func_297B90
    ctx->pc = 0x34011Cu;
    SET_GPR_U32(ctx, 31, 0x340124u);
    ctx->pc = 0x340120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34011Cu;
    // 0x340120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B90u, 0x34011Cu, 0x340124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340124u;
label_340124:
    // 0x340124: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x340124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x340128: 0x240300e3  addiu       $v1, $zero, 0xE3
    ctx->pc = 0x340128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x34012c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x34012Cu;
    {
        const bool branch_taken_0x34012c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x340130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34012Cu;
        // 0x340130: 0x240300e2  addiu       $v1, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34012c) {
            ctx->pc = 0x3401A0u;
            goto label_3401a0;
        }
    }
    ctx->pc = 0x340134u;
    // 0x340134: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x340134u;
    {
        const bool branch_taken_0x340134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340134) {
            ctx->pc = 0x340188u;
            goto label_340188;
        }
    }
    ctx->pc = 0x34013Cu;
    // 0x34013c: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x34013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x340140: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x340140u;
    {
        const bool branch_taken_0x340140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x340144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340140u;
        // 0x340144: 0x240300e0  addiu       $v1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340140) {
            ctx->pc = 0x340170u;
            goto label_340170;
        }
    }
    ctx->pc = 0x340148u;
    // 0x340148: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340148u;
    {
        const bool branch_taken_0x340148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340148) {
            ctx->pc = 0x340158u;
            goto label_340158;
        }
    }
    ctx->pc = 0x340150u;
    // 0x340150: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x340150u;
    {
        const bool branch_taken_0x340150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340150) {
            ctx->pc = 0x3401B0u;
            goto label_3401b0;
        }
    }
    ctx->pc = 0x340158u;
label_340158:
    // 0x340158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34015c: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x34015Cu;
    SET_GPR_U32(ctx, 31, 0x340164u);
    ctx->pc = 0x340160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34015Cu;
    // 0x340160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x34015Cu, 0x340164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340164u;
label_340164:
    // 0x340164: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x340164u;
    {
        const bool branch_taken_0x340164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340164) {
            ctx->pc = 0x3401B0u;
            goto label_3401b0;
        }
    }
    ctx->pc = 0x34016Cu;
    // 0x34016c: 0x0  nop
    ctx->pc = 0x34016cu;
    // NOP
label_340170:
    // 0x340170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340174: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x340174u;
    SET_GPR_U32(ctx, 31, 0x34017Cu);
    ctx->pc = 0x340178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340174u;
    // 0x340178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x340174u, 0x34017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34017Cu;
label_34017c:
    // 0x34017c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34017Cu;
    {
        const bool branch_taken_0x34017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34017c) {
            ctx->pc = 0x3401B0u;
            goto label_3401b0;
        }
    }
    ctx->pc = 0x340184u;
    // 0x340184: 0x0  nop
    ctx->pc = 0x340184u;
    // NOP
label_340188:
    // 0x340188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34018c: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x34018Cu;
    SET_GPR_U32(ctx, 31, 0x340194u);
    ctx->pc = 0x340190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34018Cu;
    // 0x340190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x34018Cu, 0x340194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340194u;
label_340194:
    // 0x340194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x340194u;
    {
        const bool branch_taken_0x340194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340194) {
            ctx->pc = 0x3401B0u;
            goto label_3401b0;
        }
    }
    ctx->pc = 0x34019Cu;
    // 0x34019c: 0x0  nop
    ctx->pc = 0x34019cu;
    // NOP
label_3401a0:
    // 0x3401a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3401a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401a4: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x3401A4u;
    SET_GPR_U32(ctx, 31, 0x3401ACu);
    ctx->pc = 0x3401A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401A4u;
    // 0x3401a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x3401A4u, 0x3401ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401ACu;
label_3401ac:
    // 0x3401ac: 0x0  nop
    ctx->pc = 0x3401acu;
    // NOP
label_3401b0:
    // 0x3401b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3401b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3401b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3401b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3401b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3401B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3401BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401B8u;
        // 0x3401bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3401B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3401C0u;
}
