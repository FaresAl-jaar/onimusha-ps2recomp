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

// Function: sub_0011D570
// Address: 0x11d570 - 0x11dd90
void sub_0011D570_0x11d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D570_0x11d570");
#endif

    switch (ctx->pc) {
        case 0x11d610u: goto label_11d610;
        case 0x11d658u: goto label_11d658;
        case 0x11d66cu: goto label_11d66c;
        case 0x11d6a8u: goto label_11d6a8;
        case 0x11d6dcu: goto label_11d6dc;
        case 0x11d72cu: goto label_11d72c;
        case 0x11d744u: goto label_11d744;
        case 0x11d7a0u: goto label_11d7a0;
        case 0x11d7c4u: goto label_11d7c4;
        case 0x11d808u: goto label_11d808;
        case 0x11d830u: goto label_11d830;
        case 0x11d85cu: goto label_11d85c;
        case 0x11d8a8u: goto label_11d8a8;
        case 0x11d914u: goto label_11d914;
        case 0x11d934u: goto label_11d934;
        case 0x11d9a4u: goto label_11d9a4;
        case 0x11d9c0u: goto label_11d9c0;
        case 0x11d9d4u: goto label_11d9d4;
        case 0x11d9f4u: goto label_11d9f4;
        case 0x11da2cu: goto label_11da2c;
        case 0x11da54u: goto label_11da54;
        case 0x11da80u: goto label_11da80;
        case 0x11dab8u: goto label_11dab8;
        case 0x11dabcu: goto label_11dabc;
        case 0x11db04u: goto label_11db04;
        case 0x11db44u: goto label_11db44;
        case 0x11db80u: goto label_11db80;
        case 0x11dba4u: goto label_11dba4;
        case 0x11dbc4u: goto label_11dbc4;
        case 0x11dc00u: goto label_11dc00;
        case 0x11dc48u: goto label_11dc48;
        case 0x11dcbcu: goto label_11dcbc;
        case 0x11dd48u: goto label_11dd48;
        default: break;
    }

    ctx->pc = 0x11d570u;

    // 0x11d570: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x11d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x11d574: 0x24cffffd  addiu       $t7, $a2, -0x3
    ctx->pc = 0x11d574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11d578: 0x24cd0004  addiu       $t5, $a2, 0x4
    ctx->pc = 0x11d578u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11d57c: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x11d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x11d580: 0x29ee0000  slti        $t6, $t7, 0x0
    ctx->pc = 0x11d580u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11d584: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x11d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x11d588: 0x1ae780b  movn        $t7, $t5, $t6
    ctx->pc = 0x11d588u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x11d58c: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x11d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x11d590: 0xfa8c3  sra         $s5, $t7, 3
    ctx->pc = 0x11d590u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 15), 3));
    // 0x11d594: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x11d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x11d598: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d598u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d59c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x11d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x11d5a0: 0x2aad0000  slti        $t5, $s5, 0x0
    ctx->pc = 0x11d5a0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11d5a4: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x11d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x11d5a8: 0x25ef34a0  addiu       $t7, $t7, 0x34A0
    ctx->pc = 0x11d5a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13472));
    // 0x11d5ac: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x11d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x11d5b0: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x11d5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x11d5b4: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x11d5b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11d5b8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x11d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x11d5bc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11d5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11d5c0: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x11d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x11d5c4: 0xda80b  movn        $s5, $zero, $t5
    ctx->pc = 0x11d5c4u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x11d5c8: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11d5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x11d5cc: 0x1578c0  sll         $t7, $s5, 3
    ctx->pc = 0x11d5ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x11d5d0: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x11d5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11d5d4: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x11d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x11d5d8: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x11d5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11d5dc: 0xcf3023  subu        $a2, $a2, $t7
    ctx->pc = 0x11d5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x11d5e0: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x11d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x11d5e4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11d5e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5e8: 0xafa90148  sw          $t1, 0x148($sp)
    ctx->pc = 0x11d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
    // 0x11d5ec: 0x24d3fff8  addiu       $s3, $a2, -0x8
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x11d5f0: 0x2306821  addu        $t5, $s1, $s0
    ctx->pc = 0x11d5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11d5f4: 0x5a00010  bltz        $t5, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D5F4u;
    {
        const bool branch_taken_0x11d5f4 = (GPR_S64(ctx, 13) < 0);
        ctx->pc = 0x11D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5F4u;
        // 0x11d5f8: 0x2b17023  subu        $t6, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5f4) {
            ctx->pc = 0x11D638u;
            goto label_11d638;
        }
    }
    ctx->pc = 0x11D5FCu;
    // 0x11d5fc: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x11d5fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11d600: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x11d600u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d604: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x11d604u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x11d608: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x11d608u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x11d60c: 0x27ae0050  addiu       $t6, $sp, 0x50
    ctx->pc = 0x11d60cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11d610:
    // 0x11d610: 0x5800003  bltz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D610u;
    {
        const bool branch_taken_0x11d610 = (GPR_S64(ctx, 12) < 0);
        ctx->pc = 0x11D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D610u;
        // 0x11d614: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d610) {
            ctx->pc = 0x11D620u;
            goto label_11d620;
        }
    }
    ctx->pc = 0x11D618u;
    // 0x11d618: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d61c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11d61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11d620:
    // 0x11d620: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11d624: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x11d624u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x11d628: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11d628u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11d62c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11d62cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11d630: 0x15a0fff7  bnez        $t5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11D630u;
    {
        const bool branch_taken_0x11d630 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D630u;
        // 0x11d634: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d630) {
            ctx->pc = 0x11D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d610;
        }
    }
    ctx->pc = 0x11D638u;
