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

// Function: sub_0010A1E8
// Address: 0x10a1e8 - 0x10a328
void sub_0010A1E8_0x10a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A1E8_0x10a1e8");
#endif

    switch (ctx->pc) {
        case 0x10a238u: goto label_10a238;
        case 0x10a274u: goto label_10a274;
        case 0x10a290u: goto label_10a290;
        case 0x10a2bcu: goto label_10a2bc;
        default: break;
    }

    ctx->pc = 0x10a1e8u;

    // 0x10a1e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10a1ec: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a1f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a1f4: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x10a1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x10a1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a1fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a200: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10a204: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10a204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a208: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a20c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x10a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x10a210: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a218: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a21c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10a220: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x10a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10a224: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x10a224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x10a228: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10a228u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a22c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10a22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10a230: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A230u;
    SET_GPR_U32(ctx, 31, 0x10A238u);
    ctx->pc = 0x10A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A230u;
    // 0x10a234: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A230u, 0x10A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A238u;
label_10a238:
    // 0x10a238: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10a238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a23c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x10a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x10a240: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x10a240u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x10a244: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x10a244u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10a248: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10a24c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x10a250: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x10a250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x10a254: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x10a254u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x10a258: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x10a258u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10a25c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A25Cu;
    {
        const bool branch_taken_0x10a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x10A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A25Cu;
        // 0x10a260: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a25c) {
            ctx->pc = 0x10A274u;
            goto label_10a274;
        }
    }
    ctx->pc = 0x10A264u;
    // 0x10a264: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10a264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10a268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a26c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10A26Cu;
    SET_GPR_U32(ctx, 31, 0x10A274u);
    ctx->pc = 0x10A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A26Cu;
    // 0x10a270: 0x24a51fe8  addiu       $a1, $a1, 0x1FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10A26Cu, 0x10A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A274u;
label_10a274:
    // 0x10a274: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x10a274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x10a278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a27c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10a280: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a284: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x10a284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x10a288: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A288u;
    SET_GPR_U32(ctx, 31, 0x10A290u);
    ctx->pc = 0x10A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A288u;
    // 0x10a28c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A288u, 0x10A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A290u;
label_10a290:
    // 0x10a290: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x10a290u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10a294: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x10a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10a298: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A298u;
    {
        const bool branch_taken_0x10a298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A298u;
        // 0x10a29c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a298) {
            ctx->pc = 0x10A2BCu;
            goto label_10a2bc;
        }
    }
    ctx->pc = 0x10A2A0u;
    // 0x10a2a0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A2A0u;
    {
        const bool branch_taken_0x10a2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2A0u;
        // 0x10a2a4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2a0) {
            ctx->pc = 0x10A2BCu;
            goto label_10a2bc;
        }
    }
    ctx->pc = 0x10A2A8u;
    // 0x10a2a8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A2A8u;
    {
        const bool branch_taken_0x10a2a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2A8u;
        // 0x10a2ac: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2a8) {
            ctx->pc = 0x10A2BCu;
            goto label_10a2bc;
        }
    }
    ctx->pc = 0x10A2B0u;
    // 0x10a2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2b4: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10A2B4u;
    SET_GPR_U32(ctx, 31, 0x10A2BCu);
    ctx->pc = 0x10A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2B4u;
    // 0x10a2b8: 0x24a52010  addiu       $a1, $a1, 0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10A2B4u, 0x10A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2BCu;
label_10a2bc:
    // 0x10a2bc: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x10a2c0: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x10a2c4: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x10a2c8: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x10a2cc: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x10a2d0: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x10a2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x10a2d4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x10a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x10a2d8: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x10a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x10a2dc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x10a2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x10a2e0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x10a2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10a2e4: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x10a2e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x10a2e8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10a2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10a2ec: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10a2f0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x10a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x10a2f4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x10a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x10a2f8: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x10a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x10a2fc: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x10a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x10a300: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x10a300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x10a304: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a308: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10a308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a30c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a30cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a310: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a314: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a320: 0x3e00008  jr          $ra
    ctx->pc = 0x10A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A320u;
        // 0x10a324: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A328u;
}
