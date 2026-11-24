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

// Function: sub_002713A0
// Address: 0x2713a0 - 0x2714dc
void sub_002713A0_0x2713a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002713A0_0x2713a0");
#endif

    switch (ctx->pc) {
        case 0x2713e8u: goto label_2713e8;
        case 0x27148cu: goto label_27148c;
        case 0x2714acu: goto label_2714ac;
        default: break;
    }

    ctx->pc = 0x2713a0u;

    // 0x2713a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2713a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2713a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2713a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2713a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2713a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2713ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2713acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2713b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2713b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2713b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2713b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2713b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2713bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2713c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2713c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2713c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2713c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2713c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2713ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2713d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2713d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713d4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2713d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713d8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2713d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713dc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2713dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2713e0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2713E0u;
    SET_GPR_U32(ctx, 31, 0x2713E8u);
    ctx->pc = 0x2713E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713E0u;
    // 0x2713e4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2713E0u, 0x2713E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713E8u;
label_2713e8:
    // 0x2713e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2713E8u;
    {
        const bool branch_taken_0x2713e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2713e8) {
            ctx->pc = 0x2713F8u;
            goto label_2713f8;
        }
    }
    ctx->pc = 0x2713F0u;
    // 0x2713f0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2713F0u;
    {
        const bool branch_taken_0x2713f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F0u;
        // 0x2713f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713f0) {
            ctx->pc = 0x2714B8u;
            goto label_2714b8;
        }
    }
    ctx->pc = 0x2713F8u;
label_2713f8:
    // 0x2713f8: 0x26a30700  addiu       $v1, $s5, 0x700
    ctx->pc = 0x2713f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1792));
    // 0x2713fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2713fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x271400: 0x26830f20  addiu       $v1, $s4, 0xF20
    ctx->pc = 0x271400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3872));
    // 0x271404: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x271404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x271408: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x271408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x27140c: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x27140cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271410: 0x26430700  addiu       $v1, $s2, 0x700
    ctx->pc = 0x271410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x271414: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x271414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x271418: 0x26230f20  addiu       $v1, $s1, 0xF20
    ctx->pc = 0x271418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3872));
    // 0x27141c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x27141cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x271420: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x271420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x271424: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x271424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271428: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x271428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27142c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27142cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x271430: 0x3c031418  lui         $v1, 0x1418
    ctx->pc = 0x271430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5144 << 16));
    // 0x271434: 0x34640046  ori         $a0, $v1, 0x46
    ctx->pc = 0x271434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)70);
    // 0x271438: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x271438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x27143c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x27143cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x271440: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x271440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x271444: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x271444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x271448: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x271448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x27144c: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x27144cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x271450: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x271450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x271454: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x271454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x271458: 0xac53001c  sw          $s3, 0x1C($v0)
    ctx->pc = 0x271458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 19));
    // 0x27145c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x271460: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x271460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x271464: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x271464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x271468: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x271468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x27146c: 0x8f838898  lw          $v1, -0x7768($gp)
    ctx->pc = 0x27146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x271470: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271470u;
    {
        const bool branch_taken_0x271470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271470) {
            ctx->pc = 0x271498u;
            goto label_271498;
        }
    }
    ctx->pc = 0x271478u;
    // 0x271478: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x27147c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27147cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271484: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271484u;
    SET_GPR_U32(ctx, 31, 0x27148Cu);
    ctx->pc = 0x271488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271484u;
    // 0x271488: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271484u, 0x27148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27148Cu;
label_27148c:
    // 0x27148c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27148Cu;
    {
        const bool branch_taken_0x27148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27148c) {
            ctx->pc = 0x2714B0u;
            goto label_2714b0;
        }
    }
    ctx->pc = 0x271494u;
    // 0x271494: 0x0  nop
    ctx->pc = 0x271494u;
    // NOP
label_271498:
    // 0x271498: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x27149c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27149cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2714a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2714a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714a4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2714A4u;
    SET_GPR_U32(ctx, 31, 0x2714ACu);
    ctx->pc = 0x2714A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714A4u;
    // 0x2714a8: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2714A4u, 0x2714ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714ACu;
label_2714ac:
    // 0x2714ac: 0x0  nop
    ctx->pc = 0x2714acu;
    // NOP
label_2714b0:
    // 0x2714b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2714b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2714b4: 0x0  nop
    ctx->pc = 0x2714b4u;
    // NOP
label_2714b8:
    // 0x2714b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2714b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2714bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2714bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2714c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2714c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2714c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2714c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2714c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2714c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2714cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2714ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2714d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2714d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2714d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2714D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714D4u;
        // 0x2714d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2714DCu;
}
