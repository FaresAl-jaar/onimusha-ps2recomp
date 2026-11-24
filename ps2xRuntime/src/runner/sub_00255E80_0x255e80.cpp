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

// Function: sub_00255E80
// Address: 0x255e80 - 0x255eec
void sub_00255E80_0x255e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255E80_0x255e80");
#endif

    switch (ctx->pc) {
        case 0x255ee0u: goto label_255ee0;
        default: break;
    }

    ctx->pc = 0x255e80u;

    // 0x255e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255e84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x255e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255e8c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x255e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x255e90: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x255e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x255e94: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255e98: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x255e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x255e9c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255ea0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x255ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x255ea4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255ea8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x255ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x255eac: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255eb0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x255eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x255eb4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255eb8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x255eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x255ebc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255ec0: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x255ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x255ec4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x255ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x255ec8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x255ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x255ecc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x255ECCu;
    {
        const bool branch_taken_0x255ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ecc) {
            ctx->pc = 0x255EE0u;
            goto label_255ee0;
        }
    }
    ctx->pc = 0x255ED4u;
    // 0x255ed4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x255ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x255ed8: 0xc0ca690  jal         func_329A40
    ctx->pc = 0x255ED8u;
    SET_GPR_U32(ctx, 31, 0x255EE0u);
    ctx->pc = 0x255EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255ED8u;
    // 0x255edc: 0x24840e70  addiu       $a0, $a0, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A40u, 0x255ED8u, 0x255EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EE0u;
label_255ee0:
    // 0x255ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x255EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EE4u;
        // 0x255ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255EECu;
}
