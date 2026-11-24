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

// Function: sub_003F45D0
// Address: 0x3f45d0 - 0x3f46ac
void sub_003F45D0_0x3f45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F45D0_0x3f45d0");
#endif

    switch (ctx->pc) {
        case 0x3f4674u: goto label_3f4674;
        default: break;
    }

    ctx->pc = 0x3f45d0u;

    // 0x3f45d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f45d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f45d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f45d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f45d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f45d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f45dc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f45e0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f45e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f45e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f45e8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F45E8u;
    {
        const bool branch_taken_0x3f45e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F45E8u;
        // 0x3f45ec: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f45e8) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F45F0u;
    // 0x3f45f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f45f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f45f4: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F45F4u;
    {
        const bool branch_taken_0x3f45f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f45f4) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F45FCu;
    // 0x3f45fc: 0x8f858d48  lw          $a1, -0x72B8($gp)
    ctx->pc = 0x3f45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f4600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f4600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f4604: 0x80a401d0  lb          $a0, 0x1D0($a1)
    ctx->pc = 0x3f4604u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x3f4608: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4608u;
    {
        const bool branch_taken_0x3f4608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4608u;
        // 0x3f460c: 0x24a601d0  addiu       $a2, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4608) {
            ctx->pc = 0x3F4630u;
            goto label_3f4630;
        }
    }
    ctx->pc = 0x3F4610u;
    // 0x3f4610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4614: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4614u;
    {
        const bool branch_taken_0x3f4614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4614) {
            ctx->pc = 0x3F4630u;
            goto label_3f4630;
        }
    }
    ctx->pc = 0x3F461Cu;
    // 0x3f461c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F461Cu;
    {
        const bool branch_taken_0x3f461c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f461c) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F4624u;
    // 0x3f4624: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3F4624u;
    {
        const bool branch_taken_0x3f4624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4624) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F462Cu;
    // 0x3f462c: 0x0  nop
    ctx->pc = 0x3f462cu;
    // NOP
label_3f4630:
    // 0x3f4630: 0x80a401d1  lb          $a0, 0x1D1($a1)
    ctx->pc = 0x3f4630u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 465)));
    // 0x3f4634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f4634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f4638: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F4638u;
    {
        const bool branch_taken_0x3f4638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4638u;
        // 0x3f463c: 0x24a701d1  addiu       $a3, $a1, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4638) {
            ctx->pc = 0x3F4698u;
            goto label_3f4698;
        }
    }
    ctx->pc = 0x3F4640u;
    // 0x3f4640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4644: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F4644u;
    {
        const bool branch_taken_0x3f4644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4644) {
            ctx->pc = 0x3F4668u;
            goto label_3f4668;
        }
    }
    ctx->pc = 0x3F464Cu;
    // 0x3f464c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F464Cu;
    {
        const bool branch_taken_0x3f464c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f464c) {
            ctx->pc = 0x3F4660u;
            goto label_3f4660;
        }
    }
    ctx->pc = 0x3F4654u;
    // 0x3f4654: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F4654u;
    {
        const bool branch_taken_0x3f4654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4654) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F465Cu;
    // 0x3f465c: 0x0  nop
    ctx->pc = 0x3f465cu;
    // NOP
label_3f4660:
    // 0x3f4660: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f4660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f4664: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f4664u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f4668:
    // 0x3f4668: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f4668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f466c: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F466Cu;
    SET_GPR_U32(ctx, 31, 0x3F4674u);
    ctx->pc = 0x3F4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F466Cu;
    // 0x3f4670: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F466Cu, 0x3F4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4674u;
label_3f4674:
    // 0x3f4674: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f4674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f4678: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4678u;
    {
        const bool branch_taken_0x3f4678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4678) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F4680u;
    // 0x3f4680: 0x8f848d48  lw          $a0, -0x72B8($gp)
    ctx->pc = 0x3f4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f4684: 0x808301d1  lb          $v1, 0x1D1($a0)
    ctx->pc = 0x3f4684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 465)));
    // 0x3f4688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f468c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F468Cu;
    {
        const bool branch_taken_0x3f468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F468Cu;
        // 0x3f4690: 0xa08301d1  sb          $v1, 0x1D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f468c) {
            ctx->pc = 0x3F46A0u;
            goto label_3f46a0;
        }
    }
    ctx->pc = 0x3F4694u;
    // 0x3f4694: 0x0  nop
    ctx->pc = 0x3f4694u;
    // NOP
label_3f4698:
    // 0x3f4698: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f4698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f469c: 0x0  nop
    ctx->pc = 0x3f469cu;
    // NOP
label_3f46a0:
    // 0x3f46a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f46a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f46a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F46A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46A4u;
        // 0x3f46a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F46A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F46ACu;
}
