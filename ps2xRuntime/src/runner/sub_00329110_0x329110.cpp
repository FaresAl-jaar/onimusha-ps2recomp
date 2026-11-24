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

// Function: sub_00329110
// Address: 0x329110 - 0x3291f8
void sub_00329110_0x329110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329110_0x329110");
#endif

    switch (ctx->pc) {
        case 0x329160u: goto label_329160;
        case 0x329174u: goto label_329174;
        case 0x3291b4u: goto label_3291b4;
        case 0x3291ccu: goto label_3291cc;
        case 0x3291e8u: goto label_3291e8;
        default: break;
    }

    ctx->pc = 0x329110u;

    // 0x329110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x329114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32911c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329124: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x329124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x329128: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x329128u;
    {
        const bool branch_taken_0x329128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329128u;
        // 0x32912c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329128) {
            ctx->pc = 0x329190u;
            goto label_329190;
        }
    }
    ctx->pc = 0x329130u;
    // 0x329130: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x329130u;
    {
        const bool branch_taken_0x329130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329130) {
            ctx->pc = 0x329168u;
            goto label_329168;
        }
    }
    ctx->pc = 0x329138u;
    // 0x329138: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329138u;
    {
        const bool branch_taken_0x329138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329138) {
            ctx->pc = 0x329148u;
            goto label_329148;
        }
    }
    ctx->pc = 0x329140u;
    // 0x329140: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x329140u;
    {
        const bool branch_taken_0x329140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329140) {
            ctx->pc = 0x3291E8u;
            goto label_3291e8;
        }
    }
    ctx->pc = 0x329148u;
label_329148:
    // 0x329148: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x329148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32914c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x32914cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x329150: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x329150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x329154: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x329154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x329158: 0xc09aed4  jal         func_26BB50
    ctx->pc = 0x329158u;
    SET_GPR_U32(ctx, 31, 0x329160u);
    ctx->pc = 0x32915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329158u;
    // 0x32915c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB50u, 0x329158u, 0x329160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329160u;
label_329160:
    // 0x329160: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x329160u;
    {
        const bool branch_taken_0x329160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329160) {
            ctx->pc = 0x3291E8u;
            goto label_3291e8;
        }
    }
    ctx->pc = 0x329168u;
label_329168:
    // 0x329168: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x329168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x32916c: 0xc09af0c  jal         func_26BC30
    ctx->pc = 0x32916Cu;
    SET_GPR_U32(ctx, 31, 0x329174u);
    ctx->pc = 0x329170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32916Cu;
    // 0x329170: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC30u, 0x32916Cu, 0x329174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329174u;
label_329174:
    // 0x329174: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x329174u;
    {
        const bool branch_taken_0x329174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329174) {
            ctx->pc = 0x3291E8u;
            goto label_3291e8;
        }
    }
    ctx->pc = 0x32917Cu;
    // 0x32917c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32917cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329180: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329184: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x329184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x329188: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x329188u;
    {
        const bool branch_taken_0x329188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329188u;
        // 0x32918c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329188) {
            ctx->pc = 0x3291E8u;
            goto label_3291e8;
        }
    }
    ctx->pc = 0x329190u;
label_329190:
    // 0x329190: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x329194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329198: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x329198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x32919c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x32919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3291a0: 0x2c61001f  sltiu       $at, $v1, 0x1F
    ctx->pc = 0x3291a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3291a4: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3291A4u;
    {
        const bool branch_taken_0x3291a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3291A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291A4u;
        // 0x3291a8: 0x3c04008c  lui         $a0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291a4) {
            ctx->pc = 0x3291E8u;
            goto label_3291e8;
        }
    }
    ctx->pc = 0x3291ACu;
    // 0x3291ac: 0xc09bcd0  jal         func_26F340
    ctx->pc = 0x3291ACu;
    SET_GPR_U32(ctx, 31, 0x3291B4u);
    ctx->pc = 0x3291B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291ACu;
    // 0x3291b0: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F340u, 0x3291ACu, 0x3291B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291B4u;
label_3291b4:
    // 0x3291b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3291b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3291b8: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x3291b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x3291bc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3291BCu;
    {
        const bool branch_taken_0x3291bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3291C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291BCu;
        // 0x3291c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291bc) {
            ctx->pc = 0x3291D8u;
            goto label_3291d8;
        }
    }
    ctx->pc = 0x3291C4u;
    // 0x3291c4: 0xc0ca480  jal         func_329200
    ctx->pc = 0x3291C4u;
    SET_GPR_U32(ctx, 31, 0x3291CCu);
    ctx->pc = 0x3291C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291C4u;
    // 0x3291c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329200u, 0x3291C4u, 0x3291CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291CCu;
label_3291cc:
    // 0x3291cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3291CCu;
    {
        const bool branch_taken_0x3291cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3291cc) {
            ctx->pc = 0x3291E8u;
            goto label_3291e8;
        }
    }
    ctx->pc = 0x3291D4u;
    // 0x3291d4: 0x0  nop
    ctx->pc = 0x3291d4u;
    // NOP
label_3291d8:
    // 0x3291d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3291dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291e0: 0xc0ca308  jal         func_328C20
    ctx->pc = 0x3291E0u;
    SET_GPR_U32(ctx, 31, 0x3291E8u);
    ctx->pc = 0x3291E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291E0u;
    // 0x3291e4: 0xaf828b64  sw          $v0, -0x749C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C20u, 0x3291E0u, 0x3291E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291E8u;
label_3291e8:
    // 0x3291e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3291e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3291ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3291ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3291f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3291F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3291F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291F0u;
        // 0x3291f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3291F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3291F8u;
}
