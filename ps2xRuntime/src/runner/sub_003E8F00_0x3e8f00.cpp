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

// Function: sub_003E8F00
// Address: 0x3e8f00 - 0x3e8fe8
void sub_003E8F00_0x3e8f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8F00_0x3e8f00");
#endif

    ctx->pc = 0x3e8f00u;

    // 0x3e8f00: 0x84852ba8  lh          $a1, 0x2BA8($a0)
    ctx->pc = 0x3e8f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11176)));
    // 0x3e8f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e8f08: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E8F08u;
    {
        const bool branch_taken_0x3e8f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F08u;
        // 0x3e8f0c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f08) {
            ctx->pc = 0x3E8FB0u;
            goto label_3e8fb0;
        }
    }
    ctx->pc = 0x3E8F10u;
    // 0x3e8f10: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E8F10u;
    {
        const bool branch_taken_0x3e8f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e8f10) {
            ctx->pc = 0x3E8F88u;
            goto label_3e8f88;
        }
    }
    ctx->pc = 0x3E8F18u;
    // 0x3e8f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8f1c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E8F1Cu;
    {
        const bool branch_taken_0x3e8f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e8f1c) {
            ctx->pc = 0x3E8F60u;
            goto label_3e8f60;
        }
    }
    ctx->pc = 0x3E8F24u;
    // 0x3e8f24: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8F24u;
    {
        const bool branch_taken_0x3e8f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f24) {
            ctx->pc = 0x3E8F38u;
            goto label_3e8f38;
        }
    }
    ctx->pc = 0x3E8F2Cu;
    // 0x3e8f2c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3E8F2Cu;
    {
        const bool branch_taken_0x3e8f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f2c) {
            ctx->pc = 0x3E8FD8u;
            goto label_3e8fd8;
        }
    }
    ctx->pc = 0x3E8F34u;
    // 0x3e8f34: 0x0  nop
    ctx->pc = 0x3e8f34u;
    // NOP
label_3e8f38:
    // 0x3e8f38: 0x84852baa  lh          $a1, 0x2BAA($a0)
    ctx->pc = 0x3e8f38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11178)));
    // 0x3e8f3c: 0x84822bac  lh          $v0, 0x2BAC($a0)
    ctx->pc = 0x3e8f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11180)));
    // 0x3e8f40: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e8f44: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x3e8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
    // 0x3e8f48: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3e8f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3e8f4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e8f50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e8f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8f58: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3E8F58u;
    {
        const bool branch_taken_0x3e8f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F58u;
        // 0x3e8f5c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f58) {
            ctx->pc = 0x3E8FD8u;
            goto label_3e8fd8;
        }
    }
    ctx->pc = 0x3E8F60u;
label_3e8f60:
    // 0x3e8f60: 0x84852baa  lh          $a1, 0x2BAA($a0)
    ctx->pc = 0x3e8f60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11178)));
    // 0x3e8f64: 0x84822bac  lh          $v0, 0x2BAC($a0)
    ctx->pc = 0x3e8f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11180)));
    // 0x3e8f68: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e8f6c: 0x24634b30  addiu       $v1, $v1, 0x4B30
    ctx->pc = 0x3e8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19248));
    // 0x3e8f70: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3e8f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3e8f74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e8f78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e8f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8f80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E8F80u;
    {
        const bool branch_taken_0x3e8f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F80u;
        // 0x3e8f84: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f80) {
            ctx->pc = 0x3E8FD8u;
            goto label_3e8fd8;
        }
    }
    ctx->pc = 0x3E8F88u;
label_3e8f88:
    // 0x3e8f88: 0x84852baa  lh          $a1, 0x2BAA($a0)
    ctx->pc = 0x3e8f88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11178)));
    // 0x3e8f8c: 0x84822bac  lh          $v0, 0x2BAC($a0)
    ctx->pc = 0x3e8f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11180)));
    // 0x3e8f90: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e8f94: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x3e8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
    // 0x3e8f98: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3e8f98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3e8f9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e8fa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e8fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8fa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E8FA8u;
    {
        const bool branch_taken_0x3e8fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FA8u;
        // 0x3e8fac: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8fa8) {
            ctx->pc = 0x3E8FD8u;
            goto label_3e8fd8;
        }
    }
    ctx->pc = 0x3E8FB0u;
label_3e8fb0:
    // 0x3e8fb0: 0x84852baa  lh          $a1, 0x2BAA($a0)
    ctx->pc = 0x3e8fb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11178)));
    // 0x3e8fb4: 0x84822bac  lh          $v0, 0x2BAC($a0)
    ctx->pc = 0x3e8fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11180)));
    // 0x3e8fb8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e8fbc: 0x24634c70  addiu       $v1, $v1, 0x4C70
    ctx->pc = 0x3e8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19568));
    // 0x3e8fc0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3e8fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3e8fc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e8fc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e8fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8fd0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e8fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8fd4: 0x0  nop
    ctx->pc = 0x3e8fd4u;
    // NOP
label_3e8fd8:
    // 0x3e8fd8: 0x84832bac  lh          $v1, 0x2BAC($a0)
    ctx->pc = 0x3e8fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11180)));
    // 0x3e8fdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e8fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FE0u;
        // 0x3e8fe4: 0xa4832bac  sh          $v1, 0x2BAC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11180), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8FE8u;
}
