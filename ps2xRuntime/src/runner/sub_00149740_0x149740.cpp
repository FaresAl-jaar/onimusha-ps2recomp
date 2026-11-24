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

// Function: sub_00149740
// Address: 0x149740 - 0x1498e4
void sub_00149740_0x149740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149740_0x149740");
#endif

    switch (ctx->pc) {
        case 0x149798u: goto label_149798;
        case 0x1498b8u: goto label_1498b8;
        default: break;
    }

    ctx->pc = 0x149740u;

    // 0x149740: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x149740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x149744: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x149744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x149748: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x149748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14974c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x149750: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x149750u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149754: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x149754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x149758: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x149758u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14975c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149760: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x149760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149768: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x149768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14976c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149770: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x149770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x149774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149778: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x149778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14977c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149780: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x149780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149784: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x149784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149788: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x149788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14978c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x14978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x149790: 0xc05e360  jal         func_178D80
    ctx->pc = 0x149790u;
    SET_GPR_U32(ctx, 31, 0x149798u);
    ctx->pc = 0x149794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149790u;
    // 0x149794: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x149790u, 0x149798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149798u;
label_149798:
    // 0x149798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14979c: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x14979Cu;
    {
        const bool branch_taken_0x14979c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14979Cu;
        // 0x1497a0: 0x26a37000  addiu       $v1, $s5, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 28672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14979c) {
            ctx->pc = 0x1498B8u;
            goto label_1498b8;
        }
    }
    ctx->pc = 0x1497A4u;
    // 0x1497a4: 0x26827900  addiu       $v0, $s4, 0x7900
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 30976));
    // 0x1497a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1497a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1497ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1497b0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1497b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1497b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1497b8: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1497b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1497bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1497bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1497c0: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x1497c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1497c4: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x1497c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x1497c8: 0x34470116  ori         $a3, $v0, 0x116
    ctx->pc = 0x1497c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)278);
    // 0x1497cc: 0x111500  sll         $v0, $s1, 20
    ctx->pc = 0x1497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
    // 0x1497d0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1497d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1497d4: 0x101602  srl         $v0, $s0, 24
    ctx->pc = 0x1497d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x1497d8: 0x2c430080  sltiu       $v1, $v0, 0x80
    ctx->pc = 0x1497d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1497dc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1497dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1497e0: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x1497e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x1497e4: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x1497e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x1497e8: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x1497e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x1497ec: 0xacb30024  sw          $s3, 0x24($a1)
    ctx->pc = 0x1497ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 19));
    // 0x1497f0: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x1497f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
    // 0x1497f4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x1497f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1497f8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1497f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1497fc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1497fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x149800: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x149800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x149804: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x149804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x149808: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x149808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x14980c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x149810: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x149810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149814: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x149814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x149818: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x149818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x14981c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x149820: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x149824: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x149828: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x14982c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x14982cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x149830: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x149830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x149834: 0xacb60010  sw          $s6, 0x10($a1)
    ctx->pc = 0x149834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 22));
    // 0x149838: 0xa4b70014  sh          $s7, 0x14($a1)
    ctx->pc = 0x149838u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 23));
    // 0x14983c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x14983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149840: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149840u;
    {
        const bool branch_taken_0x149840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149840u;
        // 0x149844: 0xa4a40016  sh          $a0, 0x16($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149840) {
            ctx->pc = 0x149858u;
            goto label_149858;
        }
    }
    ctx->pc = 0x149848u;
    // 0x149848: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x149848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14984c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14984Cu;
    {
        const bool branch_taken_0x14984c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14984c) {
            ctx->pc = 0x1498A8u;
            goto label_1498a8;
        }
    }
    ctx->pc = 0x149854u;
    // 0x149854: 0x0  nop
    ctx->pc = 0x149854u;
    // NOP
label_149858:
    // 0x149858: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x149858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14985c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14985Cu;
    {
        const bool branch_taken_0x14985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14985c) {
            ctx->pc = 0x149880u;
            goto label_149880;
        }
    }
    ctx->pc = 0x149864u;
    // 0x149864: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x149864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x149868: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x149868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14986c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x14986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x149870: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x149870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149874: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x149874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x149878: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149878u;
    {
        const bool branch_taken_0x149878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149878u;
        // 0x14987c: 0xa0a0000f  sb          $zero, 0xF($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149878) {
            ctx->pc = 0x149898u;
            goto label_149898;
        }
    }
    ctx->pc = 0x149880u;
label_149880:
    // 0x149880: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x149884: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x149884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x149888: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x149888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x14988c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x149890: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x149894: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x149894u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
label_149898:
    // 0x149898: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x149898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14989c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14989cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1498a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1498a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1498a4: 0x0  nop
    ctx->pc = 0x1498a4u;
    // NOP
label_1498a8:
    // 0x1498a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1498a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1498ac: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1498acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1498b0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1498B0u;
    SET_GPR_U32(ctx, 31, 0x1498B8u);
    ctx->pc = 0x1498B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1498B0u;
    // 0x1498b4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1498B0u, 0x1498B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498B8u;
label_1498b8:
    // 0x1498b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1498b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1498bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1498bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1498c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1498c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1498c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1498c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1498c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1498c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1498cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1498ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1498d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1498d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1498d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1498d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1498d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1498d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1498dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1498DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1498E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498DCu;
        // 0x1498e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1498DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1498E4u;
}
