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

// Function: sub_0034D1B0
// Address: 0x34d1b0 - 0x34d258
void sub_0034D1B0_0x34d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D1B0_0x34d1b0");
#endif

    ctx->pc = 0x34d1b0u;

    // 0x34d1b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d1b4: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34d1b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34d1b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D1B8u;
    {
        const bool branch_taken_0x34d1b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D1B8u;
        // 0x34d1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d1b8) {
            ctx->pc = 0x34D1C8u;
            goto label_34d1c8;
        }
    }
    ctx->pc = 0x34D1C0u;
    // 0x34d1c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D1C0u;
    {
        const bool branch_taken_0x34d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d1c0) {
            ctx->pc = 0x34D1E8u;
            goto label_34d1e8;
        }
    }
    ctx->pc = 0x34D1C8u;
label_34d1c8:
    // 0x34d1c8: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34d1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34d1cc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D1CCu;
    {
        const bool branch_taken_0x34d1cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D1CCu;
        // 0x34d1d0: 0x3045000f  andi        $a1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d1cc) {
            ctx->pc = 0x34D1E0u;
            goto label_34d1e0;
        }
    }
    ctx->pc = 0x34D1D4u;
    // 0x34d1d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D1D4u;
    {
        const bool branch_taken_0x34d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d1d4) {
            ctx->pc = 0x34D1E8u;
            goto label_34d1e8;
        }
    }
    ctx->pc = 0x34D1DCu;
    // 0x34d1dc: 0x0  nop
    ctx->pc = 0x34d1dcu;
    // NOP
label_34d1e0:
    // 0x34d1e0: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34d1e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x34d1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34d1e8:
    // 0x34d1e8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x34d1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d1ec: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x34d1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34d1f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D1F0u;
    {
        const bool branch_taken_0x34d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D1F0u;
        // 0x34d1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d1f0) {
            ctx->pc = 0x34D200u;
            goto label_34d200;
        }
    }
    ctx->pc = 0x34D1F8u;
    // 0x34d1f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34D1F8u;
    {
        const bool branch_taken_0x34d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D1F8u;
        // 0x34d1fc: 0x2cc1000a  sltiu       $at, $a2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d1f8) {
            ctx->pc = 0x34D224u;
            goto label_34d224;
        }
    }
    ctx->pc = 0x34D200u;
label_34d200:
    // 0x34d200: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x34d200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34d204: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34d204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34d208: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x34d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34d20c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34d210: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34d214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34d214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d21c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x34d21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34d220: 0x2cc1000a  sltiu       $at, $a2, 0xA
    ctx->pc = 0x34d220u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_34d224:
    // 0x34d224: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x34D224u;
    {
        const bool branch_taken_0x34d224 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d224) {
            ctx->pc = 0x34D230u;
            goto label_34d230;
        }
    }
    ctx->pc = 0x34D22Cu;
    // 0x34d22c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x34d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_34d230:
    // 0x34d230: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x34d230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d234: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34d234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34d238: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34d240: 0x24427eb0  addiu       $v0, $v0, 0x7EB0
    ctx->pc = 0x34d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32432));
    // 0x34d244: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34d244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34d248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d24c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34d250: 0x3e00008  jr          $ra
    ctx->pc = 0x34D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D250u;
        // 0x34d254: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D258u;
}
