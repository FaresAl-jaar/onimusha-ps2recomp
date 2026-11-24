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

// Function: sub_00321110
// Address: 0x321110 - 0x3211b0
void sub_00321110_0x321110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321110_0x321110");
#endif

    switch (ctx->pc) {
        case 0x321144u: goto label_321144;
        case 0x321164u: goto label_321164;
        case 0x321184u: goto label_321184;
        default: break;
    }

    ctx->pc = 0x321110u;

    // 0x321110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x321114: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x321114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x321118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x321118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32111c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x321120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x321124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x321124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32112c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32112cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321134: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x321134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321138: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x321138u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32113c: 0xc0c8440  jal         func_321100
    ctx->pc = 0x32113Cu;
    SET_GPR_U32(ctx, 31, 0x321144u);
    ctx->pc = 0x321140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32113Cu;
    // 0x321140: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321100u, 0x32113Cu, 0x321144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321144u;
label_321144:
    // 0x321144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321144u;
    {
        const bool branch_taken_0x321144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321144) {
            ctx->pc = 0x321158u;
            goto label_321158;
        }
    }
    ctx->pc = 0x32114Cu;
    // 0x32114c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32114Cu;
    {
        const bool branch_taken_0x32114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32114Cu;
        // 0x321150: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32114c) {
            ctx->pc = 0x321190u;
            goto label_321190;
        }
    }
    ctx->pc = 0x321154u;
    // 0x321154: 0x0  nop
    ctx->pc = 0x321154u;
    // NOP
label_321158:
    // 0x321158: 0x92640006  lbu         $a0, 0x6($s3)
    ctx->pc = 0x321158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x32115c: 0xc0c8440  jal         func_321100
    ctx->pc = 0x32115Cu;
    SET_GPR_U32(ctx, 31, 0x321164u);
    ctx->pc = 0x321160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32115Cu;
    // 0x321160: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321100u, 0x32115Cu, 0x321164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321164u;
label_321164:
    // 0x321164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321164u;
    {
        const bool branch_taken_0x321164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321164) {
            ctx->pc = 0x321178u;
            goto label_321178;
        }
    }
    ctx->pc = 0x32116Cu;
    // 0x32116c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32116Cu;
    {
        const bool branch_taken_0x32116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32116Cu;
        // 0x321170: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32116c) {
            ctx->pc = 0x321190u;
            goto label_321190;
        }
    }
    ctx->pc = 0x321174u;
    // 0x321174: 0x0  nop
    ctx->pc = 0x321174u;
    // NOP
label_321178:
    // 0x321178: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x321178u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x32117c: 0xc0c8440  jal         func_321100
    ctx->pc = 0x32117Cu;
    SET_GPR_U32(ctx, 31, 0x321184u);
    ctx->pc = 0x321180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32117Cu;
    // 0x321180: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321100u, 0x32117Cu, 0x321184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321184u;
label_321184:
    // 0x321184: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321184u;
    {
        const bool branch_taken_0x321184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321184) {
            ctx->pc = 0x321190u;
            goto label_321190;
        }
    }
    ctx->pc = 0x32118Cu;
    // 0x32118c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x32118cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_321190:
    // 0x321190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x321190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321194: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x321194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32119c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32119cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3211a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3211a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3211a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3211a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3211a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3211A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3211ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211A8u;
        // 0x3211ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211B0u;
}