label_11d638:
    // 0x11d638: 0x2a0e0000  slti        $t6, $s0, 0x0
    ctx->pc = 0x11d638u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11d63c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d640: 0x15c00018  bnez        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D640u;
    {
        const bool branch_taken_0x11d640 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D640u;
        // 0x11d644: 0xafae014c  sw          $t6, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d640) {
            ctx->pc = 0x11D6A4u;
            goto label_11d6a4;
        }
    }
    ctx->pc = 0x11D648u;
    // 0x11d648: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11d64c: 0x2a270000  slti        $a3, $s1, 0x0
    ctx->pc = 0x11d64cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11d650: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11d650u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d654: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x11d654u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_11d658:
    // 0x11d658: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x11D658u;
    {
        const bool branch_taken_0x11d658 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D658u;
        // 0x11d65c: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d658) {
            ctx->pc = 0x11D68Cu;
            goto label_11d68c;
        }
    }
    ctx->pc = 0x11D660u;
    // 0x11d660: 0x258e0050  addiu       $t6, $t4, 0x50
    ctx->pc = 0x11d660u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x11d664: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x11d664u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d668: 0x262d0001  addiu       $t5, $s1, 0x1
    ctx->pc = 0x11d668u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11d66c:
    // 0x11d66c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d670: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x11d670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x11d674: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d678: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11d678u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11d67c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d680: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11d680u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11d684: 0x15a0fff9  bnez        $t5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11D684u;
    {
        const bool branch_taken_0x11d684 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D684u;
        // 0x11d688: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d684) {
            ctx->pc = 0x11D66Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d66c;
        }
    }
    ctx->pc = 0x11D68Cu;
label_11d68c:
    // 0x11d68c: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x11d68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x11d690: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11d690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11d694: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x11d694u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x11d698: 0x209782a  slt         $t7, $s0, $t1
    ctx->pc = 0x11d698u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11d69c: 0x11e0ffee  beqz        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11D69Cu;
    {
        const bool branch_taken_0x11d69c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D69Cu;
        // 0x11d6a0: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d69c) {
            ctx->pc = 0x11D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d658;
        }
    }
    ctx->pc = 0x11D6A4u;
label_11d6a4:
    // 0x11d6a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x11d6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d6a8:
    // 0x11d6a8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x11d6a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11d6ac: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11d6acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11d6b0: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x11D6B0u;
    {
        const bool branch_taken_0x11d6b0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x11D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6B0u;
        // 0x11d6b4: 0xc5f400f0  lwc1        $f20, 0xF0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6b0) {
            ctx->pc = 0x11D71Cu;
            goto label_11d71c;
        }
    }
    ctx->pc = 0x11D6B8u;
    // 0x11d6b8: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11d6b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11d6bc: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x11d6bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c0: 0x25ce34ec  addiu       $t6, $t6, 0x34EC
    ctx->pc = 0x11d6c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13548));
    // 0x11d6c4: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11d6c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c8: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x11d6c8u;
    { uint32_t bits = FAST_READ32(0x6634ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d6cc: 0x25ee00ec  addiu       $t6, $t7, 0xEC
    ctx->pc = 0x11d6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 236));
    // 0x11d6d0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d6d4: 0x25ef34f0  addiu       $t7, $t7, 0x34F0
    ctx->pc = 0x11d6d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13552));
    // 0x11d6d8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11d6d8u;
    { uint32_t bits = FAST_READ32(0x6634F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11d6dc:
    // 0x11d6dc: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x11d6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x11d6e0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11d6e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11d6e4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d6e8: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11d6e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11d6ec: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d6ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11d6f0: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11d6f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11d6f4: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11d6f4u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d6f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11d6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11d6fc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x11d6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11d700: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11d700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11d704: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d704u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x11d708: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x11d708u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11d70c: 0x440f2800  mfc1        $t7, $f5
    ctx->pc = 0x11d70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11d710: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11d710u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x11d714: 0x1d80fff1  bgtz        $t4, . + 4 + (-0xF << 2)
    ctx->pc = 0x11D714u;
    {
        const bool branch_taken_0x11d714 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x11D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D714u;
        // 0x11d718: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d714) {
            ctx->pc = 0x11D6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d6dc;
        }
    }
    ctx->pc = 0x11D71Cu;
label_11d71c:
    // 0x11d71c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11d71cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11d720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d724: 0xc047b00  jal         func_11EC00
    ctx->pc = 0x11D724u;
    SET_GPR_U32(ctx, 31, 0x11D72Cu);
    ctx->pc = 0x11D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D724u;
    // 0x11d728: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x11D724u, 0x11D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D72Cu;
label_11d72c:
    // 0x11d72c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11d72cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11d730: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11d730u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11d734: 0x25ce34f4  addiu       $t6, $t6, 0x34F4
    ctx->pc = 0x11d734u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13556));
    // 0x11d738: 0xc5cc0000  lwc1        $f12, 0x0($t6)
    ctx->pc = 0x11d738u;
    { uint32_t bits = FAST_READ32(0x6634F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d73c: 0xc047aca  jal         func_11EB28
    ctx->pc = 0x11D73Cu;
    SET_GPR_U32(ctx, 31, 0x11D744u);
    ctx->pc = 0x11D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D73Cu;
    // 0x11d740: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB28u, 0x11D73Cu, 0x11D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D744u;
label_11d744:
    // 0x11d744: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d744u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d748: 0x25ef34f8  addiu       $t7, $t7, 0x34F8
    ctx->pc = 0x11d748u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13560));
    // 0x11d74c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11d74cu;
    { uint32_t bits = FAST_READ32(0x6634F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d754: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11d754u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11d758: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11d75c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x11d75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x11d760: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x11d760u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11d764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11d768: 0x1a60017c  blez        $s3, . + 4 + (0x17C << 2)
    ctx->pc = 0x11D768u;
    {
        const bool branch_taken_0x11d768 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x11D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D768u;
        // 0x11d76c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d768) {
            ctx->pc = 0x11DD5Cu;
            goto label_11dd5c;
        }
    }
    ctx->pc = 0x11D770u;
    // 0x11d770: 0x29d6021  addu        $t4, $s4, $sp
    ctx->pc = 0x11d770u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11d774: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x11d774u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d778: 0x8d8dfffc  lw          $t5, -0x4($t4)
    ctx->pc = 0x11d778u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x11d77c: 0x1f37823  subu        $t7, $t7, $s3
    ctx->pc = 0x11d77cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x11d780: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x11d780u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11d784: 0x1ed4807  srav        $t1, $t5, $t7
    ctx->pc = 0x11d784u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x11d788: 0x1d37023  subu        $t6, $t6, $s3
    ctx->pc = 0x11d788u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x11d78c: 0x1e97804  sllv        $t7, $t1, $t7
    ctx->pc = 0x11d78cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 15) & 0x1F));
    // 0x11d790: 0x2e9b821  addu        $s7, $s7, $t1
    ctx->pc = 0x11d790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x11d794: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x11d794u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11d798: 0xad8dfffc  sw          $t5, -0x4($t4)
    ctx->pc = 0x11d798u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967292), GPR_U32(ctx, 13));
    // 0x11d79c: 0x1cdf007  srav        $fp, $t5, $t6
    ctx->pc = 0x11d79cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 14) & 0x1F));
