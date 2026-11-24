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

// Function: sub_0039C2E0
// Address: 0x39c2e0 - 0x39c3bc
void sub_0039C2E0_0x39c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C2E0_0x39c2e0");
#endif

    switch (ctx->pc) {
        case 0x39c340u: goto label_39c340;
        case 0x39c368u: goto label_39c368;
        case 0x39c390u: goto label_39c390;
        case 0x39c3a0u: goto label_39c3a0;
        case 0x39c3a8u: goto label_39c3a8;
        default: break;
    }

    ctx->pc = 0x39c2e0u;

    // 0x39c2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c2e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c2e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c2f0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x39c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39c2f4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x39c2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x39c2f8: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39c2fc: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x39c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39c300: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x39c300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x39c304: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39c304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39c308: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x39c308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39c30c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x39c30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x39c310: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39c310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39c314: 0xa0852bd8  sb          $a1, 0x2BD8($a0)
    ctx->pc = 0x39c314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11224), (uint8_t)GPR_U32(ctx, 5));
    // 0x39c318: 0xa0862bd7  sb          $a2, 0x2BD7($a0)
    ctx->pc = 0x39c318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11223), (uint8_t)GPR_U32(ctx, 6));
    // 0x39c31c: 0x90832bd7  lbu         $v1, 0x2BD7($a0)
    ctx->pc = 0x39c31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11223)));
    // 0x39c320: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39C320u;
    {
        const bool branch_taken_0x39c320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C320u;
        // 0x39c324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c320) {
            ctx->pc = 0x39C360u;
            goto label_39c360;
        }
    }
    ctx->pc = 0x39C328u;
    // 0x39c328: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C328u;
    {
        const bool branch_taken_0x39c328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c328) {
            ctx->pc = 0x39C338u;
            goto label_39c338;
        }
    }
    ctx->pc = 0x39C330u;
    // 0x39c330: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x39C330u;
    {
        const bool branch_taken_0x39c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c330) {
            ctx->pc = 0x39C388u;
            goto label_39c388;
        }
    }
    ctx->pc = 0x39C338u;
label_39c338:
    // 0x39c338: 0xc0e6f60  jal         func_39BD80
    ctx->pc = 0x39C338u;
    SET_GPR_U32(ctx, 31, 0x39C340u);
    ctx->pc = 0x39BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD80u, 0x39C338u, 0x39C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C340u;
label_39c340:
    // 0x39c340: 0x92032bd8  lbu         $v1, 0x2BD8($s0)
    ctx->pc = 0x39c340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11224)));
    // 0x39c344: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x39c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x39c348: 0x2442c9a0  addiu       $v0, $v0, -0x3660
    ctx->pc = 0x39c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
    // 0x39c34c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39c350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c354: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x39c354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c358: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39C358u;
    {
        const bool branch_taken_0x39c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C358u;
        // 0x39c35c: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c358) {
            ctx->pc = 0x39C388u;
            goto label_39c388;
        }
    }
    ctx->pc = 0x39C360u;
label_39c360:
    // 0x39c360: 0xc0e6f6c  jal         func_39BDB0
    ctx->pc = 0x39C360u;
    SET_GPR_U32(ctx, 31, 0x39C368u);
    ctx->pc = 0x39BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDB0u, 0x39C360u, 0x39C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C368u;
label_39c368:
    // 0x39c368: 0x92032bd8  lbu         $v1, 0x2BD8($s0)
    ctx->pc = 0x39c368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11224)));
    // 0x39c36c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x39c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x39c370: 0x2442ca00  addiu       $v0, $v0, -0x3600
    ctx->pc = 0x39c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
    // 0x39c374: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39c374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39c378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c37c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x39c37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c380: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x39c380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x39c384: 0x0  nop
    ctx->pc = 0x39c384u;
    // NOP
label_39c388:
    // 0x39c388: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39C388u;
    SET_GPR_U32(ctx, 31, 0x39C390u);
    ctx->pc = 0x39C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C388u;
    // 0x39c38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39C388u, 0x39C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C390u;
label_39c390:
    // 0x39c390: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x39c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x39c394: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39c394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39c398: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39C398u;
    SET_GPR_U32(ctx, 31, 0x39C3A0u);
    ctx->pc = 0x39C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C398u;
    // 0x39c39c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39C398u, 0x39C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C3A0u;
label_39c3a0:
    // 0x39c3a0: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39C3A0u;
    SET_GPR_U32(ctx, 31, 0x39C3A8u);
    ctx->pc = 0x39C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C3A0u;
    // 0x39c3a4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39C3A0u, 0x39C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C3A8u;
label_39c3a8:
    // 0x39c3a8: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x39c3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x39c3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x39C3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3B4u;
        // 0x39c3b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C3BCu;
}
