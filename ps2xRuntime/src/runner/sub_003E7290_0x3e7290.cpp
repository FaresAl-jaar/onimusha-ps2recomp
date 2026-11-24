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

// Function: sub_003E7290
// Address: 0x3e7290 - 0x3e7a04
void sub_003E7290_0x3e7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7290_0x3e7290");
#endif

    switch (ctx->pc) {
        case 0x3e72bcu: goto label_3e72bc;
        case 0x3e72f8u: goto label_3e72f8;
        case 0x3e7328u: goto label_3e7328;
        case 0x3e73b0u: goto label_3e73b0;
        case 0x3e7408u: goto label_3e7408;
        case 0x3e7430u: goto label_3e7430;
        case 0x3e7464u: goto label_3e7464;
        case 0x3e7488u: goto label_3e7488;
        case 0x3e74acu: goto label_3e74ac;
        case 0x3e74c8u: goto label_3e74c8;
        case 0x3e74dcu: goto label_3e74dc;
        case 0x3e7538u: goto label_3e7538;
        case 0x3e7560u: goto label_3e7560;
        case 0x3e7584u: goto label_3e7584;
        case 0x3e75b8u: goto label_3e75b8;
        case 0x3e75f0u: goto label_3e75f0;
        case 0x3e7614u: goto label_3e7614;
        case 0x3e764cu: goto label_3e764c;
        case 0x3e7670u: goto label_3e7670;
        case 0x3e76a0u: goto label_3e76a0;
        case 0x3e76c4u: goto label_3e76c4;
        case 0x3e76fcu: goto label_3e76fc;
        case 0x3e776cu: goto label_3e776c;
        case 0x3e7778u: goto label_3e7778;
        case 0x3e77dcu: goto label_3e77dc;
        case 0x3e783cu: goto label_3e783c;
        case 0x3e7844u: goto label_3e7844;
        case 0x3e7868u: goto label_3e7868;
        case 0x3e7880u: goto label_3e7880;
        case 0x3e789cu: goto label_3e789c;
        case 0x3e78d8u: goto label_3e78d8;
        case 0x3e7904u: goto label_3e7904;
        case 0x3e795cu: goto label_3e795c;
        case 0x3e797cu: goto label_3e797c;
        case 0x3e799cu: goto label_3e799c;
        case 0x3e79bcu: goto label_3e79bc;
        default: break;
    }

    ctx->pc = 0x3e7290u;

    // 0x3e7290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e7294: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3e7294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3e7298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3e729c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e72a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e72a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e72a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e72a8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e72a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e72ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e72b0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3e72b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3e72b4: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3E72B4u;
    SET_GPR_U32(ctx, 31, 0x3E72BCu);
    ctx->pc = 0x3E72B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72B4u;
    // 0x3e72b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3E72B4u, 0x3E72BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72BCu;
label_3e72bc:
    // 0x3e72bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e72bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72c0: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E72C0u;
    {
        const bool branch_taken_0x3e72c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72C0u;
        // 0x3e72c4: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72c0) {
            ctx->pc = 0x3E7330u;
            goto label_3e7330;
        }
    }
    ctx->pc = 0x3E72C8u;
    // 0x3e72c8: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x3e72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x3e72cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3e72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3e72d0: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x3e72d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x3e72d4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3e72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3e72d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e72dc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3e72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3e72e0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x3e72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x3e72e4: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x3e72e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x3e72e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e72e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72ec: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3e72ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3e72f0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3E72F0u;
    SET_GPR_U32(ctx, 31, 0x3E72F8u);
    ctx->pc = 0x3E72F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72F0u;
    // 0x3e72f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3E72F0u, 0x3E72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72F8u;
label_3e72f8:
    // 0x3e72f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e72fc: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x3e72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x3e7300: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3e7300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3e7304: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3e7304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x3e7308: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3e7308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3e730c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e730cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e7310: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x3e7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3e7314: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x3e7314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x3e7318: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x3e7318u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x3e731c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3e731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3e7320: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3E7320u;
    SET_GPR_U32(ctx, 31, 0x3E7328u);
    ctx->pc = 0x3E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7320u;
    // 0x3e7324: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3E7320u, 0x3E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7328u;
label_3e7328:
    // 0x3e7328: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3e7328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3e732c: 0x0  nop
    ctx->pc = 0x3e732cu;
    // NOP