label_11d7a0:
    // 0x11d7a0: 0x5bc00025  blezl       $fp, . + 4 + (0x25 << 2)
    ctx->pc = 0x11D7A0u;
    {
        const bool branch_taken_0x11d7a0 = (GPR_S64(ctx, 30) <= 0);
        if (branch_taken_0x11d7a0) {
            ctx->pc = 0x11D7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7A0u;
            // 0x11d7a4: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D838u;
            goto label_11d838;
        }
    }
    ctx->pc = 0x11D7A8u;
    // 0x11d7a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11d7a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x11d7ac: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x11D7ACu;
    {
        const bool branch_taken_0x11d7ac = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x11D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7ACu;
        // 0x11d7b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7ac) {
            ctx->pc = 0x11D7ECu;
            goto label_11d7ec;
        }
    }
    ctx->pc = 0x11D7B4u;
    // 0x11d7b4: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x11d7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11d7b8: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x11d7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11d7bc: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11d7bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7c0: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x11d7c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11d7c4:
    // 0x11d7c4: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x11d7c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11d7c8: 0x15600004  bnez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D7C8u;
    {
        const bool branch_taken_0x11d7c8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7C8u;
        // 0x11d7cc: 0x14e7823  subu        $t7, $t2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7c8) {
            ctx->pc = 0x11D7DCu;
            goto label_11d7dc;
        }
    }
    ctx->pc = 0x11D7D0u;
    // 0x11d7d0: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7D0u;
    {
        const bool branch_taken_0x11d7d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7D0u;
        // 0x11d7d4: 0x12e7823  subu        $t7, $t1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7d0) {
            ctx->pc = 0x11D7E0u;
            goto label_11d7e0;
        }
    }
    ctx->pc = 0x11D7D8u;
    // 0x11d7d8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x11d7d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d7dc:
    // 0x11d7dc: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
label_11d7e0:
    // 0x11d7e0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11d7e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11d7e4: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11D7E4u;
    {
        const bool branch_taken_0x11d7e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7E4u;
        // 0x11d7e8: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e4) {
            ctx->pc = 0x11D7C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d7c4;
        }
    }
    ctx->pc = 0x11D7ECu;
label_11d7ec:
    // 0x11d7ec: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D7ECu;
    {
        const bool branch_taken_0x11d7ec = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x11D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7ECu;
        // 0x11d7f0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7ec) {
            ctx->pc = 0x11D808u;
            goto label_11d808;
        }
    }
    ctx->pc = 0x11D7F4u;
    // 0x11d7f4: 0x526f0156  beql        $s3, $t7, . + 4 + (0x156 << 2)
    ctx->pc = 0x11D7F4u;
    {
        const bool branch_taken_0x11d7f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x11d7f4) {
            ctx->pc = 0x11D7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7F4u;
            // 0x11d7f8: 0x29d7021  addu        $t6, $s4, $sp (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD50u;
            goto label_11dd50;
        }
    }
    ctx->pc = 0x11D7FCu;
    // 0x11d7fc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11d7fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d800: 0x526f014f  beql        $s3, $t7, . + 4 + (0x14F << 2)
    ctx->pc = 0x11D800u;
    {
        const bool branch_taken_0x11d800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x11d800) {
            ctx->pc = 0x11D804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D800u;
            // 0x11d804: 0x29d7021  addu        $t6, $s4, $sp (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD40u;
            goto label_11dd40;
        }
    }
    ctx->pc = 0x11D808u;
