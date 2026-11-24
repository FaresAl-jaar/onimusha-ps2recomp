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

// Function: sub_003F1440
// Address: 0x3f1440 - 0x3f1530
void sub_003F1440_0x3f1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1440_0x3f1440");
#endif

    switch (ctx->pc) {
        case 0x3f1474u: goto label_3f1474;
        case 0x3f1494u: goto label_3f1494;
        case 0x3f14a8u: goto label_3f14a8;
        default: break;
    }

    ctx->pc = 0x3f1440u;

    // 0x3f1440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f1444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f1444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f1448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f144c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f1450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f1458: 0x78c3c  dsll32      $s1, $a3, 16
    ctx->pc = 0x3f1458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) << (32 + 16));
    // 0x3f145c: 0x8843c  dsll32      $s0, $t0, 16
    ctx->pc = 0x3f145cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3f1460: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3f1460u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x3f1464: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3f1464u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3f1468: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f1468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f146c: 0xc0d0964  jal         func_342590
    ctx->pc = 0x3F146Cu;
    SET_GPR_U32(ctx, 31, 0x3F1474u);
    ctx->pc = 0x3F1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F146Cu;
    // 0x3f1470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x3F146Cu, 0x3F1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1474u;
label_3f1474:
    // 0x3f1474: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x3f1474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x3f1478: 0x1603000d  bne         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3F1478u;
    {
        const bool branch_taken_0x3f1478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1478) {
            ctx->pc = 0x3F14B0u;
            goto label_3f14b0;
        }
    }
    ctx->pc = 0x3F1480u;
    // 0x3f1480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f1480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1484: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1484u;
    {
        const bool branch_taken_0x3f1484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f1484) {
            ctx->pc = 0x3F14A0u;
            goto label_3f14a0;
        }
    }
    ctx->pc = 0x3F148Cu;
    // 0x3f148c: 0xc0d16a0  jal         func_345A80
    ctx->pc = 0x3F148Cu;
    SET_GPR_U32(ctx, 31, 0x3F1494u);
    ctx->pc = 0x3F1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F148Cu;
    // 0x3f1490: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A80u, 0x3F148Cu, 0x3F1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1494u;
label_3f1494:
    // 0x3f1494: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3F1494u;
    {
        const bool branch_taken_0x3f1494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1494) {
            ctx->pc = 0x3F1518u;
            goto label_3f1518;
        }
    }
    ctx->pc = 0x3F149Cu;
    // 0x3f149c: 0x0  nop
    ctx->pc = 0x3f149cu;
    // NOP
label_3f14a0:
    // 0x3f14a0: 0xc0d168c  jal         func_345A30
    ctx->pc = 0x3F14A0u;
    SET_GPR_U32(ctx, 31, 0x3F14A8u);
    ctx->pc = 0x3F14A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14A0u;
    // 0x3f14a4: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x3F14A0u, 0x3F14A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14A8u;
label_3f14a8:
    // 0x3f14a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3F14A8u;
    {
        const bool branch_taken_0x3f14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f14a8) {
            ctx->pc = 0x3F1518u;
            goto label_3f1518;
        }
    }
    ctx->pc = 0x3F14B0u;
label_3f14b0:
    // 0x3f14b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f14b4: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3F14B4u;
    {
        const bool branch_taken_0x3f14b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f14b4) {
            ctx->pc = 0x3F14F0u;
            goto label_3f14f0;
        }
    }
    ctx->pc = 0x3F14BCu;
    // 0x3f14bc: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x3f14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3f14c0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x3f14c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x3f14c4: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x3f14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3f14c8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x3f14c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x3f14cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3f14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3f14d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3f14d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3f14d4: 0x8ca5007c  lw          $a1, 0x7C($a1)
    ctx->pc = 0x3f14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x3f14d8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3f14d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3f14dc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3f14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3f14e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f14e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f14e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F14E4u;
    {
        const bool branch_taken_0x3f14e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F14E4u;
        // 0x3f14e8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f14e4) {
            ctx->pc = 0x3F1518u;
            goto label_3f1518;
        }
    }
    ctx->pc = 0x3F14ECu;
    // 0x3f14ec: 0x0  nop
    ctx->pc = 0x3f14ecu;
    // NOP
label_3f14f0:
    // 0x3f14f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x3f14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3f14f4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x3f14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x3f14f8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3f14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3f14fc: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x3f14fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3f1500: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3f1500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3f1504: 0x8ca5007c  lw          $a1, 0x7C($a1)
    ctx->pc = 0x3f1504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x3f1508: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3f1508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3f150c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3f150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3f1510: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3f1510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3f1514: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3f1514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3f1518:
    // 0x3f1518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f1518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f151c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f151cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1528: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1528u;
        // 0x3f152c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1530u;
}