label_3e7330:
    // 0x3e7330: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e7330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e7334: 0x9024fc8f  lbu         $a0, -0x371($at)
    ctx->pc = 0x3e7334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x3e7338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e733c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E733Cu;
    {
        const bool branch_taken_0x3e733c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E733Cu;
        // 0x3e7340: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e733c) {
            ctx->pc = 0x3E7360u;
            goto label_3e7360;
        }
    }
    ctx->pc = 0x3E7344u;
    // 0x3e7344: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3e7344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3e7348: 0xa423cc50  sh          $v1, -0x33B0($at)
    ctx->pc = 0x3e7348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x3e734c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3e734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3e7350: 0xa423cc90  sh          $v1, -0x3370($at)
    ctx->pc = 0x3e7350u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x3e7354: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3e7354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3e7358: 0xa423cc70  sh          $v1, -0x3390($at)
    ctx->pc = 0x3e7358u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
    // 0x3e735c: 0x0  nop
    ctx->pc = 0x3e735cu;
    // NOP
label_3e7360:
    // 0x3e7360: 0x92640056  lbu         $a0, 0x56($s3)
    ctx->pc = 0x3e7360u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 86)));
    // 0x3e7364: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e7364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e7368: 0x10830139  beq         $a0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x3E7368u;
    {
        const bool branch_taken_0x3e7368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7368u;
        // 0x3e736c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7368) {
            ctx->pc = 0x3E7850u;
            goto label_3e7850;
        }
    }
    ctx->pc = 0x3E7370u;
    // 0x3e7370: 0x1083014b  beq         $a0, $v1, . + 4 + (0x14B << 2)
    ctx->pc = 0x3E7370u;
    {
        const bool branch_taken_0x3e7370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7370u;
        // 0x3e7374: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7370) {
            ctx->pc = 0x3E78A0u;
            goto label_3e78a0;
        }
    }
    ctx->pc = 0x3E7378u;
    // 0x3e7378: 0x10860055  beq         $a0, $a2, . + 4 + (0x55 << 2)
    ctx->pc = 0x3E7378u;
    {
        const bool branch_taken_0x3e7378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x3e7378) {
            ctx->pc = 0x3E74D0u;
            goto label_3e74d0;
        }
    }
    ctx->pc = 0x3E7380u;
    // 0x3e7380: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7380u;
    {
        const bool branch_taken_0x3e7380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7380) {
            ctx->pc = 0x3E7390u;
            goto label_3e7390;
        }
    }
    ctx->pc = 0x3E7388u;
    // 0x3e7388: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x3E7388u;
    {
        const bool branch_taken_0x3e7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7388) {
            ctx->pc = 0x3E78A0u;
            goto label_3e78a0;
        }
    }
    ctx->pc = 0x3E7390u;
label_3e7390:
    // 0x3e7390: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7394: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7398: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e739c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e73a0: 0x24e7e7b0  addiu       $a3, $a3, -0x1850
    ctx->pc = 0x3e73a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961072));
    // 0x3e73a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e73a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e73a8: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E73A8u;
    SET_GPR_U32(ctx, 31, 0x3E73B0u);
    ctx->pc = 0x3E73ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73A8u;
    // 0x3e73ac: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E73A8u, 0x3E73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73B0u;
label_3e73b0:
    // 0x3e73b0: 0x92630054  lbu         $v1, 0x54($s3)
    ctx->pc = 0x3e73b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x3e73b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e73b8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x3e73b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x3e73bc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E73BCu;
    {
        const bool branch_taken_0x3e73bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e73bc) {
            ctx->pc = 0x3E7410u;
            goto label_3e7410;
        }
    }
    ctx->pc = 0x3E73C4u;
    // 0x3e73c4: 0x8e680070  lw          $t0, 0x70($s3)
    ctx->pc = 0x3e73c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x3e73c8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x3e73c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x3e73cc: 0x24632540  addiu       $v1, $v1, 0x2540
    ctx->pc = 0x3e73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9536));
    // 0x3e73d0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x3e73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x3e73d4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e73d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e73d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e73d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e73dc: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e73e0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3e73e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e73e4: 0x24e7e800  addiu       $a3, $a3, -0x1800
    ctx->pc = 0x3e73e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961152));
    // 0x3e73e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e73e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e73ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3e73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3e73f0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e73f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e73f4: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x3e73f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3e73f8: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x3e73f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x3e73fc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3e73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3e7400: 0xc068538  jal         func_1A14E0
    ctx->pc = 0x3E7400u;
    SET_GPR_U32(ctx, 31, 0x3E7408u);
    ctx->pc = 0x3E7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7400u;
    // 0x3e7404: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14E0u, 0x3E7400u, 0x3E7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7408u;
label_3e7408:
    // 0x3e7408: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7408u;
    {
        const bool branch_taken_0x3e7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7408) {
            ctx->pc = 0x3E7430u;
            goto label_3e7430;
        }
    }
    ctx->pc = 0x3E7410u;