label_11d808:
    // 0x11d808: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11d808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d80c: 0x17cf000a  bne         $fp, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11D80Cu;
    {
        const bool branch_taken_0x11d80c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 15));
        ctx->pc = 0x11D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D80Cu;
        // 0x11d810: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d80c) {
            ctx->pc = 0x11D838u;
            goto label_11d838;
        }
    }
    ctx->pc = 0x11D814u;
    // 0x11d814: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d814u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d818: 0x25ef3500  addiu       $t7, $t7, 0x3500
    ctx->pc = 0x11d818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13568));
    // 0x11d81c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x11d81cu;
    { uint32_t bits = FAST_READ32(0x663500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d820: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D820u;
    {
        const bool branch_taken_0x11d820 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D820u;
        // 0x11d824: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d820) {
            ctx->pc = 0x11D838u;
            goto label_11d838;
        }
    }
    ctx->pc = 0x11D828u;
    // 0x11d828: 0xc047b00  jal         func_11EC00
    ctx->pc = 0x11D828u;
    SET_GPR_U32(ctx, 31, 0x11D830u);
    ctx->pc = 0x11D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D828u;
    // 0x11d82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x11D828u, 0x11D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D830u;
label_11d830:
    // 0x11d830: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11d830u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11d834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11d838:
    // 0x11d838: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11d838u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d83c: 0x4500011c  bc1f        . + 4 + (0x11C << 2)
    ctx->pc = 0x11D83Cu;
    {
        const bool branch_taken_0x11d83c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D83Cu;
        // 0x11d840: 0x2649ffff  addiu       $t1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d83c) {
            ctx->pc = 0x11DCB0u;
            goto label_11dcb0;
        }
    }
    ctx->pc = 0x11D844u;
    // 0x11d844: 0x130782a  slt         $t7, $t1, $s0
    ctx->pc = 0x11d844u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d848: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11D848u;
    {
        const bool branch_taken_0x11d848 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D848u;
        // 0x11d84c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d848) {
            ctx->pc = 0x11D87Cu;
            goto label_11d87c;
        }
    }
    ctx->pc = 0x11D850u;
    // 0x11d850: 0x97880  sll         $t7, $t1, 2
    ctx->pc = 0x11d850u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11d854: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x11d854u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d858: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11d858u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11d85c:
    // 0x11d85c: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x11d85cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11d860: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11d860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11d864: 0x130702a  slt         $t6, $t1, $s0
    ctx->pc = 0x11d864u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d868: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x11d868u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x11d86c: 0x0  nop
    ctx->pc = 0x11d86cu;
    // NOP
    // 0x11d870: 0x11c0fffa  beqz        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D870u;
    {
        const bool branch_taken_0x11d870 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D870u;
        // 0x11d874: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d870) {
            ctx->pc = 0x11D85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d85c;
        }
    }
    ctx->pc = 0x11D878u;
    // 0x11d878: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x11d878u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_11d87c:
    // 0x11d87c: 0x15c0003f  bnez        $t6, . + 4 + (0x3F << 2)
    ctx->pc = 0x11D87Cu;
    {
        const bool branch_taken_0x11d87c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D87Cu;
        // 0x11d880: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d87c) {
            ctx->pc = 0x11D97Cu;
            goto label_11d97c;
        }
    }
    ctx->pc = 0x11D884u;
    // 0x11d884: 0x260fffff  addiu       $t7, $s0, -0x1
    ctx->pc = 0x11d884u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11d888: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x11d888u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11d88c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d88cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d890: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11d890u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11d894: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11D894u;
    {
        const bool branch_taken_0x11d894 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D894u;
        // 0x11d898: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d894) {
            ctx->pc = 0x11D8C4u;
            goto label_11d8c4;
        }
    }
    ctx->pc = 0x11D89Cu;
    // 0x11d89c: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x11d89cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11d8a0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d8a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d8a4: 0x25eefffc  addiu       $t6, $t7, -0x4
    ctx->pc = 0x11d8a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
label_11d8a8:
    // 0x11d8a8: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11d8a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11d8ac: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11d8acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11d8b0: 0x0  nop
    ctx->pc = 0x11d8b0u;
    // NOP
    // 0x11d8b4: 0x0  nop
    ctx->pc = 0x11d8b4u;
    // NOP
    // 0x11d8b8: 0x0  nop
    ctx->pc = 0x11d8b8u;
    // NOP
    // 0x11d8bc: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D8BCu;
    {
        const bool branch_taken_0x11d8bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8BCu;
        // 0x11d8c0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8bc) {
            ctx->pc = 0x11D8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d8a8;
        }
    }
    ctx->pc = 0x11D8C4u;
label_11d8c4:
    // 0x11d8c4: 0x24c3021  addu        $a2, $s2, $t4
    ctx->pc = 0x11d8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x11d8c8: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11d8cc: 0xc9782a  slt         $t7, $a2, $t1
    ctx->pc = 0x11d8ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11d8d0: 0x15e0ff75  bnez        $t7, . + 4 + (-0x8B << 2)
    ctx->pc = 0x11D8D0u;
    {
        const bool branch_taken_0x11d8d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8D0u;
        // 0x11d8d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8d0) {
            ctx->pc = 0x11D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d6a8;
        }
    }
    ctx->pc = 0x11D8D8u;
    // 0x11d8d8: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x11d8d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11d8dc: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x11d8dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11d8e0: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11d8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11d8e4: 0x2a96821  addu        $t5, $s5, $t1
    ctx->pc = 0x11d8e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x11d8e8: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d8ec: 0x2296021  addu        $t4, $s1, $t1
    ctx->pc = 0x11d8ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x11d8f0: 0x25e80050  addiu       $t0, $t7, 0x50
    ctx->pc = 0x11d8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x11d8f4: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x11d8f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x11d8f8: 0x8faf0148  lw          $t7, 0x148($sp)
    ctx->pc = 0x11d8f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x11d8fc: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x11d8fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x11d900: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11d900u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11d904: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x11d904u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x11d908: 0x25ce00f0  addiu       $t6, $t6, 0xF0
    ctx->pc = 0x11d908u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
    // 0x11d90c: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x11d90cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11d910: 0x2a270000  slti        $a3, $s1, 0x0
    ctx->pc = 0x11d910u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_11d914:
    // 0x11d914: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d918: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11d918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d91c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11d91cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11d920: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x11D920u;
    {
        const bool branch_taken_0x11d920 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D920u;
        // 0x11d924: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d920) {
            ctx->pc = 0x11D954u;
            goto label_11d954;
        }
    }
    ctx->pc = 0x11D928u;
    // 0x11d928: 0x258b0050  addiu       $t3, $t4, 0x50
    ctx->pc = 0x11d928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x11d92c: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x11d92cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d930: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x11d930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11d934:
    // 0x11d934: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d938: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11d938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x11d93c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x11d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d940: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11d940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11d944: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d948: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x11d948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x11d94c: 0x1540fff9  bnez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11D94Cu;
    {
        const bool branch_taken_0x11d94c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D94Cu;
        // 0x11d950: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d94c) {
            ctx->pc = 0x11D934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D954u;
label_11d954:
    // 0x11d954: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x11d954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11d958: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11d958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11d95c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11d95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11d960: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x11d964: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x11d964u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x11d968: 0xc9782a  slt         $t7, $a2, $t1
    ctx->pc = 0x11d968u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11d96c: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11D96Cu;
    {
        const bool branch_taken_0x11d96c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D96Cu;
        // 0x11d970: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d96c) {
            ctx->pc = 0x11D914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d914;
        }
    }
    ctx->pc = 0x11D974u;
    // 0x11d974: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x11D974u;
    {
        const bool branch_taken_0x11d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D974u;
        // 0x11d978: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d974) {
            ctx->pc = 0x11D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d6a8;
        }
    }
    ctx->pc = 0x11D97Cu;
