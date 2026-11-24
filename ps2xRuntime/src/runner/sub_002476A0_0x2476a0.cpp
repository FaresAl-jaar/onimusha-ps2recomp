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

// Function: sub_002476A0
// Address: 0x2476a0 - 0x247838
void sub_002476A0_0x2476a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002476A0_0x2476a0");
#endif

    switch (ctx->pc) {
        case 0x24772cu: goto label_24772c;
        case 0x247760u: goto label_247760;
        case 0x247778u: goto label_247778;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477d4u: goto label_2477d4;
        case 0x2477ecu: goto label_2477ec;
        default: break;
    }

    ctx->pc = 0x2476a0u;

    // 0x2476a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2476a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2476a4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2476a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2476a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2476ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2476acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476b0: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x2476b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x2476b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2476b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2476b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2476b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2476bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2476bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2476c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2476c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2476c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2476C8u;
    {
        const bool branch_taken_0x2476c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476C8u;
        // 0x2476cc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476c8) {
            ctx->pc = 0x2476E0u;
            goto label_2476e0;
        }
    }
    ctx->pc = 0x2476D0u;
    // 0x2476d0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2476d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2476D4u;
    {
        const bool branch_taken_0x2476d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476D4u;
        // 0x2476d8: 0x2484cd50  addiu       $a0, $a0, -0x32B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476d4) {
            ctx->pc = 0x247770u;
            goto label_247770;
        }
    }
    ctx->pc = 0x2476DCu;
    // 0x2476dc: 0x0  nop
    ctx->pc = 0x2476dcu;
    // NOP
label_2476e0:
    // 0x2476e0: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x2476e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x2476e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2476E4u;
    {
        const bool branch_taken_0x2476e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476E4u;
        // 0x2476e8: 0x3222003f  andi        $v0, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476e4) {
            ctx->pc = 0x2476F8u;
            goto label_2476f8;
        }
    }
    ctx->pc = 0x2476ECu;
    // 0x2476ec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2476ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2476f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2476F0u;
    {
        const bool branch_taken_0x2476f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F0u;
        // 0x2476f4: 0x2484cd70  addiu       $a0, $a0, -0x3290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476f0) {
            ctx->pc = 0x247770u;
            goto label_247770;
        }
    }
    ctx->pc = 0x2476F8u;
label_2476f8:
    // 0x2476f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2476F8u;
    {
        const bool branch_taken_0x2476f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F8u;
        // 0x2476fc: 0x2d020010  sltiu       $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476f8) {
            ctx->pc = 0x247710u;
            goto label_247710;
        }
    }
    ctx->pc = 0x247700u;
    // 0x247700: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x247700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x247704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247708: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x247708u;
    {
        const bool branch_taken_0x247708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247708u;
        // 0x24770c: 0x2484cd90  addiu       $a0, $a0, -0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247708) {
            ctx->pc = 0x247724u;
            goto label_247724;
        }
    }
    ctx->pc = 0x247710u;
label_247710:
    // 0x247710: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x247710u;
    {
        const bool branch_taken_0x247710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247710u;
        // 0x247714: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247710) {
            ctx->pc = 0x247738u;
            goto label_247738;
        }
    }
    ctx->pc = 0x247718u;
    // 0x247718: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x247718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24771c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x24771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247720: 0x2484cda8  addiu       $a0, $a0, -0x3258
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954408));
label_247724:
    // 0x247724: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x247724u;
    SET_GPR_U32(ctx, 31, 0x24772Cu);
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x247724u, 0x24772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24772Cu;
label_24772c:
    // 0x24772c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x24772Cu;
    {
        const bool branch_taken_0x24772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24772Cu;
        // 0x247730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24772c) {
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x247734u;
    // 0x247734: 0x0  nop
    ctx->pc = 0x247734u;
    // NOP
label_247738:
    // 0x247738: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x247738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x24773c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x247740: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x247740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x247744: 0x2610f240  addiu       $s0, $s0, -0xDC0
    ctx->pc = 0x247744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963776));
    // 0x247748: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x247748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24774c: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x24774cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247750: 0x15000032  bnez        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x247750u;
    {
        const bool branch_taken_0x247750 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x247754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247750u;
        // 0x247754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247750) {
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x247758u;
    // 0x247758: 0xc091d44  jal         func_247510
    ctx->pc = 0x247758u;
    SET_GPR_U32(ctx, 31, 0x247760u);
    ctx->pc = 0x247510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247510u, 0x247758u, 0x247760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247760u;
label_247760:
    // 0x247760: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247760u;
    {
        const bool branch_taken_0x247760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247760u;
        // 0x247764: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247760) {
            ctx->pc = 0x247780u;
            goto label_247780;
        }
    }
    ctx->pc = 0x247768u;
    // 0x247768: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x247768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24776c: 0x2484cdc0  addiu       $a0, $a0, -0x3240
    ctx->pc = 0x24776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954432));
label_247770:
    // 0x247770: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x247770u;
    SET_GPR_U32(ctx, 31, 0x247778u);
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x247770u, 0x247778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247778u;
label_247778:
    // 0x247778: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x247778u;
    {
        const bool branch_taken_0x247778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247778u;
        // 0x24777c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247778) {
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x247780u;
label_247780:
    // 0x247780: 0x2623ffc0  addiu       $v1, $s1, -0x40
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x247784: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x247784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x247788: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x247788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24778c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24778cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247790: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x247790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x247794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x247794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24779c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x24779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2477a0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2477a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x2477a4: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x2477a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x2477a8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2477a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2477ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2477acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2477b0: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2477b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2477b4: 0xc049590  jal         func_125640
    ctx->pc = 0x2477B4u;
    SET_GPR_U32(ctx, 31, 0x2477BCu);
    ctx->pc = 0x2477B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477B4u;
    // 0x2477b8: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2477B4u, 0x2477BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477BCu;
label_2477bc:
    // 0x2477bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2477c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2477c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2477c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2477c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2477cc: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x2477CCu;
    SET_GPR_U32(ctx, 31, 0x2477D4u);
    ctx->pc = 0x2477D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477CCu;
    // 0x2477d0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x2477CCu, 0x2477D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477D4u;
label_2477d4:
    // 0x2477d4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2477d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2477d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2477d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2477dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2477dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2477e4: 0xc043a86  jal         func_10EA18
    ctx->pc = 0x2477E4u;
    SET_GPR_U32(ctx, 31, 0x2477ECu);
    ctx->pc = 0x2477E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477E4u;
    // 0x2477e8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA18u, 0x2477E4u, 0x2477ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477ECu;
label_2477ec:
    // 0x2477ec: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x2477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x2477f0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2477f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2477f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2477f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2477f8: 0x246375e8  addiu       $v1, $v1, 0x75E8
    ctx->pc = 0x2477f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30184));
    // 0x2477fc: 0x244275d0  addiu       $v0, $v0, 0x75D0
    ctx->pc = 0x2477fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30160));
    // 0x247800: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x247800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x247804: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x247804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x247808: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x247808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x24780c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x24780cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x247810: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x247810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x247814: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x247814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x247818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x247818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24781c:
    // 0x24781c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24781cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247828: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x247828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24782c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247830: 0x3e00008  jr          $ra
    ctx->pc = 0x247830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247830u;
        // 0x247834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247838u;
}
