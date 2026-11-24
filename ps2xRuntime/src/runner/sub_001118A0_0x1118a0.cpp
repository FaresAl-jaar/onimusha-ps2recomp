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

// Function: sub_001118A0
// Address: 0x1118a0 - 0x11196c
void sub_001118A0_0x1118a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001118A0_0x1118a0");
#endif

    switch (ctx->pc) {
        case 0x1118a0u: goto label_1118a0;
        case 0x1118a4u: goto label_1118a4;
        case 0x1118a8u: goto label_1118a8;
        case 0x1118acu: goto label_1118ac;
        case 0x1118b0u: goto label_1118b0;
        case 0x1118b4u: goto label_1118b4;
        case 0x1118b8u: goto label_1118b8;
        case 0x1118bcu: goto label_1118bc;
        case 0x1118c0u: goto label_1118c0;
        case 0x1118c4u: goto label_1118c4;
        case 0x1118c8u: goto label_1118c8;
        case 0x1118ccu: goto label_1118cc;
        case 0x1118d0u: goto label_1118d0;
        case 0x1118d4u: goto label_1118d4;
        case 0x1118d8u: goto label_1118d8;
        case 0x1118dcu: goto label_1118dc;
        case 0x1118e0u: goto label_1118e0;
        case 0x1118e4u: goto label_1118e4;
        case 0x1118e8u: goto label_1118e8;
        case 0x1118ecu: goto label_1118ec;
        case 0x1118f0u: goto label_1118f0;
        case 0x1118f4u: goto label_1118f4;
        case 0x1118f8u: goto label_1118f8;
        case 0x1118fcu: goto label_1118fc;
        case 0x111900u: goto label_111900;
        case 0x111904u: goto label_111904;
        case 0x111908u: goto label_111908;
        case 0x11190cu: goto label_11190c;
        case 0x111910u: goto label_111910;
        case 0x111914u: goto label_111914;
        case 0x111918u: goto label_111918;
        case 0x11191cu: goto label_11191c;
        case 0x111920u: goto label_111920;
        case 0x111924u: goto label_111924;
        case 0x111928u: goto label_111928;
        case 0x11192cu: goto label_11192c;
        case 0x111930u: goto label_111930;
        case 0x111934u: goto label_111934;
        case 0x111938u: goto label_111938;
        case 0x11193cu: goto label_11193c;
        case 0x111940u: goto label_111940;
        case 0x111944u: goto label_111944;
        case 0x111948u: goto label_111948;
        case 0x11194cu: goto label_11194c;
        case 0x111950u: goto label_111950;
        case 0x111954u: goto label_111954;
        case 0x111958u: goto label_111958;
        case 0x11195cu: goto label_11195c;
        case 0x111960u: goto label_111960;
        case 0x111964u: goto label_111964;
        case 0x111968u: goto label_111968;
        default: break;
    }

    ctx->pc = 0x1118a0u;

label_1118a0:
    // 0x1118a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1118a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1118a4:
    // 0x1118a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1118a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1118a8:
    // 0x1118a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1118a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1118ac:
    // 0x1118ac: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1118acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1118b0:
    // 0x1118b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1118b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1118b4:
    // 0x1118b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1118b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1118b8:
    // 0x1118b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1118b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1118bc:
    // 0x1118bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1118bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1118c0:
    // 0x1118c0: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1118c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1118c4:
    // 0x1118c4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1118c8:
    if (ctx->pc == 0x1118C8u) {
        ctx->pc = 0x1118C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C4u;
        // 0x1118c8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118CCu;
        goto label_1118cc;
    }
    ctx->pc = 0x1118C4u;
    {
        const bool branch_taken_0x1118c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1118C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C4u;
        // 0x1118c8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118c4) {
            ctx->pc = 0x1118ECu;
            goto label_1118ec;
        }
    }
    ctx->pc = 0x1118CCu;
label_1118cc:
    // 0x1118cc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1118d0:
    if (ctx->pc == 0x1118D0u) {
        ctx->pc = 0x1118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118CCu;
        // 0x1118d0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118D4u;
        goto label_1118d4;
    }
    ctx->pc = 0x1118CCu;
    {
        const bool branch_taken_0x1118cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118CCu;
        // 0x1118d0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118cc) {
            ctx->pc = 0x111934u;
            goto label_111934;
        }
    }
    ctx->pc = 0x1118D4u;