label_11d97c:
    // 0x11d97c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11d97cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d980: 0x450000cc  bc1f        . + 4 + (0xCC << 2)
    ctx->pc = 0x11D980u;
    {
        const bool branch_taken_0x11d980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D980u;
        // 0x11d984: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d980) {
            ctx->pc = 0x11DCB4u;
            goto label_11dcb4;
        }
    }
    ctx->pc = 0x11D988u;
    // 0x11d988: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11d988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11d98c: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11d990: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d994: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11d994u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11d998: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D998u;
    {
        const bool branch_taken_0x11d998 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D998u;
        // 0x11d99c: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d998) {
            ctx->pc = 0x11D9C0u;
            goto label_11d9c0;
        }
    }
    ctx->pc = 0x11D9A0u;
    // 0x11d9a0: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x11d9a0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_11d9a4:
    // 0x11d9a4: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11d9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11d9a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11d9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11d9ac: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11d9acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11d9b0: 0x0  nop
    ctx->pc = 0x11d9b0u;
    // NOP
    // 0x11d9b4: 0x0  nop
    ctx->pc = 0x11d9b4u;
    // NOP
    // 0x11d9b8: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D9B8u;
    {
        const bool branch_taken_0x11d9b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9B8u;
        // 0x11d9bc: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9b8) {
            ctx->pc = 0x11D9A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d9a4;
        }
    }
    ctx->pc = 0x11D9C0u;
label_11d9c0:
    // 0x11d9c0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11d9c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9c8: 0x25ce3500  addiu       $t6, $t6, 0x3500
    ctx->pc = 0x11d9c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13568));
    // 0x11d9cc: 0xc047b00  jal         func_11EC00
    ctx->pc = 0x11D9CCu;
    SET_GPR_U32(ctx, 31, 0x11D9D4u);
    ctx->pc = 0x11D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9CCu;
    // 0x11d9d0: 0xc5cc0000  lwc1        $f12, 0x0($t6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x11D9CCu, 0x11D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9D4u;
label_11d9d4:
    // 0x11d9d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11d9d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x11d9d8: 0x640002f  bltz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x11D9D8u;
    {
        const bool branch_taken_0x11d9d8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x11D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9D8u;
        // 0x11d9dc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9d8) {
            ctx->pc = 0x11DA98u;
            goto label_11da98;
        }
    }
    ctx->pc = 0x11D9E0u;
    // 0x11d9e0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11d9e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11d9e4: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11d9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11d9e8: 0x25ce34ec  addiu       $t6, $t6, 0x34EC
    ctx->pc = 0x11d9e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13548));
    // 0x11d9ec: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d9f0: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11d9f4:
    // 0x11d9f4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d9f8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11d9fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11d9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11da00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11da00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11da04: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11da04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11da08: 0xe5e000f0  swc1        $f0, 0xF0($t7)
    ctx->pc = 0x11da08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 240), bits); }
    // 0x11da0c: 0x521fff9  bgez        $t1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11DA0Cu;
    {
        const bool branch_taken_0x11da0c = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x11DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA0Cu;
        // 0x11da10: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da0c) {
            ctx->pc = 0x11D9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d9f4;
        }
    }
    ctx->pc = 0x11DA14u;
    // 0x11da14: 0x6400020  bltz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x11DA14u;
    {
        const bool branch_taken_0x11da14 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x11DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA14u;
        // 0x11da18: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da14) {
            ctx->pc = 0x11DA98u;
            goto label_11da98;
        }
    }
    ctx->pc = 0x11DA1Cu;
    // 0x11da1c: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x11da1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11da20: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11da20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11da24: 0x25e634b0  addiu       $a2, $t7, 0x34B0
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 13488));
    // 0x11da28: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
label_11da2c:
    // 0x11da2c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11da2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11da30: 0x8faf014c  lw          $t7, 0x14C($sp)
    ctx->pc = 0x11da30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11da34: 0x15e0009c  bnez        $t7, . + 4 + (0x9C << 2)
    ctx->pc = 0x11DA34u;
    {
        const bool branch_taken_0x11da34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA34u;
        // 0x11da38: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da34) {
            ctx->pc = 0x11DCA8u;
            goto label_11dca8;
        }
    }
    ctx->pc = 0x11DA3Cu;
    // 0x11da3c: 0x2494023  subu        $t0, $s2, $t1
    ctx->pc = 0x11da3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x11da40: 0x500000f  bltz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x11DA40u;
    {
        const bool branch_taken_0x11da40 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x11DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA40u;
        // 0x11da44: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da40) {
            ctx->pc = 0x11DA80u;
            goto label_11da80;
        }
    }
    ctx->pc = 0x11DA48u;
    // 0x11da48: 0x25cb00f0  addiu       $t3, $t6, 0xF0
    ctx->pc = 0x11da48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
    // 0x11da4c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x11da4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da50: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11da50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11da54:
    // 0x11da54: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11da54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11da58: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x11da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11da5c: 0xec502a  slt         $t2, $a3, $t4
    ctx->pc = 0x11da5cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11da60: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x11da64: 0x20c782a  slt         $t7, $s0, $t4
    ctx->pc = 0x11da64u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11da68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11da68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11da6c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x11da6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x11da70: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DA70u;
    {
        const bool branch_taken_0x11da70 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA70u;
        // 0x11da74: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da70) {
            ctx->pc = 0x11DA80u;
            goto label_11da80;
        }
    }
    ctx->pc = 0x11DA78u;
    // 0x11da78: 0x5140fff6  beql        $t2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x11DA78u;
    {
        const bool branch_taken_0x11da78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da78) {
            ctx->pc = 0x11DA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DA78u;
            // 0x11da7c: 0xc5a00000  lwc1        $f0, 0x0($t5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11da54;
        }
    }
    ctx->pc = 0x11DA80u;
