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

// Function: sub_00247E08
// Address: 0x247e08 - 0x247ecc
void sub_00247E08_0x247e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247E08_0x247e08");
#endif

    switch (ctx->pc) {
        case 0x247e2cu: goto label_247e2c;
        case 0x247e34u: goto label_247e34;
        case 0x247ea8u: goto label_247ea8;
        default: break;
    }

    ctx->pc = 0x247e08u;

    // 0x247e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247e18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x247e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x247e1c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x247E1Cu;
    {
        const bool branch_taken_0x247e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247e1c) {
            ctx->pc = 0x247E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247E1Cu;
            // 0x247e20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247EC0u;
            goto label_247ec0;
        }
    }
    ctx->pc = 0x247E24u;
    // 0x247e24: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x247E24u;
    SET_GPR_U32(ctx, 31, 0x247E2Cu);
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x247E24u, 0x247E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E2Cu;
label_247e2c:
    // 0x247e2c: 0xc0916f6  jal         func_245BD8
    ctx->pc = 0x247E2Cu;
    SET_GPR_U32(ctx, 31, 0x247E34u);
    ctx->pc = 0x247E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E2Cu;
    // 0x247e30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245BD8u, 0x247E2Cu, 0x247E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E34u;
label_247e34:
    // 0x247e34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x247e34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e38: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x247e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x247e3c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x247E3Cu;
    {
        const bool branch_taken_0x247e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247e3c) {
            ctx->pc = 0x247E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247E3Cu;
            // 0x247e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247EB0u;
            goto label_247eb0;
        }
    }
    ctx->pc = 0x247E44u;
    // 0x247e44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x247e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x247e48: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x247e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x247e4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247e50: 0x8c63ce50  lw          $v1, -0x31B0($v1)
    ctx->pc = 0x247e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954576)));
    // 0x247e54: 0x600008  jr          $v1
    ctx->pc = 0x247E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247E60u: goto label_247e60;
            case 0x247E70u: goto label_247e70;
            case 0x247E98u: goto label_247e98;
            case 0x247EACu: goto label_247eac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x247E5Cu;
    // 0x247e5c: 0x0  nop
    ctx->pc = 0x247e5cu;
    // NOP
label_247e60:
    // 0x247e60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x247e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247e64: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x247e68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x247E68u;
    {
        const bool branch_taken_0x247e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e68) {
            ctx->pc = 0x247EA0u;
            goto label_247ea0;
        }
    }
    ctx->pc = 0x247E70u;
label_247e70:
    // 0x247e70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x247e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x247e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247e78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x247e7c: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x247e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x247e80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247e84: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x247e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x247e88: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x247e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x247e8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247E8Cu;
    {
        const bool branch_taken_0x247e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E8Cu;
        // 0x247e90: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e8c) {
            ctx->pc = 0x247EA0u;
            goto label_247ea0;
        }
    }
    ctx->pc = 0x247E94u;
    // 0x247e94: 0x0  nop
    ctx->pc = 0x247e94u;
    // NOP
label_247e98:
    // 0x247e98: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x247e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247e9c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_247ea0:
    // 0x247ea0: 0xc091666  jal         func_245998
    ctx->pc = 0x247EA0u;
    SET_GPR_U32(ctx, 31, 0x247EA8u);
    ctx->pc = 0x245998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245998u, 0x247EA0u, 0x247EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EA8u;
label_247ea8:
    // 0x247ea8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x247ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_247eac:
    // 0x247eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247eb0:
    // 0x247eb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247eb4: 0x8094bd2  j           func_252F48
    ctx->pc = 0x247EB4u;
    ctx->pc = 0x247EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EB4u;
    // 0x247eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F48u;
    sub_00252F48_0x252f48(rdram, ctx, runtime); return;
    ctx->pc = 0x247EBCu;
    // 0x247ebc: 0x0  nop
    ctx->pc = 0x247ebcu;
    // NOP
label_247ec0:
    // 0x247ec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x247EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EC4u;
        // 0x247ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247ECCu;
}
