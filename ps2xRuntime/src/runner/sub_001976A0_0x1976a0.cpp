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

// Function: sub_001976A0
// Address: 0x1976a0 - 0x197700
void sub_001976A0_0x1976a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001976A0_0x1976a0");
#endif

    ctx->pc = 0x1976a0u;

    // 0x1976a0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1976a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1976a4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1976a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1976a8: 0x2463e640  addiu       $v1, $v1, -0x19C0
    ctx->pc = 0x1976a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960704));
    // 0x1976ac: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x1976acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1976b0: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x1976b0u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40E640u));
    // 0x1976b4: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x1976b4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40E650u));
    // 0x1976b8: 0x78650020  lq          $a1, 0x20($v1)
    ctx->pc = 0x1976b8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40E660u));
    // 0x1976bc: 0xdc630030  ld          $v1, 0x30($v1)
    ctx->pc = 0x1976bcu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x40E670u));
    // 0x1976c0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1976c0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1976c4: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x1976c4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x1976c8: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x1976c8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x1976cc: 0xfd030030  sd          $v1, 0x30($t0)
    ctx->pc = 0x1976ccu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 3));
    // 0x1976d0: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x1976d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1976d4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1976d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1976d8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1976d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1976dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1976dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1976e0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1976e4: 0x24650000  addiu       $a1, $v1, 0x0
    ctx->pc = 0x1976e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1976e8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x1976e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1976ec: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x1976ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1976f0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1976f4: 0xa4830092  sh          $v1, 0x92($a0)
    ctx->pc = 0x1976f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x1976f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1976F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1976FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976F8u;
        // 0x1976fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1976F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197700u;
}