label_11da80:
    // 0x11da80: 0x87880  sll         $t7, $t0, 2
    ctx->pc = 0x11da80u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11da84: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11da84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11da88: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11da88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11da8c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11da8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11da90: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11DA90u;
    {
        const bool branch_taken_0x11da90 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x11DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA90u;
        // 0x11da94: 0xe5e200a0  swc1        $f2, 0xA0($t7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da90) {
            ctx->pc = 0x11DA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11da2c;
        }
    }
    ctx->pc = 0x11DA98u;
label_11da98:
    // 0x11da98: 0x8fae0144  lw          $t6, 0x144($sp)
    ctx->pc = 0x11da98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11da9c: 0x29cf0003  slti        $t7, $t6, 0x3
    ctx->pc = 0x11da9cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11daa0: 0x51e00042  beql        $t7, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x11DAA0u;
    {
        const bool branch_taken_0x11daa0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11daa0) {
            ctx->pc = 0x11DAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DAA0u;
            // 0x11daa4: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DBACu;
            goto label_11dbac;
        }
    }
    ctx->pc = 0x11DAA8u;
    // 0x11daa8: 0x5dc00021  bgtzl       $t6, . + 4 + (0x21 << 2)
    ctx->pc = 0x11DAA8u;
    {
        const bool branch_taken_0x11daa8 = (GPR_S64(ctx, 14) > 0);
        if (branch_taken_0x11daa8) {
            ctx->pc = 0x11DAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DAA8u;
            // 0x11daac: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DB30u;
            goto label_11db30;
        }
    }
    ctx->pc = 0x11DAB0u;
    // 0x11dab0: 0x51c0000f  beql        $t6, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11DAB0u;
    {
        const bool branch_taken_0x11dab0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dab0) {
            ctx->pc = 0x11DAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DAB0u;
            // 0x11dab4: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DAF0u;
            goto label_11daf0;
        }
    }
    ctx->pc = 0x11DAB8u;
label_11dab8:
    // 0x11dab8: 0x32e20007  andi        $v0, $s7, 0x7
    ctx->pc = 0x11dab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
label_11dabc:
    // 0x11dabc: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x11dabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x11dac0: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x11dac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x11dac4: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x11dac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11dac8: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x11dac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x11dacc: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x11daccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11dad0: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x11dad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x11dad4: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x11dad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11dad8: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x11dad8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x11dadc: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x11dadcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11dae0: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x11dae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x11dae4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11dae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11dae8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAE8u;
        // 0x11daec: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DAF0u;
label_11daf0:
    // 0x11daf0: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DAF0u;
    {
        const bool branch_taken_0x11daf0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x11DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAF0u;
        // 0x11daf4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11daf0) {
            ctx->pc = 0x11DB18u;
            goto label_11db18;
        }
    }
    ctx->pc = 0x11DAF8u;
    // 0x11daf8: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11daf8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11dafc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11db00: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x11db00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11db04:
    // 0x11db04: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11db04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db08: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11db08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11db0c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11db0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11db10: 0x521fffc  bgez        $t1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11DB10u;
    {
        const bool branch_taken_0x11db10 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x11DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB10u;
        // 0x11db14: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db10) {
            ctx->pc = 0x11DB04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11db04;
        }
    }
    ctx->pc = 0x11DB18u;
label_11db18:
    // 0x11db18: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DB18u;
    {
        const bool branch_taken_0x11db18 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB18u;
        // 0x11db1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db18) {
            ctx->pc = 0x11DB24u;
            goto label_11db24;
        }
    }
    ctx->pc = 0x11DB20u;
    // 0x11db20: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11db20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11db24:
    // 0x11db24: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11db24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11db28: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11DB28u;
    {
        const bool branch_taken_0x11db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB28u;
        // 0x11db2c: 0xe5e00000  swc1        $f0, 0x0($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db28) {
            ctx->pc = 0x11DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dab8;
        }
    }
    ctx->pc = 0x11DB30u;
label_11db30:
    // 0x11db30: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DB30u;
    {
        const bool branch_taken_0x11db30 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x11DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB30u;
        // 0x11db34: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db30) {
            ctx->pc = 0x11DB58u;
            goto label_11db58;
        }
    }
    ctx->pc = 0x11DB38u;
    // 0x11db38: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11db38u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11db3c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11db3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11db40: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x11db40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11db44:
    // 0x11db44: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11db44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db48: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11db48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11db4c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11db4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11db50: 0x521fffc  bgez        $t1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11DB50u;
    {
        const bool branch_taken_0x11db50 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x11DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB50u;
        // 0x11db54: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db50) {
            ctx->pc = 0x11DB44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11db44;
        }
    }
    ctx->pc = 0x11DB58u;
label_11db58:
    // 0x11db58: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DB58u;
    {
        const bool branch_taken_0x11db58 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB58u;
        // 0x11db5c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db58) {
            ctx->pc = 0x11DB64u;
            goto label_11db64;
        }
    }
    ctx->pc = 0x11DB60u;
    // 0x11db60: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11db60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11db64:
    // 0x11db64: 0x8fae0140  lw          $t6, 0x140($sp)
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11db68: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11db6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db70: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DB70u;
    {
        const bool branch_taken_0x11db70 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x11DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB70u;
        // 0x11db74: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db70) {
            ctx->pc = 0x11DB94u;
            goto label_11db94;
        }
    }
    ctx->pc = 0x11DB78u;
    // 0x11db78: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x11db78u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db7c: 0x27ad00a4  addiu       $t5, $sp, 0xA4
    ctx->pc = 0x11db7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_11db80:
    // 0x11db80: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db84: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x11db84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x11db88: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11db88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11db8c: 0x15c0fffc  bnez        $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11DB8Cu;
    {
        const bool branch_taken_0x11db8c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB8Cu;
        // 0x11db90: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db8c) {
            ctx->pc = 0x11DB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11db80;
        }
    }
    ctx->pc = 0x11DB94u;