label_3e7410:
    // 0x3e7410: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7414: 0x8e680068  lw          $t0, 0x68($s3)
    ctx->pc = 0x3e7414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x3e7418: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e741c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7420: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3e7420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7424: 0x24e7e800  addiu       $a3, $a3, -0x1800
    ctx->pc = 0x3e7424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961152));
    // 0x3e7428: 0xc068538  jal         func_1A14E0
    ctx->pc = 0x3E7428u;
    SET_GPR_U32(ctx, 31, 0x3E7430u);
    ctx->pc = 0x3E742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7428u;
    // 0x3e742c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14E0u, 0x3E7428u, 0x3E7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7430u;
label_3e7430:
    // 0x3e7430: 0x8e680068  lw          $t0, 0x68($s3)
    ctx->pc = 0x3e7430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x3e7434: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x3e7434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x3e7438: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x3e7438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
    // 0x3e743c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e743cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7440: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7444: 0x3442f0f0  ori         $v0, $v0, 0xF0F0
    ctx->pc = 0x3e7444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61680);
    // 0x3e7448: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e744c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7450: 0x24e7edf0  addiu       $a3, $a3, -0x1210
    ctx->pc = 0x3e7450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962672));
    // 0x3e7454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7458: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x3e7458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x3e745c: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E745Cu;
    SET_GPR_U32(ctx, 31, 0x3E7464u);
    ctx->pc = 0x3E7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E745Cu;
    // 0x3e7460: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E745Cu, 0x3E7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7464u;
label_3e7464:
    // 0x3e7464: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7468: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e746c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7470: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7474: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x3e7474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3e7478: 0x24e7e920  addiu       $a3, $a3, -0x16E0
    ctx->pc = 0x3e7478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961440));
    // 0x3e747c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e747cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7480: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E7480u;
    SET_GPR_U32(ctx, 31, 0x3E7488u);
    ctx->pc = 0x3E7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7480u;
    // 0x3e7484: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E7480u, 0x3E7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7488u;
label_3e7488:
    // 0x3e7488: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e748c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e748cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7490: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e7490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7494: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7498: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3e7498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e749c: 0x24e7ee04  addiu       $a3, $a3, -0x11FC
    ctx->pc = 0x3e749cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962692));
    // 0x3e74a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e74a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e74a4: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E74A4u;
    SET_GPR_U32(ctx, 31, 0x3E74ACu);
    ctx->pc = 0x3E74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E74A4u;
    // 0x3e74a8: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E74A4u, 0x3E74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E74ACu;
label_3e74ac:
    // 0x3e74ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e74acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e74b0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e74b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e74b4: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e74b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3e74b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e74bc: 0x24e7ef20  addiu       $a3, $a3, -0x10E0
    ctx->pc = 0x3e74bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962976));
    // 0x3e74c0: 0xc0685b4  jal         func_1A16D0
    ctx->pc = 0x3E74C0u;
    SET_GPR_U32(ctx, 31, 0x3E74C8u);
    ctx->pc = 0x3E74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E74C0u;
    // 0x3e74c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16D0u, 0x3E74C0u, 0x3E74C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E74C8u;
label_3e74c8:
    // 0x3e74c8: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x3E74C8u;
    {
        const bool branch_taken_0x3e74c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e74c8) {
            ctx->pc = 0x3E78A0u;
            goto label_3e78a0;
        }
    }
    ctx->pc = 0x3E74D0u;
label_3e74d0:
    // 0x3e74d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e74d4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3E74D4u;
    SET_GPR_U32(ctx, 31, 0x3E74DCu);
    ctx->pc = 0x3E74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E74D4u;
    // 0x3e74d8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3E74D4u, 0x3E74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E74DCu;
label_3e74dc:
    // 0x3e74dc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E74DCu;
    {
        const bool branch_taken_0x3e74dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e74dc) {
            ctx->pc = 0x3E7560u;
            goto label_3e7560;
        }
    }
    ctx->pc = 0x3E74E4u;
    // 0x3e74e4: 0x92630080  lbu         $v1, 0x80($s3)
    ctx->pc = 0x3e74e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3e74e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e74ec: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E74ECu;
    {
        const bool branch_taken_0x3e74ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e74ec) {
            ctx->pc = 0x3E7540u;
            goto label_3e7540;
        }
    }
    ctx->pc = 0x3E74F4u;
    // 0x3e74f4: 0x8e680070  lw          $t0, 0x70($s3)
    ctx->pc = 0x3e74f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x3e74f8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x3e74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x3e74fc: 0x24632540  addiu       $v1, $v1, 0x2540
    ctx->pc = 0x3e74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9536));
    // 0x3e7500: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x3e7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x3e7504: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7508: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e750c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7510: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e7510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e7514: 0x24e7f900  addiu       $a3, $a3, -0x700
    ctx->pc = 0x3e7514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965504));
    // 0x3e7518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e751c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3e751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3e7520: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e7520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e7524: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x3e7524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3e7528: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x3e7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x3e752c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3e752cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3e7530: 0xc068538  jal         func_1A14E0
    ctx->pc = 0x3E7530u;
    SET_GPR_U32(ctx, 31, 0x3E7538u);
    ctx->pc = 0x3E7534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7530u;
    // 0x3e7534: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14E0u, 0x3E7530u, 0x3E7538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7538u;
