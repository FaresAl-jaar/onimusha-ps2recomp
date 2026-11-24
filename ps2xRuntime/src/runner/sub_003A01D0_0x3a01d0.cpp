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

// Function: sub_003A01D0
// Address: 0x3a01d0 - 0x3a0250
void sub_003A01D0_0x3a01d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A01D0_0x3a01d0");
#endif

    ctx->pc = 0x3a01d0u;

    // 0x3a01d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3a01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3a01d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a01d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a01d8: 0x2463cac0  addiu       $v1, $v1, -0x3540
    ctx->pc = 0x3a01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953664));
    // 0x3a01dc: 0x27a90000  addiu       $t1, $sp, 0x0
    ctx->pc = 0x3a01dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x3a01e0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x3a01e0u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x65CAC0u));
    // 0x3a01e4: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x3a01e4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x65CAC8u));
    // 0x3a01e8: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x3a01e8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x3a01ec: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A01ECu;
    {
        const bool branch_taken_0x3a01ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01ECu;
        // 0x3a01f0: 0xa5230008  sh          $v1, 0x8($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01ec) {
            ctx->pc = 0x3A0248u;
            goto label_3a0248;
        }
    }
    ctx->pc = 0x3A01F4u;
    // 0x3a01f4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3a01f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3a01f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a01f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a01fc: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x3a01fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x3a0200: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0200u;
    {
        const bool branch_taken_0x3a0200 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0200u;
        // 0x3a0204: 0xa0880005  sb          $t0, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0200) {
            ctx->pc = 0x3A0210u;
            goto label_3a0210;
        }
    }
    ctx->pc = 0x3A0208u;
    // 0x3a0208: 0x64060080  daddiu      $a2, $zero, 0x80
    ctx->pc = 0x3a0208u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x3a020c: 0x0  nop
    ctx->pc = 0x3a020cu;
    // NOP
label_3a0210:
    // 0x3a0210: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x3a0210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3a0214: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3a0214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3a0218: 0xa0860004  sb          $a2, 0x4($a0)
    ctx->pc = 0x3a0218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a021c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x3a021cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a0220: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0220u;
    {
        const bool branch_taken_0x3a0220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0220u;
        // 0x3a0224: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0220) {
            ctx->pc = 0x3A0230u;
            goto label_3a0230;
        }
    }
    ctx->pc = 0x3A0228u;
    // 0x3a0228: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3a0228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a022c: 0x0  nop
    ctx->pc = 0x3a022cu;
    // NOP
label_3a0230:
    // 0x3a0230: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x3a0230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3a0234: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3a0234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3a0238: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3a0238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3a023c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3a023cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a0240: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x3a0240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a0244: 0x0  nop
    ctx->pc = 0x3a0244u;
    // NOP
label_3a0248:
    // 0x3a0248: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0248u;
        // 0x3a024c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0250u;
}