label_1118d4:
    // 0x1118d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1118d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1118d8:
    // 0x1118d8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1118d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1118dc:
    // 0x1118dc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1118e0:
    if (ctx->pc == 0x1118E0u) {
        ctx->pc = 0x1118E4u;
        goto label_1118e4;
    }
    ctx->pc = 0x1118DCu;
    {
        const bool branch_taken_0x1118dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1118dc) {
            ctx->pc = 0x111924u;
            goto label_111924;
        }
    }
    ctx->pc = 0x1118E4u;
label_1118e4:
    // 0x1118e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1118e8:
    if (ctx->pc == 0x1118E8u) {
        ctx->pc = 0x1118E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E4u;
        // 0x1118e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118ECu;
        goto label_1118ec;
    }
    ctx->pc = 0x1118E4u;
    {
        const bool branch_taken_0x1118e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E4u;
        // 0x1118e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118e4) {
            ctx->pc = 0x111938u;
            goto label_111938;
        }
    }
    ctx->pc = 0x1118ECu;
label_1118ec:
    // 0x1118ec: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x1118ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1118f0:
    // 0x1118f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1118f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1118f4:
    // 0x1118f4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1118f8:
    if (ctx->pc == 0x1118F8u) {
        ctx->pc = 0x1118F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118F4u;
        // 0x1118f8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118FCu;
        goto label_1118fc;
    }
    ctx->pc = 0x1118F4u;
    {
        const bool branch_taken_0x1118f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1118f4) {
            ctx->pc = 0x1118F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1118F4u;
            // 0x1118f8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111938u;
            goto label_111938;
        }
    }
    ctx->pc = 0x1118FCu;
label_1118fc:
    // 0x1118fc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_111900:
    // 0x111900: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x111900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_111904:
    // 0x111904: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x111904u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111908:
    // 0x111908: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x111908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_11190c:
    // 0x11190c: 0x40f809  jalr        $v0
label_111910:
    if (ctx->pc == 0x111910u) {
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111914u;
        goto label_111914;
    }
    ctx->pc = 0x11190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111914u);
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11190Cu, 0x111914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111914u;
label_111914:
    // 0x111914: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x111914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_111918:
    // 0x111918: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x111918u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11191c:
    // 0x11191c: 0x10000005  b           . + 4 + (0x5 << 2)
label_111920:
    if (ctx->pc == 0x111920u) {
        ctx->pc = 0x111920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11191Cu;
        // 0x111920: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111924u;
        goto label_111924;
    }
    ctx->pc = 0x11191Cu;
    {
        const bool branch_taken_0x11191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11191Cu;
        // 0x111920: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11191c) {
            ctx->pc = 0x111934u;
            goto label_111934;
        }
    }
    ctx->pc = 0x111924u;
label_111924:
    // 0x111924: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x111924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_111928:
    // 0x111928: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x111928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_11192c:
    // 0x11192c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x11192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_111930:
    // 0x111930: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x111930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_111934:
    // 0x111934: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x111934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_111938:
    // 0x111938: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_11193c:
    if (ctx->pc == 0x11193Cu) {
        ctx->pc = 0x111940u;
        goto label_111940;
    }
    ctx->pc = 0x111938u;
    {
        const bool branch_taken_0x111938 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x111938) {
            ctx->pc = 0x111948u;
            goto label_111948;
        }
    }
    ctx->pc = 0x111940u;
label_111940:
    // 0x111940: 0xc043804  jal         func_10E010
label_111944:
    if (ctx->pc == 0x111944u) {
        ctx->pc = 0x111948u;
        goto label_111948;
    }
    ctx->pc = 0x111940u;
    SET_GPR_U32(ctx, 31, 0x111948u);
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x111940u, 0x111948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111948u;
label_111948:
    // 0x111948: 0xc044604  jal         func_111810
label_11194c:
    if (ctx->pc == 0x11194Cu) {
        ctx->pc = 0x11194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111948u;
        // 0x11194c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111950u;
        goto label_111950;
    }
    ctx->pc = 0x111948u;
    SET_GPR_U32(ctx, 31, 0x111950u);
    ctx->pc = 0x11194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111948u;
    // 0x11194c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111810u, 0x111948u, 0x111950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111950u;
label_111950:
    // 0x111950: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x111950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_111954:
    // 0x111954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111958:
    // 0x111958: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11195c:
    // 0x11195c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11195cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111960:
    // 0x111960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111964:
    // 0x111964: 0x3e00008  jr          $ra
label_111968:
    if (ctx->pc == 0x111968u) {
        ctx->pc = 0x111968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111964u;
        // 0x111968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11196Cu;
        goto label_fallthrough_0x111964;
    }
    ctx->pc = 0x111964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111964u;
        // 0x111968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111964:
    ctx->pc = 0x11196Cu;
}