label_3e7538:
    // 0x3e7538: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7538u;
    {
        const bool branch_taken_0x3e7538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7538) {
            ctx->pc = 0x3E7560u;
            goto label_3e7560;
        }
    }
    ctx->pc = 0x3E7540u;
label_3e7540:
    // 0x3e7540: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7544: 0x8e680068  lw          $t0, 0x68($s3)
    ctx->pc = 0x3e7544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x3e7548: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e754c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7550: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e7550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e7554: 0x24e7f900  addiu       $a3, $a3, -0x700
    ctx->pc = 0x3e7554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965504));
    // 0x3e7558: 0xc068538  jal         func_1A14E0
    ctx->pc = 0x3E7558u;
    SET_GPR_U32(ctx, 31, 0x3E7560u);
    ctx->pc = 0x3E755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7558u;
    // 0x3e755c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14E0u, 0x3E7558u, 0x3E7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7560u;
label_3e7560:
    // 0x3e7560: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7564: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7568: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e7568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e756c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e7570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7574: 0x24e7e7d8  addiu       $a3, $a3, -0x1828
    ctx->pc = 0x3e7574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961112));
    // 0x3e7578: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x3e7578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3e757c: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E757Cu;
    SET_GPR_U32(ctx, 31, 0x3E7584u);
    ctx->pc = 0x3E7580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E757Cu;
    // 0x3e7580: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E757Cu, 0x3E7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7584u;
label_3e7584:
    // 0x3e7584: 0x8e680068  lw          $t0, 0x68($s3)
    ctx->pc = 0x3e7584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x3e7588: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x3e7588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x3e758c: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x3e758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
    // 0x3e7590: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7594: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7598: 0x3442f0f0  ori         $v0, $v0, 0xF0F0
    ctx->pc = 0x3e7598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61680);
    // 0x3e759c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e75a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e75a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e75a4: 0x24e7f7e0  addiu       $a3, $a3, -0x820
    ctx->pc = 0x3e75a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965216));
    // 0x3e75a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e75a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e75ac: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x3e75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x3e75b0: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E75B0u;
    SET_GPR_U32(ctx, 31, 0x3E75B8u);
    ctx->pc = 0x3E75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75B0u;
    // 0x3e75b4: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E75B0u, 0x3E75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E75B8u;
label_3e75b8:
    // 0x3e75b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e75b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e75bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e75c0: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e75c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e75c4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E75C4u;
    {
        const bool branch_taken_0x3e75c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e75c4) {
            ctx->pc = 0x3E7618u;
            goto label_3e7618;
        }
    }
    ctx->pc = 0x3E75CCu;
    // 0x3e75cc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e75d0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e75d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e75d4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e75d8: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e75dc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3e75dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e75e0: 0x24e7f560  addiu       $a3, $a3, -0xAA0
    ctx->pc = 0x3e75e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964576));
    // 0x3e75e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e75e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e75e8: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E75E8u;
    SET_GPR_U32(ctx, 31, 0x3E75F0u);
    ctx->pc = 0x3E75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75E8u;
    // 0x3e75ec: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E75E8u, 0x3E75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E75F0u;
label_3e75f0:
    // 0x3e75f0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e75f4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e75f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e75f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e75fc: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e7600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7604: 0x24e7f86c  addiu       $a3, $a3, -0x794
    ctx->pc = 0x3e7604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965356));
    // 0x3e7608: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e760c: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E760Cu;
    SET_GPR_U32(ctx, 31, 0x3E7614u);
    ctx->pc = 0x3E7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E760Cu;
    // 0x3e7610: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E760Cu, 0x3E7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7614u;
label_3e7614:
    // 0x3e7614: 0x0  nop
    ctx->pc = 0x3e7614u;
    // NOP
label_3e7618:
    // 0x3e7618: 0x82630050  lb          $v1, 0x50($s3)
    ctx->pc = 0x3e7618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3e761c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3e761cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e7620: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E7620u;
    {
        const bool branch_taken_0x3e7620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7620) {
            ctx->pc = 0x3E7678u;
            goto label_3e7678;
        }
    }
    ctx->pc = 0x3E7628u;
    // 0x3e7628: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e762c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e762cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7630: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e7630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7634: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7638: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3e7638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e763c: 0x24e7f7f4  addiu       $a3, $a3, -0x80C
    ctx->pc = 0x3e763cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965236));
    // 0x3e7640: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7644: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E7644u;
    SET_GPR_U32(ctx, 31, 0x3E764Cu);
    ctx->pc = 0x3E7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7644u;
    // 0x3e7648: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E7644u, 0x3E764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E764Cu;
