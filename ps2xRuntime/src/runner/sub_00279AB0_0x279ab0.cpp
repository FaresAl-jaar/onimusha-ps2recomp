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

// Function: sub_00279AB0
// Address: 0x279ab0 - 0x279b10
void sub_00279AB0_0x279ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279AB0_0x279ab0");
#endif

    ctx->pc = 0x279ab0u;

    // 0x279ab0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x279ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x279ab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279ab8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x279ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x279abc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x279abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279ac0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x279ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279ac4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279AC4u;
    {
        const bool branch_taken_0x279ac4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AC4u;
        // 0x279ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ac4) {
            ctx->pc = 0x279AD8u;
            goto label_279ad8;
        }
    }
    ctx->pc = 0x279ACCu;
    // 0x279acc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x279ACCu;
    {
        const bool branch_taken_0x279acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279acc) {
            ctx->pc = 0x279B08u;
            goto label_279b08;
        }
    }
    ctx->pc = 0x279AD4u;
    // 0x279ad4: 0x0  nop
    ctx->pc = 0x279ad4u;
    // NOP
label_279ad8:
    // 0x279ad8: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x279ad8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x279adc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x279adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279ae0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x279ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x279ae4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x279ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x279ae8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x279ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x279aec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279af0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x279af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x279af4: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x279af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x279af8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x279af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x279afc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x279afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279b00: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x279b04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x279b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_279b08:
    // 0x279b08: 0x3e00008  jr          $ra
    ctx->pc = 0x279B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279B10u;
}
