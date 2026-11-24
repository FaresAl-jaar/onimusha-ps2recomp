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

// Function: sub_00350EA0
// Address: 0x350ea0 - 0x350f8c
void sub_00350EA0_0x350ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350EA0_0x350ea0");
#endif

    switch (ctx->pc) {
        case 0x350ec4u: goto label_350ec4;
        case 0x350ed0u: goto label_350ed0;
        case 0x350edcu: goto label_350edc;
        case 0x350f04u: goto label_350f04;
        case 0x350f18u: goto label_350f18;
        case 0x350f20u: goto label_350f20;
        case 0x350f30u: goto label_350f30;
        case 0x350f38u: goto label_350f38;
        case 0x350f70u: goto label_350f70;
        default: break;
    }

    ctx->pc = 0x350ea0u;

    // 0x350ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x350ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350eb0: 0x80850018  lb          $a1, 0x18($a0)
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x350eb4: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x350EB4u;
    {
        const bool branch_taken_0x350eb4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x350EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EB4u;
        // 0x350eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350eb4) {
            ctx->pc = 0x350F10u;
            goto label_350f10;
        }
    }
    ctx->pc = 0x350EBCu;
    // 0x350ebc: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x350EBCu;
    SET_GPR_U32(ctx, 31, 0x350EC4u);
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x350EBCu, 0x350EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EC4u;
label_350ec4:
    // 0x350ec4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x350ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x350ec8: 0xc0d46cc  jal         func_351B30
    ctx->pc = 0x350EC8u;
    SET_GPR_U32(ctx, 31, 0x350ED0u);
    ctx->pc = 0x350ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350EC8u;
    // 0x350ecc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B30u, 0x350EC8u, 0x350ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350ED0u;
label_350ed0:
    // 0x350ed0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x350ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x350ed4: 0xc0d46c8  jal         func_351B20
    ctx->pc = 0x350ED4u;
    SET_GPR_U32(ctx, 31, 0x350EDCu);
    ctx->pc = 0x350ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350ED4u;
    // 0x350ed8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B20u, 0x350ED4u, 0x350EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EDCu;
label_350edc:
    // 0x350edc: 0x82020018  lb          $v0, 0x18($s0)
    ctx->pc = 0x350edcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x350ee0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x350ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x350ee4: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x350ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x350ee8: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x350ee8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x350eec: 0x82020014  lb          $v0, 0x14($s0)
    ctx->pc = 0x350eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x350ef0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x350ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350ef4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x350EF4u;
    {
        const bool branch_taken_0x350ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EF4u;
        // 0x350ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ef4) {
            ctx->pc = 0x350F08u;
            goto label_350f08;
        }
    }
    ctx->pc = 0x350EFCu;
    // 0x350efc: 0xc0d4520  jal         func_351480
    ctx->pc = 0x350EFCu;
    SET_GPR_U32(ctx, 31, 0x350F04u);
    ctx->pc = 0x351480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351480u, 0x350EFCu, 0x350F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F04u;
label_350f04:
    // 0x350f04: 0x0  nop
    ctx->pc = 0x350f04u;
    // NOP
label_350f08:
    // 0x350f08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x350F08u;
    {
        const bool branch_taken_0x350f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F08u;
        // 0x350f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f08) {
            ctx->pc = 0x350F78u;
            goto label_350f78;
        }
    }
    ctx->pc = 0x350F10u;
label_350f10:
    // 0x350f10: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x350F10u;
    SET_GPR_U32(ctx, 31, 0x350F18u);
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x350F10u, 0x350F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F18u;
label_350f18:
    // 0x350f18: 0xc0d46cc  jal         func_351B30
    ctx->pc = 0x350F18u;
    SET_GPR_U32(ctx, 31, 0x350F20u);
    ctx->pc = 0x350F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F18u;
    // 0x350f1c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B30u, 0x350F18u, 0x350F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F20u;
label_350f20:
    // 0x350f20: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x350f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x350f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350f28: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x350F28u;
    SET_GPR_U32(ctx, 31, 0x350F30u);
    ctx->pc = 0x350F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F28u;
    // 0x350f2c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x350F28u, 0x350F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F30u;
label_350f30:
    // 0x350f30: 0xc0d46c8  jal         func_351B20
    ctx->pc = 0x350F30u;
    SET_GPR_U32(ctx, 31, 0x350F38u);
    ctx->pc = 0x350F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F30u;
    // 0x350f34: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B20u, 0x350F30u, 0x350F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F38u;
label_350f38:
    // 0x350f38: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x350f38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x350f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x350f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x350f40: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x350f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x350f44: 0x82030016  lb          $v1, 0x16($s0)
    ctx->pc = 0x350f44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x350f48: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x350f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x350f4c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x350f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350f50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x350F50u;
    {
        const bool branch_taken_0x350f50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f50) {
            ctx->pc = 0x350F60u;
            goto label_350f60;
        }
    }
    ctx->pc = 0x350F58u;
    // 0x350f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x350F58u;
    {
        const bool branch_taken_0x350f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F58u;
        // 0x350f5c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f58) {
            ctx->pc = 0x350F64u;
            goto label_350f64;
        }
    }
    ctx->pc = 0x350F60u;
label_350f60:
    // 0x350f60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350f64:
    // 0x350f64: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x350f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x350f68: 0xc0d4548  jal         func_351520
    ctx->pc = 0x350F68u;
    SET_GPR_U32(ctx, 31, 0x350F70u);
    ctx->pc = 0x350F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F68u;
    // 0x350f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351520u, 0x350F68u, 0x350F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F70u;
label_350f70:
    // 0x350f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350f74: 0x0  nop
    ctx->pc = 0x350f74u;
    // NOP
label_350f78:
    // 0x350f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350f84: 0x3e00008  jr          $ra
    ctx->pc = 0x350F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F84u;
        // 0x350f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350F8Cu;
}