label_3e764c:
    // 0x3e764c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7650: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7650u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7654: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e7654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7658: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e765c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3e765cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3e7660: 0x24e7f1a0  addiu       $a3, $a3, -0xE60
    ctx->pc = 0x3e7660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963616));
    // 0x3e7664: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7668: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E7668u;
    SET_GPR_U32(ctx, 31, 0x3E7670u);
    ctx->pc = 0x3E766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7668u;
    // 0x3e766c: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E7668u, 0x3E7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7670u;
label_3e7670:
    // 0x3e7670: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E7670u;
    {
        const bool branch_taken_0x3e7670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7670) {
            ctx->pc = 0x3E76C8u;
            goto label_3e76c8;
        }
    }
    ctx->pc = 0x3E7678u;
label_3e7678:
    // 0x3e7678: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e767c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3e767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3e7680: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7684: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3e7684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e7688: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e768c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7690: 0x24e7f1a0  addiu       $a3, $a3, -0xE60
    ctx->pc = 0x3e7690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963616));
    // 0x3e7694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7698: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E7698u;
    SET_GPR_U32(ctx, 31, 0x3E76A0u);
    ctx->pc = 0x3E769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7698u;
    // 0x3e769c: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E7698u, 0x3E76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76A0u;
label_3e76a0:
    // 0x3e76a0: 0x92660050  lbu         $a2, 0x50($s3)
    ctx->pc = 0x3e76a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3e76a4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e76a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e76a8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e76a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e76ac: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e76acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e76b0: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e76b4: 0x24e7f7f4  addiu       $a3, $a3, -0x80C
    ctx->pc = 0x3e76b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965236));
    // 0x3e76b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e76b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e76bc: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E76BCu;
    SET_GPR_U32(ctx, 31, 0x3E76C4u);
    ctx->pc = 0x3E76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76BCu;
    // 0x3e76c0: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E76BCu, 0x3E76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76C4u;
label_3e76c4:
    // 0x3e76c4: 0x0  nop
    ctx->pc = 0x3e76c4u;
    // NOP
label_3e76c8:
    // 0x3e76c8: 0x82620050  lb          $v0, 0x50($s3)
    ctx->pc = 0x3e76c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3e76cc: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x3e76ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3e76d0: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x3E76D0u;
    {
        const bool branch_taken_0x3e76d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e76d0) {
            ctx->pc = 0x3E7770u;
            goto label_3e7770;
        }
    }
    ctx->pc = 0x3E76D8u;
    // 0x3e76d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e76dc: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e76dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e76e0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e76e4: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e76e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e76e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e76ec: 0x24e7f8c0  addiu       $a3, $a3, -0x740
    ctx->pc = 0x3e76ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965440));
    // 0x3e76f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e76f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e76f4: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E76F4u;
    SET_GPR_U32(ctx, 31, 0x3E76FCu);
    ctx->pc = 0x3E76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76F4u;
    // 0x3e76f8: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E76F4u, 0x3E76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76FCu;
label_3e76fc:
    // 0x3e76fc: 0x826b0050  lb          $t3, 0x50($s3)
    ctx->pc = 0x3e76fcu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3e7700: 0x240a023a  addiu       $t2, $zero, 0x23A
    ctx->pc = 0x3e7700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x3e7704: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7708: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7708u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e770c: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x3e770cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3e7710: 0x82630081  lb          $v1, 0x81($s3)
    ctx->pc = 0x3e7710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 129)));
    // 0x3e7714: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x3e7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x3e7718: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e7718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e771c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e7720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7724: 0x24e7f8e0  addiu       $a3, $a3, -0x720
    ctx->pc = 0x3e7724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965472));
    // 0x3e7728: 0x14b001a  div         $zero, $t2, $t3
    ctx->pc = 0x3e7728u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e772c: 0x2562fffb  addiu       $v0, $t3, -0x5
    ctx->pc = 0x3e772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967291));
    // 0x3e7730: 0x0  nop
    ctx->pc = 0x3e7730u;
    // NOP
    // 0x3e7734: 0x5012  mflo        $t2
    ctx->pc = 0x3e7734u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x3e7738: 0xaa2823  subu        $a1, $a1, $t2
    ctx->pc = 0x3e7738u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3e773c: 0xa42af8ee  sh          $t2, -0x712($at)
    ctx->pc = 0x3e773cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965486), (uint16_t)GPR_U32(ctx, 10));
    // 0x3e7740: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3e7740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e7744: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e7744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e7748: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3e7748u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e774c: 0x0  nop
    ctx->pc = 0x3e774cu;
    // NOP
    // 0x3e7750: 0x0  nop
    ctx->pc = 0x3e7750u;
    // NOP
    // 0x3e7754: 0x1012  mflo        $v0
    ctx->pc = 0x3e7754u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3e7758: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x3e7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x3e775c: 0xa422f8e6  sh          $v0, -0x71A($at)
    ctx->pc = 0x3e775cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965478), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7760: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7764: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E7764u;
    SET_GPR_U32(ctx, 31, 0x3E776Cu);
    ctx->pc = 0x3E7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7764u;
    // 0x3e7768: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E7764u, 0x3E776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E776Cu;