label_11db94:
    // 0x11db94: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DB94u;
    {
        const bool branch_taken_0x11db94 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB94u;
        // 0x11db98: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db94) {
            ctx->pc = 0x11DBA0u;
            goto label_11dba0;
        }
    }
    ctx->pc = 0x11DB9Cu;
    // 0x11db9c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11db9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11dba0:
    // 0x11dba0: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11dba0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_11dba4:
    // 0x11dba4: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x11DBA4u;
    {
        const bool branch_taken_0x11dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBA4u;
        // 0x11dba8: 0xe5e00004  swc1        $f0, 0x4($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dba4) {
            ctx->pc = 0x11DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dab8;
        }
    }
    ctx->pc = 0x11DBACu;
label_11dbac:
    // 0x11dbac: 0x15cfffc3  bne         $t6, $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x11DBACu;
    {
        const bool branch_taken_0x11dbac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x11DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBACu;
        // 0x11dbb0: 0x32e20007  andi        $v0, $s7, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbac) {
            ctx->pc = 0x11DABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dabc;
        }
    }
    ctx->pc = 0x11DBB4u;
    // 0x11dbb4: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11DBB4u;
    {
        const bool branch_taken_0x11dbb4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x11DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBB4u;
        // 0x11dbb8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbb4) {
            ctx->pc = 0x11DBECu;
            goto label_11dbec;
        }
    }
    ctx->pc = 0x11DBBCu;
    // 0x11dbbc: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11dbbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11dbc0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11dbc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11dbc4:
    // 0x11dbc4: 0xc5e0009c  lwc1        $f0, 0x9C($t7)
    ctx->pc = 0x11dbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dbc8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11dbc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11dbcc: 0xc5e100a0  lwc1        $f1, 0xA0($t7)
    ctx->pc = 0x11dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dbd0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11dbd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11dbd4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11dbd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11dbd8: 0xe5e2009c  swc1        $f2, 0x9C($t7)
    ctx->pc = 0x11dbd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 156), bits); }
    // 0x11dbdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11dbdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11dbe0: 0xe5e100a0  swc1        $f1, 0xA0($t7)
    ctx->pc = 0x11dbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 160), bits); }
    // 0x11dbe4: 0x1d20fff7  bgtz        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11DBE4u;
    {
        const bool branch_taken_0x11dbe4 = (GPR_S64(ctx, 9) > 0);
        ctx->pc = 0x11DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBE4u;
        // 0x11dbe8: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbe4) {
            ctx->pc = 0x11DBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dbc4;
        }
    }
    ctx->pc = 0x11DBECu;
label_11dbec:
    // 0x11dbec: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x11dbecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dbf0: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11DBF0u;
    {
        const bool branch_taken_0x11dbf0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBF0u;
        // 0x11dbf4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbf0) {
            ctx->pc = 0x11DC2Cu;
            goto label_11dc2c;
        }
    }
    ctx->pc = 0x11DBF8u;
    // 0x11dbf8: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11dbf8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11dbfc: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11dbfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11dc00:
    // 0x11dc00: 0xc581009c  lwc1        $f1, 0x9C($t4)
    ctx->pc = 0x11dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dc04: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11dc04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11dc08: 0xc58000a0  lwc1        $f0, 0xA0($t4)
    ctx->pc = 0x11dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc0c: 0x292f0002  slti        $t7, $t1, 0x2
    ctx->pc = 0x11dc0cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dc10: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x11dc10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11dc14: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11dc14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11dc18: 0xe582009c  swc1        $f2, 0x9C($t4)
    ctx->pc = 0x11dc18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 156), bits); }
    // 0x11dc1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11dc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11dc20: 0xe58000a0  swc1        $f0, 0xA0($t4)
    ctx->pc = 0x11dc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 160), bits); }
    // 0x11dc24: 0x11e0fff6  beqz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x11DC24u;
    {
        const bool branch_taken_0x11dc24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC24u;
        // 0x11dc28: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc24) {
            ctx->pc = 0x11DC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dc00;
        }
    }
    ctx->pc = 0x11DC2Cu;
label_11dc2c:
    // 0x11dc2c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11dc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dc30: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x11dc30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dc34: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11DC34u;
    {
        const bool branch_taken_0x11dc34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC34u;
        // 0x11dc38: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc34) {
            ctx->pc = 0x11DC60u;
            goto label_11dc60;
        }
    }
    ctx->pc = 0x11DC3Cu;
    // 0x11dc3c: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11dc3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11dc40: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11dc40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11dc44: 0x25ec00a0  addiu       $t4, $t7, 0xA0
    ctx->pc = 0x11dc44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11dc48:
    // 0x11dc48: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x11dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc4c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11dc4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11dc50: 0x292f0002  slti        $t7, $t1, 0x2
    ctx->pc = 0x11dc50u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dc54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11dc54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11dc58: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11DC58u;
    {
        const bool branch_taken_0x11dc58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC58u;
        // 0x11dc5c: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc58) {
            ctx->pc = 0x11DC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dc48;
        }
    }
    ctx->pc = 0x11DC60u;
label_11dc60:
    // 0x11dc60: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DC60u;
    {
        const bool branch_taken_0x11dc60 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC60u;
        // 0x11dc64: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc60) {
            ctx->pc = 0x11DC84u;
            goto label_11dc84;
        }
    }
    ctx->pc = 0x11DC68u;
    // 0x11dc68: 0x8fae0140  lw          $t6, 0x140($sp)
    ctx->pc = 0x11dc68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11dc6c: 0xe5c20008  swc1        $f2, 0x8($t6)
    ctx->pc = 0x11dc6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x11dc70: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc74: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11dc78: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x11dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dc7c: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x11DC7Cu;
    {
        const bool branch_taken_0x11dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC7Cu;
        // 0x11dc80: 0xe5c10004  swc1        $f1, 0x4($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc7c) {
            ctx->pc = 0x11DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dab8;
        }
    }
    ctx->pc = 0x11DC84u;
label_11dc84:
    // 0x11dc84: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x11dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc88: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11dc88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11dc8c: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11dc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11dc90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11dc90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11dc94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11dc94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11dc98: 0xe5e20008  swc1        $f2, 0x8($t7)
    ctx->pc = 0x11dc98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x11dc9c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x11DC9Cu;
    {
        const bool branch_taken_0x11dc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC9Cu;
        // 0x11dca0: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc9c) {
            ctx->pc = 0x11DBA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dba4;
        }
    }
    ctx->pc = 0x11DCA4u;
    // 0x11dca4: 0x0  nop
    ctx->pc = 0x11dca4u;
    // NOP
