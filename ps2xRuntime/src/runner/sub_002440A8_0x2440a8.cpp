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

// Function: sub_002440A8
// Address: 0x2440a8 - 0x24411c
void sub_002440A8_0x2440a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002440A8_0x2440a8");
#endif

    switch (ctx->pc) {
        case 0x2440a8u: goto label_2440a8;
        case 0x2440acu: goto label_2440ac;
        case 0x2440b0u: goto label_2440b0;
        case 0x2440b4u: goto label_2440b4;
        case 0x2440b8u: goto label_2440b8;
        case 0x2440bcu: goto label_2440bc;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440c4u: goto label_2440c4;
        case 0x2440c8u: goto label_2440c8;
        case 0x2440ccu: goto label_2440cc;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440d4u: goto label_2440d4;
        case 0x2440d8u: goto label_2440d8;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440e0u: goto label_2440e0;
        case 0x2440e4u: goto label_2440e4;
        case 0x2440e8u: goto label_2440e8;
        case 0x2440ecu: goto label_2440ec;
        case 0x2440f0u: goto label_2440f0;
        case 0x2440f4u: goto label_2440f4;
        case 0x2440f8u: goto label_2440f8;
        case 0x2440fcu: goto label_2440fc;
        case 0x244100u: goto label_244100;
        case 0x244104u: goto label_244104;
        case 0x244108u: goto label_244108;
        case 0x24410cu: goto label_24410c;
        case 0x244110u: goto label_244110;
        case 0x244114u: goto label_244114;
        case 0x244118u: goto label_244118;
        default: break;
    }

    ctx->pc = 0x2440a8u;

label_2440a8:
    // 0x2440a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2440a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2440ac:
    // 0x2440ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2440acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2440b0:
    // 0x2440b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2440b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2440b4:
    // 0x2440b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2440b8:
    if (ctx->pc == 0x2440B8u) {
        ctx->pc = 0x2440B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440B4u;
        // 0x2440b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440BCu;
        goto label_2440bc;
    }
    ctx->pc = 0x2440B4u;
    {
        const bool branch_taken_0x2440b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2440B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440B4u;
        // 0x2440b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440b4) {
            ctx->pc = 0x2440D8u;
            goto label_2440d8;
        }
    }
    ctx->pc = 0x2440BCu;
label_2440bc:
    // 0x2440bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2440bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2440c0:
    // 0x2440c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2440c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2440c4:
    // 0x2440c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2440c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2440c8:
    // 0x2440c8: 0x2484bd10  addiu       $a0, $a0, -0x42F0
    ctx->pc = 0x2440c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950160));
label_2440cc:
    // 0x2440cc: 0x8090d8a  j           func_243628
label_2440d0:
    if (ctx->pc == 0x2440D0u) {
        ctx->pc = 0x2440D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440CCu;
        // 0x2440d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440D4u;
        goto label_2440d4;
    }
    ctx->pc = 0x2440CCu;
    ctx->pc = 0x2440D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440CCu;
    // 0x2440d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x2440D4u;
label_2440d4:
    // 0x2440d4: 0x0  nop
    ctx->pc = 0x2440d4u;
    // NOP
label_2440d8:
    // 0x2440d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2440dc:
    // 0x2440dc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2440dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2440e0:
    // 0x2440e0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2440e4:
    if (ctx->pc == 0x2440E4u) {
        ctx->pc = 0x2440E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440E0u;
        // 0x2440e4: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440E8u;
        goto label_2440e8;
    }
    ctx->pc = 0x2440E0u;
    {
        const bool branch_taken_0x2440e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2440e0) {
            ctx->pc = 0x2440E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2440E0u;
            // 0x2440e4: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244108u;
            goto label_244108;
        }
    }
    ctx->pc = 0x2440E8u;
label_2440e8:
    // 0x2440e8: 0x40f809  jalr        $v0
label_2440ec:
    if (ctx->pc == 0x2440ECu) {
        ctx->pc = 0x2440ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440E8u;
        // 0x2440ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440F0u;
        goto label_2440f0;
    }
    ctx->pc = 0x2440E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2440F0u);
        ctx->pc = 0x2440ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440E8u;
        // 0x2440ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2440E8u, 0x2440F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2440F0u;
label_2440f0:
    // 0x2440f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2440f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2440f4:
    // 0x2440f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2440f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2440f8:
    // 0x2440f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2440f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2440fc:
    // 0x2440fc: 0x8090fba  j           func_243EE8
label_244100:
    if (ctx->pc == 0x244100u) {
        ctx->pc = 0x244100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440FCu;
        // 0x244100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244104u;
        goto label_244104;
    }
    ctx->pc = 0x2440FCu;
    ctx->pc = 0x244100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440FCu;
    // 0x244100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EE8u;
    sub_00243EE8_0x243ee8(rdram, ctx, runtime); return;
    ctx->pc = 0x244104u;
label_244104:
    // 0x244104: 0x0  nop
    ctx->pc = 0x244104u;
    // NOP
label_244108:
    // 0x244108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24410c:
    // 0x24410c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244110:
    // 0x244110: 0x2484bd30  addiu       $a0, $a0, -0x42D0
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950192));
label_244114:
    // 0x244114: 0x8090d8a  j           func_243628
label_244118:
    if (ctx->pc == 0x244118u) {
        ctx->pc = 0x244118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244114u;
        // 0x244118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24411Cu;
        goto label_fallthrough_0x244114;
    }
    ctx->pc = 0x244114u;
    ctx->pc = 0x244118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244114u;
    // 0x244118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
label_fallthrough_0x244114:
    ctx->pc = 0x24411Cu;
}