label_3e776c:
    // 0x3e776c: 0x0  nop
    ctx->pc = 0x3e776cu;
    // NOP
label_3e7770:
    // 0x3e7770: 0x24110042  addiu       $s1, $zero, 0x42
    ctx->pc = 0x3e7770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3e7774: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e7774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7778:
    // 0x3e7778: 0x82630081  lb          $v1, 0x81($s3)
    ctx->pc = 0x3e7778u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 129)));
    // 0x3e777c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3e777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3e7780: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7780u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7784: 0x2705021  addu        $t2, $s3, $s0
    ctx->pc = 0x3e7784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3e7788: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x3e7788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3e778c: 0x24e7f0d0  addiu       $a3, $a3, -0xF30
    ctx->pc = 0x3e778cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963408));
    // 0x3e7790: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7794: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e7794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7798: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e7798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e779c: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x3e779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3e77a0: 0x80430014  lb          $v1, 0x14($v0)
    ctx->pc = 0x3e77a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3e77a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3e77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e77a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e77ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e77acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e77b0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3e77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e77b4: 0xa4510006  sh          $s1, 0x6($v0)
    ctx->pc = 0x3e77b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e77b8: 0x82620081  lb          $v0, 0x81($s3)
    ctx->pc = 0x3e77b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 129)));
    // 0x3e77bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e77c0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3e77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e77c4: 0x80430014  lb          $v1, 0x14($v0)
    ctx->pc = 0x3e77c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3e77c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3e77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e77cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e77d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e77d4: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x3E77D4u;
    SET_GPR_U32(ctx, 31, 0x3E77DCu);
    ctx->pc = 0x3E77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E77D4u;
    // 0x3e77d8: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x3E77D4u, 0x3E77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E77DCu;
label_3e77dc:
    // 0x3e77dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e77dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e77e0: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x3e77e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e77e4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3E77E4u;
    {
        const bool branch_taken_0x3e77e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77E4u;
        // 0x3e77e8: 0x26310019  addiu       $s1, $s1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e77e4) {
            ctx->pc = 0x3E7778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7778;
        }
    }
    ctx->pc = 0x3E77ECu;
    // 0x3e77ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e77ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e77f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e77f4: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e77f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e77f8: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E77F8u;
    {
        const bool branch_taken_0x3e77f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e77f8) {
            ctx->pc = 0x3E78A0u;
            goto label_3e78a0;
        }
    }
    ctx->pc = 0x3E7800u;
    // 0x3e7800: 0x92630080  lbu         $v1, 0x80($s3)
    ctx->pc = 0x3e7800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3e7804: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x3e7804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e7808: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3E7808u;
    {
        const bool branch_taken_0x3e7808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7808) {
            ctx->pc = 0x3E78A0u;
            goto label_3e78a0;
        }
    }
    ctx->pc = 0x3E7810u;
    // 0x3e7810: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x3e7810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x3e7814: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x3e7814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x3e7818: 0x24422540  addiu       $v0, $v0, 0x2540
    ctx->pc = 0x3e7818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9536));
    // 0x3e781c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e781cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7820: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3e7820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7824: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e7828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e7828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e782c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e7830: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x3e7830u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7834: 0xc0685b4  jal         func_1A16D0
    ctx->pc = 0x3E7834u;
    SET_GPR_U32(ctx, 31, 0x3E783Cu);
    ctx->pc = 0x3E7838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7834u;
    // 0x3e7838: 0x24e7f960  addiu       $a3, $a3, -0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16D0u, 0x3E7834u, 0x3E783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E783Cu;
label_3e783c:
    // 0x3e783c: 0xc0f90ac  jal         func_3E42B0
    ctx->pc = 0x3E783Cu;
    SET_GPR_U32(ctx, 31, 0x3E7844u);
    ctx->pc = 0x3E7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E783Cu;
    // 0x3e7840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E42B0u, 0x3E783Cu, 0x3E7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7844u;
label_3e7844:
    // 0x3e7844: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3E7844u;
    {
        const bool branch_taken_0x3e7844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7844) {
            ctx->pc = 0x3E78A0u;
            goto label_3e78a0;
        }
    }
    ctx->pc = 0x3E784Cu;
    // 0x3e784c: 0x0  nop
    ctx->pc = 0x3e784cu;
    // NOP