label_11dca8:
    // 0x11dca8: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x11DCA8u;
    {
        const bool branch_taken_0x11dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCA8u;
        // 0x11dcac: 0x2494023  subu        $t0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dca8) {
            ctx->pc = 0x11DA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11da80;
        }
    }
    ctx->pc = 0x11DCB0u;
label_11dcb0:
    // 0x11dcb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11dcb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11dcb4:
    // 0x11dcb4: 0xc047b00  jal         func_11EC00
    ctx->pc = 0x11DCB4u;
    SET_GPR_U32(ctx, 31, 0x11DCBCu);
    ctx->pc = 0x11DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCB4u;
    // 0x11dcb8: 0x132023  negu        $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC00u, 0x11DCB4u, 0x11DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCBCu;
label_11dcbc:
    // 0x11dcbc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11dcbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11dcc0: 0x25ce34f0  addiu       $t6, $t6, 0x34F0
    ctx->pc = 0x11dcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13552));
    // 0x11dcc4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11dcc4u;
    { uint32_t bits = FAST_READ32(0x6634F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dcc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11dcc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dccc: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x11DCCCu;
    {
        const bool branch_taken_0x11dccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCCCu;
        // 0x11dcd0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dccc) {
            ctx->pc = 0x11DD2Cu;
            goto label_11dd2c;
        }
    }
    ctx->pc = 0x11DCD4u;
    // 0x11dcd4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11dcd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11dcd8: 0x29d6821  addu        $t5, $s4, $sp
    ctx->pc = 0x11dcd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11dcdc: 0x25ef34ec  addiu       $t7, $t7, 0x34EC
    ctx->pc = 0x11dcdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13548));
    // 0x11dce0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11dce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11dce4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11dce4u;
    { uint32_t bits = FAST_READ32(0x6634ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dce8: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x11dce8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11dcec: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11dcecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11dcf0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x11dcf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11dcf4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dcf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dcf8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11dcf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11dcfc: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11dcfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11dd00: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11dd00u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dd04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11dd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11dd08: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x11dd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11dd0c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11dd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11dd10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11dd10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11dd14: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11dd14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11dd18: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x11dd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11dd1c: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x11dd20: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11dd20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11dd24: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x11DD24u;
    {
        const bool branch_taken_0x11dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD24u;
        // 0x11dd28: 0xadcf0000  sw          $t7, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd24) {
            ctx->pc = 0x11D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d9c0;
        }
    }
    ctx->pc = 0x11DD2Cu;
label_11dd2c:
    // 0x11dd2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11dd2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11dd30: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11dd34: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11dd34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11dd38: 0x1000ff21  b           . + 4 + (-0xDF << 2)
    ctx->pc = 0x11DD38u;
    {
        const bool branch_taken_0x11dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD38u;
        // 0x11dd3c: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd38) {
            ctx->pc = 0x11D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d9c0;
        }
    }
    ctx->pc = 0x11DD40u;
label_11dd40:
    // 0x11dd40: 0x8dcffffc  lw          $t7, -0x4($t6)
    ctx->pc = 0x11dd40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x11dd44: 0x31ef003f  andi        $t7, $t7, 0x3F
    ctx->pc = 0x11dd44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
label_11dd48:
    // 0x11dd48: 0x1000feaf  b           . + 4 + (-0x151 << 2)
    ctx->pc = 0x11DD48u;
    {
        const bool branch_taken_0x11dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD48u;
        // 0x11dd4c: 0xadcffffc  sw          $t7, -0x4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294967292), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd48) {
            ctx->pc = 0x11D808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d808;
        }
    }
    ctx->pc = 0x11DD50u;
label_11dd50:
    // 0x11dd50: 0x8dcffffc  lw          $t7, -0x4($t6)
    ctx->pc = 0x11dd50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x11dd54: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x11DD54u;
    {
        const bool branch_taken_0x11dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD54u;
        // 0x11dd58: 0x31ef007f  andi        $t7, $t7, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd54) {
            ctx->pc = 0x11DD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dd48;
        }
    }
    ctx->pc = 0x11DD5Cu;
label_11dd5c:
    // 0x11dd5c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD5Cu;
    {
        const bool branch_taken_0x11dd5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD5Cu;
        // 0x11dd60: 0x3c0e0066  lui         $t6, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd5c) {
            ctx->pc = 0x11DD74u;
            goto label_11dd74;
        }
    }
    ctx->pc = 0x11DD64u;
    // 0x11dd64: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11dd64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11dd68: 0x8deefffc  lw          $t6, -0x4($t7)
    ctx->pc = 0x11dd68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x11dd6c: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x11DD6Cu;
    {
        const bool branch_taken_0x11dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD6Cu;
        // 0x11dd70: 0xef203  sra         $fp, $t6, 8 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd6c) {
            ctx->pc = 0x11D7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d7a0;
        }
    }
    ctx->pc = 0x11DD74u;
label_11dd74:
    // 0x11dd74: 0x25ce34fc  addiu       $t6, $t6, 0x34FC
    ctx->pc = 0x11dd74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13564));
    // 0x11dd78: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dd7c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11dd7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dd80: 0x4503fe87  bc1tl       . + 4 + (-0x179 << 2)
    ctx->pc = 0x11DD80u;
    {
        const bool branch_taken_0x11dd80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11dd80) {
            ctx->pc = 0x11DD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD80u;
            // 0x11dd84: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d7a0;
        }
    }
    ctx->pc = 0x11DD88u;
    // 0x11dd88: 0x1000fe85  b           . + 4 + (-0x17B << 2)
    ctx->pc = 0x11DD88u;
    {
        const bool branch_taken_0x11dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd88) {
            ctx->pc = 0x11D7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d7a0;
        }
    }
    ctx->pc = 0x11DD90u;
}
