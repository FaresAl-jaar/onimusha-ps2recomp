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

// Function: sub_00143050
// Address: 0x143050 - 0x1430b8
void sub_00143050_0x143050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143050_0x143050");
#endif

    ctx->pc = 0x143050u;

    // 0x143050: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x143054: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143054u;
    {
        const bool branch_taken_0x143054 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x143058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143054u;
        // 0x143058: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143054) {
            ctx->pc = 0x143064u;
            goto label_143064;
        }
    }
    ctx->pc = 0x14305Cu;
    // 0x14305c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x14305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x143060: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x143060u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_143064:
    // 0x143064: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x143064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x143068: 0x6193c  dsll32      $v1, $a2, 4
    ctx->pc = 0x143068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 4));
    // 0x14306c: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x14306cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x143070: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x143070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x143074: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x143074u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x143078: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x143078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14307c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14307cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x143080: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x143080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x143084: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x143084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x143088: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x143088u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x14308c: 0x18e00006  blez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x14308Cu;
    {
        const bool branch_taken_0x14308c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x143090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14308Cu;
        // 0x143090: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14308c) {
            ctx->pc = 0x1430A8u;
            goto label_1430a8;
        }
    }
    ctx->pc = 0x143094u;
    // 0x143094: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x143094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x143098: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x143098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14309c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14309Cu;
    {
        const bool branch_taken_0x14309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14309Cu;
        // 0x1430a0: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14309c) {
            ctx->pc = 0x1430B0u;
            goto label_1430b0;
        }
    }
    ctx->pc = 0x1430A4u;
    // 0x1430a4: 0x0  nop
    ctx->pc = 0x1430a4u;
    // NOP
label_1430a8:
    // 0x1430a8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1430a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1430ac: 0x0  nop
    ctx->pc = 0x1430acu;
    // NOP
label_1430b0:
    // 0x1430b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1430B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1430B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1430B8u;
}