label_3e7850:
    // 0x3e7850: 0x92630079  lbu         $v1, 0x79($s3)
    ctx->pc = 0x3e7850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 121)));
    // 0x3e7854: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e7854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e7858: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7858u;
    {
        const bool branch_taken_0x3e7858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7858u;
        // 0x3e785c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7858) {
            ctx->pc = 0x3E7868u;
            goto label_3e7868;
        }
    }
    ctx->pc = 0x3E7860u;
    // 0x3e7860: 0xc0f9340  jal         func_3E4D00
    ctx->pc = 0x3E7860u;
    SET_GPR_U32(ctx, 31, 0x3E7868u);
    ctx->pc = 0x3E7864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7860u;
    // 0x3e7864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4D00u, 0x3E7860u, 0x3E7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7868u;
label_3e7868:
    // 0x3e7868: 0x9263007d  lbu         $v1, 0x7D($s3)
    ctx->pc = 0x3e7868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 125)));
    // 0x3e786c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e7870: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7870u;
    {
        const bool branch_taken_0x3e7870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7870u;
        // 0x3e7874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7870) {
            ctx->pc = 0x3E7880u;
            goto label_3e7880;
        }
    }
    ctx->pc = 0x3E7878u;
    // 0x3e7878: 0xc0f9340  jal         func_3E4D00
    ctx->pc = 0x3E7878u;
    SET_GPR_U32(ctx, 31, 0x3E7880u);
    ctx->pc = 0x3E787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7878u;
    // 0x3e787c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4D00u, 0x3E7878u, 0x3E7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7880u;
label_3e7880:
    // 0x3e7880: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3e7880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e7884: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e7884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e7888: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x3e7888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x3e788c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e7890: 0x24e7f990  addiu       $a3, $a3, -0x670
    ctx->pc = 0x3e7890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965648));
    // 0x3e7894: 0xc0685b4  jal         func_1A16D0
    ctx->pc = 0x3E7894u;
    SET_GPR_U32(ctx, 31, 0x3E789Cu);
    ctx->pc = 0x3E7898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7894u;
    // 0x3e7898: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16D0u, 0x3E7894u, 0x3E789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E789Cu;
label_3e789c:
    // 0x3e789c: 0x0  nop
    ctx->pc = 0x3e789cu;
    // NOP
label_3e78a0:
    // 0x3e78a0: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E78A0u;
    {
        const bool branch_taken_0x3e78a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78A0u;
        // 0x3e78a4: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e78a0) {
            ctx->pc = 0x3E7908u;
            goto label_3e7908;
        }
    }
    ctx->pc = 0x3E78A8u;
    // 0x3e78a8: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x3e78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x3e78ac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3e78acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3e78b0: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x3e78b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x3e78b4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3e78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3e78b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e78b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e78bc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3e78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3e78c0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x3e78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x3e78c4: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x3e78c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x3e78c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e78c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e78cc: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3e78ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3e78d0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3E78D0u;
    SET_GPR_U32(ctx, 31, 0x3E78D8u);
    ctx->pc = 0x3E78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78D0u;
    // 0x3e78d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3E78D0u, 0x3E78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E78D8u;
label_3e78d8:
    // 0x3e78d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e78dc: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x3e78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x3e78e0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3e78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3e78e4: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3e78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x3e78e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e78ec: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3e78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3e78f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e78f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e78f4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3e78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3e78f8: 0xfe460018  sd          $a2, 0x18($s2)
    ctx->pc = 0x3e78f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 6));
    // 0x3e78fc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3E78FCu;
    SET_GPR_U32(ctx, 31, 0x3E7904u);
    ctx->pc = 0x3E7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78FCu;
    // 0x3e7900: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3E78FCu, 0x3E7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7904u;
label_3e7904:
    // 0x3e7904: 0x0  nop
    ctx->pc = 0x3e7904u;
    // NOP
label_3e7908:
    // 0x3e7908: 0x92640056  lbu         $a0, 0x56($s3)
    ctx->pc = 0x3e7908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 86)));
    // 0x3e790c: 0x92630057  lbu         $v1, 0x57($s3)
    ctx->pc = 0x3e790cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 87)));
    // 0x3e7910: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3E7910u;
    {
        const bool branch_taken_0x3e7910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7910u;
        // 0x3e7914: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7910) {
            ctx->pc = 0x3E79E8u;
            goto label_3e79e8;
        }
    }
    ctx->pc = 0x3E7918u;
    // 0x3e7918: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E7918u;
    {
        const bool branch_taken_0x3e7918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e7918) {
            ctx->pc = 0x3E79A8u;
            goto label_3e79a8;
        }
    }
    ctx->pc = 0x3E7920u;
    // 0x3e7920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e7920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e7924: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E7924u;
    {
        const bool branch_taken_0x3e7924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7924u;
        // 0x3e7928: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7924) {
            ctx->pc = 0x3E7988u;
            goto label_3e7988;
        }
    }
    ctx->pc = 0x3E792Cu;
    // 0x3e792c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E792Cu;
    {
        const bool branch_taken_0x3e792c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e792c) {
            ctx->pc = 0x3E7968u;
            goto label_3e7968;
        }
    }
    ctx->pc = 0x3E7934u;
    // 0x3e7934: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7934u;
    {
        const bool branch_taken_0x3e7934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7934) {
            ctx->pc = 0x3E7948u;
            goto label_3e7948;
        }
    }
    ctx->pc = 0x3E793Cu;
    // 0x3e793c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3E793Cu;
    {
        const bool branch_taken_0x3e793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e793c) {
            ctx->pc = 0x3E79C8u;
            goto label_3e79c8;
        }
    }
    ctx->pc = 0x3E7944u;
    // 0x3e7944: 0x0  nop
    ctx->pc = 0x3e7944u;
    // NOP
label_3e7948:
    // 0x3e7948: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3e7948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3e794c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3e794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3e7950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7954: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3E7954u;
    SET_GPR_U32(ctx, 31, 0x3E795Cu);
    ctx->pc = 0x3E7958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7954u;
    // 0x3e7958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3E7954u, 0x3E795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E795Cu;
label_3e795c:
    // 0x3e795c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3E795Cu;
    {
        const bool branch_taken_0x3e795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e795c) {
            ctx->pc = 0x3E79E0u;
            goto label_3e79e0;
        }
    }
    ctx->pc = 0x3E7964u;
    // 0x3e7964: 0x0  nop
    ctx->pc = 0x3e7964u;
    // NOP
label_3e7968:
    // 0x3e7968: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3e7968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3e796c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3e796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3e7970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7974: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3E7974u;
    SET_GPR_U32(ctx, 31, 0x3E797Cu);
    ctx->pc = 0x3E7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7974u;
    // 0x3e7978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3E7974u, 0x3E797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E797Cu;
label_3e797c:
    // 0x3e797c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3E797Cu;
    {
        const bool branch_taken_0x3e797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e797c) {
            ctx->pc = 0x3E79E0u;
            goto label_3e79e0;
        }
    }
    ctx->pc = 0x3E7984u;
    // 0x3e7984: 0x0  nop
    ctx->pc = 0x3e7984u;
    // NOP
label_3e7988:
    // 0x3e7988: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3e7988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3e798c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3e798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3e7990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e7990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7994: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3E7994u;
    SET_GPR_U32(ctx, 31, 0x3E799Cu);
    ctx->pc = 0x3E7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7994u;
    // 0x3e7998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3E7994u, 0x3E799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E799Cu;
label_3e799c:
    // 0x3e799c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3E799Cu;
    {
        const bool branch_taken_0x3e799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e799c) {
            ctx->pc = 0x3E79E0u;
            goto label_3e79e0;
        }
    }
    ctx->pc = 0x3E79A4u;
    // 0x3e79a4: 0x0  nop
    ctx->pc = 0x3e79a4u;
    // NOP
label_3e79a8:
    // 0x3e79a8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3e79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3e79ac: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3e79acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3e79b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e79b4: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3E79B4u;
    SET_GPR_U32(ctx, 31, 0x3E79BCu);
    ctx->pc = 0x3E79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E79B4u;
    // 0x3e79b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3E79B4u, 0x3E79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E79BCu;
label_3e79bc:
    // 0x3e79bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E79BCu;
    {
        const bool branch_taken_0x3e79bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e79bc) {
            ctx->pc = 0x3E79E0u;
            goto label_3e79e0;
        }
    }
    ctx->pc = 0x3E79C4u;
    // 0x3e79c4: 0x0  nop
    ctx->pc = 0x3e79c4u;
    // NOP
label_3e79c8:
    // 0x3e79c8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3e79c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3e79cc: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x3e79ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3e79d0: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3e79d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x3e79d4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3e79d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3e79d8: 0xa023feea  sb          $v1, -0x116($at)
    ctx->pc = 0x3e79d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x3e79dc: 0x0  nop
    ctx->pc = 0x3e79dcu;
    // NOP
label_3e79e0:
    // 0x3e79e0: 0x92630056  lbu         $v1, 0x56($s3)
    ctx->pc = 0x3e79e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 86)));
    // 0x3e79e4: 0xa2630057  sb          $v1, 0x57($s3)
    ctx->pc = 0x3e79e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 3));
label_3e79e8:
    // 0x3e79e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e79e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e79ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e79ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e79f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e79f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e79f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e79f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e79f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e79f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e79fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E79FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79FCu;
        // 0x3e7a00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E79FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7A04u;
}
