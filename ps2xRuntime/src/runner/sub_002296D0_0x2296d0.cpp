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

// Function: sub_002296D0
// Address: 0x2296d0 - 0x22995c
void sub_002296D0_0x2296d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002296D0_0x2296d0");
#endif

    switch (ctx->pc) {
        case 0x2296d0u: goto label_2296d0;
        case 0x2296d4u: goto label_2296d4;
        case 0x2296d8u: goto label_2296d8;
        case 0x2296dcu: goto label_2296dc;
        case 0x2296e0u: goto label_2296e0;
        case 0x2296e4u: goto label_2296e4;
        case 0x2296e8u: goto label_2296e8;
        case 0x2296ecu: goto label_2296ec;
        case 0x2296f0u: goto label_2296f0;
        case 0x2296f4u: goto label_2296f4;
        case 0x2296f8u: goto label_2296f8;
        case 0x2296fcu: goto label_2296fc;
        case 0x229700u: goto label_229700;
        case 0x229704u: goto label_229704;
        case 0x229708u: goto label_229708;
        case 0x22970cu: goto label_22970c;
        case 0x229710u: goto label_229710;
        case 0x229714u: goto label_229714;
        case 0x229718u: goto label_229718;
        case 0x22971cu: goto label_22971c;
        case 0x229720u: goto label_229720;
        case 0x229724u: goto label_229724;
        case 0x229728u: goto label_229728;
        case 0x22972cu: goto label_22972c;
        case 0x229730u: goto label_229730;
        case 0x229734u: goto label_229734;
        case 0x229738u: goto label_229738;
        case 0x22973cu: goto label_22973c;
        case 0x229740u: goto label_229740;
        case 0x229744u: goto label_229744;
        case 0x229748u: goto label_229748;
        case 0x22974cu: goto label_22974c;
        case 0x229750u: goto label_229750;
        case 0x229754u: goto label_229754;
        case 0x229758u: goto label_229758;
        case 0x22975cu: goto label_22975c;
        case 0x229760u: goto label_229760;
        case 0x229764u: goto label_229764;
        case 0x229768u: goto label_229768;
        case 0x22976cu: goto label_22976c;
        case 0x229770u: goto label_229770;
        case 0x229774u: goto label_229774;
        case 0x229778u: goto label_229778;
        case 0x22977cu: goto label_22977c;
        case 0x229780u: goto label_229780;
        case 0x229784u: goto label_229784;
        case 0x229788u: goto label_229788;
        case 0x22978cu: goto label_22978c;
        case 0x229790u: goto label_229790;
        case 0x229794u: goto label_229794;
        case 0x229798u: goto label_229798;
        case 0x22979cu: goto label_22979c;
        case 0x2297a0u: goto label_2297a0;
        case 0x2297a4u: goto label_2297a4;
        case 0x2297a8u: goto label_2297a8;
        case 0x2297acu: goto label_2297ac;
        case 0x2297b0u: goto label_2297b0;
        case 0x2297b4u: goto label_2297b4;
        case 0x2297b8u: goto label_2297b8;
        case 0x2297bcu: goto label_2297bc;
        case 0x2297c0u: goto label_2297c0;
        case 0x2297c4u: goto label_2297c4;
        case 0x2297c8u: goto label_2297c8;
        case 0x2297ccu: goto label_2297cc;
        case 0x2297d0u: goto label_2297d0;
        case 0x2297d4u: goto label_2297d4;
        case 0x2297d8u: goto label_2297d8;
        case 0x2297dcu: goto label_2297dc;
        case 0x2297e0u: goto label_2297e0;
        case 0x2297e4u: goto label_2297e4;
        case 0x2297e8u: goto label_2297e8;
        case 0x2297ecu: goto label_2297ec;
        case 0x2297f0u: goto label_2297f0;
        case 0x2297f4u: goto label_2297f4;
        case 0x2297f8u: goto label_2297f8;
        case 0x2297fcu: goto label_2297fc;
        case 0x229800u: goto label_229800;
        case 0x229804u: goto label_229804;
        case 0x229808u: goto label_229808;
        case 0x22980cu: goto label_22980c;
        case 0x229810u: goto label_229810;
        case 0x229814u: goto label_229814;
        case 0x229818u: goto label_229818;
        case 0x22981cu: goto label_22981c;
        case 0x229820u: goto label_229820;
        case 0x229824u: goto label_229824;
        case 0x229828u: goto label_229828;
        case 0x22982cu: goto label_22982c;
        case 0x229830u: goto label_229830;
        case 0x229834u: goto label_229834;
        case 0x229838u: goto label_229838;
        case 0x22983cu: goto label_22983c;
        case 0x229840u: goto label_229840;
        case 0x229844u: goto label_229844;
        case 0x229848u: goto label_229848;
        case 0x22984cu: goto label_22984c;
        case 0x229850u: goto label_229850;
        case 0x229854u: goto label_229854;
        case 0x229858u: goto label_229858;
        case 0x22985cu: goto label_22985c;
        case 0x229860u: goto label_229860;
        case 0x229864u: goto label_229864;
        case 0x229868u: goto label_229868;
        case 0x22986cu: goto label_22986c;
        case 0x229870u: goto label_229870;
        case 0x229874u: goto label_229874;
        case 0x229878u: goto label_229878;
        case 0x22987cu: goto label_22987c;
        case 0x229880u: goto label_229880;
        case 0x229884u: goto label_229884;
        case 0x229888u: goto label_229888;
        case 0x22988cu: goto label_22988c;
        case 0x229890u: goto label_229890;
        case 0x229894u: goto label_229894;
        case 0x229898u: goto label_229898;
        case 0x22989cu: goto label_22989c;
        case 0x2298a0u: goto label_2298a0;
        case 0x2298a4u: goto label_2298a4;
        case 0x2298a8u: goto label_2298a8;
        case 0x2298acu: goto label_2298ac;
        case 0x2298b0u: goto label_2298b0;
        case 0x2298b4u: goto label_2298b4;
        case 0x2298b8u: goto label_2298b8;
        case 0x2298bcu: goto label_2298bc;
        case 0x2298c0u: goto label_2298c0;
        case 0x2298c4u: goto label_2298c4;
        case 0x2298c8u: goto label_2298c8;
        case 0x2298ccu: goto label_2298cc;
        case 0x2298d0u: goto label_2298d0;
        case 0x2298d4u: goto label_2298d4;
        case 0x2298d8u: goto label_2298d8;
        case 0x2298dcu: goto label_2298dc;
        case 0x2298e0u: goto label_2298e0;
        case 0x2298e4u: goto label_2298e4;
        case 0x2298e8u: goto label_2298e8;
        case 0x2298ecu: goto label_2298ec;
        case 0x2298f0u: goto label_2298f0;
        case 0x2298f4u: goto label_2298f4;
        case 0x2298f8u: goto label_2298f8;
        case 0x2298fcu: goto label_2298fc;
        case 0x229900u: goto label_229900;
        case 0x229904u: goto label_229904;
        case 0x229908u: goto label_229908;
        case 0x22990cu: goto label_22990c;
        case 0x229910u: goto label_229910;
        case 0x229914u: goto label_229914;
        case 0x229918u: goto label_229918;
        case 0x22991cu: goto label_22991c;
        case 0x229920u: goto label_229920;
        case 0x229924u: goto label_229924;
        case 0x229928u: goto label_229928;
        case 0x22992cu: goto label_22992c;
        case 0x229930u: goto label_229930;
        case 0x229934u: goto label_229934;
        case 0x229938u: goto label_229938;
        case 0x22993cu: goto label_22993c;
        case 0x229940u: goto label_229940;
        case 0x229944u: goto label_229944;
        case 0x229948u: goto label_229948;
        case 0x22994cu: goto label_22994c;
        case 0x229950u: goto label_229950;
        case 0x229954u: goto label_229954;
        case 0x229958u: goto label_229958;
        default: break;
    }

    ctx->pc = 0x2296d0u;

label_2296d0:
    // 0x2296d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2296d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2296d4:
    // 0x2296d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2296d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2296d8:
    // 0x2296d8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2296d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2296dc:
    // 0x2296dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2296dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2296e0:
    // 0x2296e0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2296e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2296e4:
    // 0x2296e4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2296e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2296e8:
    // 0x2296e8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2296e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2296ec:
    // 0x2296ec: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2296ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2296f0:
    // 0x2296f0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2296f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2296f4:
    // 0x2296f4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2296f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_2296f8:
    // 0x2296f8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2296f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_2296fc:
    // 0x2296fc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2296fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_229700:
    // 0x229700: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x229700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_229704:
    // 0x229704: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x229704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229708:
    // 0x229708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22970c:
    // 0x22970c: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x22970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229710:
    // 0x229710: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x229710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_229714:
    // 0x229714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_229718:
    // 0x229718: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_22971c:
    // 0x22971c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x22971cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_229720:
    // 0x229720: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
label_229724:
    if (ctx->pc == 0x229724u) {
        ctx->pc = 0x229724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229720u;
        // 0x229724: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229728u;
        goto label_229728;
    }
    ctx->pc = 0x229720u;
    {
        const bool branch_taken_0x229720 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x229724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229720u;
        // 0x229724: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229720) {
            ctx->pc = 0x229930u;
            goto label_229930;
        }
    }
    ctx->pc = 0x229728u;
label_229728:
    // 0x229728: 0x2697000c  addiu       $s7, $s4, 0xC
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_22972c:
    // 0x22972c: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_229730:
    // 0x229730: 0xafb70028  sw          $s7, 0x28($sp)
    ctx->pc = 0x229730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 23));
label_229734:
    // 0x229734: 0x269e0004  addiu       $fp, $s4, 0x4
    ctx->pc = 0x229734u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_229738:
    // 0x229738: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x229738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_22973c:
    // 0x22973c: 0x0  nop
    ctx->pc = 0x22973cu;
    // NOP
label_229740:
    // 0x229740: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x229740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_229744:
    // 0x229744: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_229748:
    // 0x229748: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x229748u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22974c:
    // 0x22974c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_229750:
    // 0x229750: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_229754:
    // 0x229754: 0x40f809  jalr        $v0
label_229758:
    if (ctx->pc == 0x229758u) {
        ctx->pc = 0x229758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229754u;
        // 0x229758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22975Cu;
        goto label_22975c;
    }
    ctx->pc = 0x229754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22975Cu);
        ctx->pc = 0x229758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229754u;
        // 0x229758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229754u, 0x22975Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22975Cu;
label_22975c:
    // 0x22975c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_229760:
    if (ctx->pc == 0x229760u) {
        ctx->pc = 0x229760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22975Cu;
        // 0x229760: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229764u;
        goto label_229764;
    }
    ctx->pc = 0x22975Cu;
    {
        const bool branch_taken_0x22975c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22975c) {
            ctx->pc = 0x229760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22975Cu;
            // 0x229760: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x229764u;
            goto label_229764;
        }
    }
    ctx->pc = 0x229764u;
label_229764:
    // 0x229764: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x229764u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_229768:
    // 0x229768: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_22976c:
    // 0x22976c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22976cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_229770:
    // 0x229770: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x229770u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_229774:
    // 0x229774: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_229778:
    // 0x229778: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x229778u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_22977c:
    // 0x22977c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_229780:
    // 0x229780: 0x8012  mflo        $s0
    ctx->pc = 0x229780u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_229784:
    // 0x229784: 0x40f809  jalr        $v0
label_229788:
    if (ctx->pc == 0x229788u) {
        ctx->pc = 0x229788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229784u;
        // 0x229788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22978Cu;
        goto label_22978c;
    }
    ctx->pc = 0x229784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22978Cu);
        ctx->pc = 0x229788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229784u;
        // 0x229788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229784u, 0x22978Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22978Cu;
label_22978c:
    // 0x22978c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x22978cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_229790:
    // 0x229790: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_229794:
    // 0x229794: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x229794u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_229798:
    // 0x229798: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_22979c:
    // 0x22979c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x22979cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2297a0:
    // 0x2297a0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x2297a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_2297a4:
    // 0x2297a4: 0x58600057  blezl       $v1, . + 4 + (0x57 << 2)
label_2297a8:
    if (ctx->pc == 0x2297A8u) {
        ctx->pc = 0x2297A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297A4u;
        // 0x2297a8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2297ACu;
        goto label_2297ac;
    }
    ctx->pc = 0x2297A4u;
    {
        const bool branch_taken_0x2297a4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2297a4) {
            ctx->pc = 0x2297A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2297A4u;
            // 0x2297a8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229904u;
            goto label_229904;
        }
    }
    ctx->pc = 0x2297ACu;
label_2297ac:
    // 0x2297ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2297acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2297b0:
    // 0x2297b0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2297b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2297b4:
    // 0x2297b4: 0x8fb5002c  lw          $s5, 0x2C($sp)
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2297b8:
    // 0x2297b8: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x2297b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2297bc:
    // 0x2297bc: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x2297bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_2297c0:
    // 0x2297c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2297c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2297c4:
    // 0x2297c4: 0x1a400025  blez        $s2, . + 4 + (0x25 << 2)
label_2297c8:
    if (ctx->pc == 0x2297C8u) {
        ctx->pc = 0x2297C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297C4u;
        // 0x2297c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2297CCu;
        goto label_2297cc;
    }
    ctx->pc = 0x2297C4u;
    {
        const bool branch_taken_0x2297c4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2297C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297C4u;
        // 0x2297c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297c4) {
            ctx->pc = 0x22985Cu;
            goto label_22985c;
        }
    }
    ctx->pc = 0x2297CCu;
label_2297cc:
    // 0x2297cc: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x2297ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2297d0:
    // 0x2297d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2297d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2297d4:
    // 0x2297d4: 0x0  nop
    ctx->pc = 0x2297d4u;
    // NOP
label_2297d8:
    // 0x2297d8: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x2297d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2297dc:
    // 0x2297dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2297dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2297e0:
    // 0x2297e0: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2297e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2297e4:
    // 0x2297e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2297e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2297e8:
    // 0x2297e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2297e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2297ec:
    // 0x2297ec: 0x40f809  jalr        $v0
label_2297f0:
    if (ctx->pc == 0x2297F0u) {
        ctx->pc = 0x2297F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297ECu;
        // 0x2297f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2297F4u;
        goto label_2297f4;
    }
    ctx->pc = 0x2297ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2297F4u);
        ctx->pc = 0x2297F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297ECu;
        // 0x2297f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2297ECu, 0x2297F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2297F4u;
label_2297f4:
    // 0x2297f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2297f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2297f8:
    // 0x2297f8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2297f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2297fc:
    // 0x2297fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2297fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_229800:
    // 0x229800: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x229800u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
label_229804:
    // 0x229804: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
label_229808:
    if (ctx->pc == 0x229808u) {
        ctx->pc = 0x229808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229804u;
        // 0x229808: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22980Cu;
        goto label_22980c;
    }
    ctx->pc = 0x229804u;
    {
        const bool branch_taken_0x229804 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x229808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229804u;
        // 0x229808: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229804) {
            ctx->pc = 0x229834u;
            goto label_229834;
        }
    }
    ctx->pc = 0x22980Cu;
label_22980c:
    // 0x22980c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x22980cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_229810:
    // 0x229810: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x229810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_229814:
    // 0x229814: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x229814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_229818:
    // 0x229818: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x229818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_22981c:
    // 0x22981c: 0x42823  negu        $a1, $a0
    ctx->pc = 0x22981cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_229820:
    // 0x229820: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x229820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_229824:
    // 0x229824: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x229824u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_229828:
    // 0x229828: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x229828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22982c:
    // 0x22982c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_229830:
    if (ctx->pc == 0x229830u) {
        ctx->pc = 0x229830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22982Cu;
        // 0x229830: 0x83980b  movn        $s3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229834u;
        goto label_229834;
    }
    ctx->pc = 0x22982Cu;
    {
        const bool branch_taken_0x22982c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x229830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22982Cu;
        // 0x229830: 0x83980b  movn        $s3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22982c) {
            ctx->pc = 0x229810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229810;
        }
    }
    ctx->pc = 0x229834u;
label_229834:
    // 0x229834: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_229838:
    // 0x229838: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x229838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_22983c:
    // 0x22983c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22983cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229840:
    // 0x229840: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x229840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_229844:
    // 0x229844: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x229844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_229848:
    // 0x229848: 0x40f809  jalr        $v0
label_22984c:
    if (ctx->pc == 0x22984Cu) {
        ctx->pc = 0x22984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229848u;
        // 0x22984c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229850u;
        goto label_229850;
    }
    ctx->pc = 0x229848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229850u);
        ctx->pc = 0x22984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229848u;
        // 0x22984c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229848u, 0x229850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229850u;
label_229850:
    // 0x229850: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x229850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_229854:
    // 0x229854: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
label_229858:
    if (ctx->pc == 0x229858u) {
        ctx->pc = 0x229858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229854u;
        // 0x229858: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22985Cu;
        goto label_22985c;
    }
    ctx->pc = 0x229854u;
    {
        const bool branch_taken_0x229854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229854) {
            ctx->pc = 0x229858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229854u;
            // 0x229858: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2297D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2297d8;
        }
    }
    ctx->pc = 0x22985Cu;
label_22985c:
    // 0x22985c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x22985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_229860:
    // 0x229860: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_229864:
    // 0x229864: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x229864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_229868:
    // 0x229868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22986c:
    // 0x22986c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_229870:
    // 0x229870: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x229870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_229874:
    // 0x229874: 0x40f809  jalr        $v0
label_229878:
    if (ctx->pc == 0x229878u) {
        ctx->pc = 0x229878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229874u;
        // 0x229878: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22987Cu;
        goto label_22987c;
    }
    ctx->pc = 0x229874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22987Cu);
        ctx->pc = 0x229878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229874u;
        // 0x229878: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229874u, 0x22987Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22987Cu;
label_22987c:
    // 0x22987c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_229880:
    // 0x229880: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_229884:
    if (ctx->pc == 0x229884u) {
        ctx->pc = 0x229884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229880u;
        // 0x229884: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229888u;
        goto label_229888;
    }
    ctx->pc = 0x229880u;
    {
        const bool branch_taken_0x229880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229880u;
        // 0x229884: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229880) {
            ctx->pc = 0x2298A8u;
            goto label_2298a8;
        }
    }
    ctx->pc = 0x229888u;
label_229888:
    // 0x229888: 0x0  nop
    ctx->pc = 0x229888u;
    // NOP
label_22988c:
    // 0x22988c: 0x0  nop
    ctx->pc = 0x22988cu;
    // NOP
label_229890:
    // 0x229890: 0x0  nop
    ctx->pc = 0x229890u;
    // NOP
label_229894:
    // 0x229894: 0x0  nop
    ctx->pc = 0x229894u;
    // NOP
label_229898:
    // 0x229898: 0x0  nop
    ctx->pc = 0x229898u;
    // NOP
label_22989c:
    // 0x22989c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_2298a0:
    if (ctx->pc == 0x2298A0u) {
        ctx->pc = 0x2298A4u;
        goto label_2298a4;
    }
    ctx->pc = 0x22989Cu;
    {
        const bool branch_taken_0x22989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22989c) {
            ctx->pc = 0x229888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229888;
        }
    }
    ctx->pc = 0x2298A4u;
label_2298a4:
    // 0x2298a4: 0x0  nop
    ctx->pc = 0x2298a4u;
    // NOP
label_2298a8:
    // 0x2298a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2298a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2298ac:
    // 0x2298ac: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2298acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2298b0:
    // 0x2298b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2298b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2298b4:
    // 0x2298b4: 0xacf30000  sw          $s3, 0x0($a3)
    ctx->pc = 0x2298b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 19));
label_2298b8:
    // 0x2298b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2298bc:
    // 0x2298bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2298bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2298c0:
    // 0x2298c0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x2298c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_2298c4:
    // 0x2298c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2298c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2298c8:
    // 0x2298c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2298c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2298cc:
    // 0x2298cc: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2298ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_2298d0:
    // 0x2298d0: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2298d4:
    // 0x2298d4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2298d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2298d8:
    // 0x2298d8: 0xacf2000c  sw          $s2, 0xC($a3)
    ctx->pc = 0x2298d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 18));
label_2298dc:
    // 0x2298dc: 0x100f809  jalr        $t0
label_2298e0:
    if (ctx->pc == 0x2298E0u) {
        ctx->pc = 0x2298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298DCu;
        // 0x2298e0: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298E4u;
        goto label_2298e4;
    }
    ctx->pc = 0x2298DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x2298E4u);
        ctx->pc = 0x2298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298DCu;
        // 0x2298e0: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2298DCu, 0x2298E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2298E4u;
label_2298e4:
    // 0x2298e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2298e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2298e8:
    // 0x2298e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2298e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2298ec:
    // 0x2298ec: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2298f0:
    // 0x2298f0: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2298f4:
    // 0x2298f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2298f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2298f8:
    // 0x2298f8: 0x16c0ffb1  bnez        $s6, . + 4 + (-0x4F << 2)
label_2298fc:
    if (ctx->pc == 0x2298FCu) {
        ctx->pc = 0x2298FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F8u;
        // 0x2298fc: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229900u;
        goto label_229900;
    }
    ctx->pc = 0x2298F8u;
    {
        const bool branch_taken_0x2298f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2298FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F8u;
        // 0x2298fc: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298f8) {
            ctx->pc = 0x2297C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2297c0;
        }
    }
    ctx->pc = 0x229900u;
label_229900:
    // 0x229900: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x229900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_229904:
    // 0x229904: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_229908:
    // 0x229908: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_22990c:
    // 0x22990c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x22990cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_229910:
    // 0x229910: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x229910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_229914:
    // 0x229914: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x229914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_229918:
    // 0x229918: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x229918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22991c:
    // 0x22991c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_229920:
    // 0x229920: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_229924:
    // 0x229924: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
label_229928:
    if (ctx->pc == 0x229928u) {
        ctx->pc = 0x229928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229924u;
        // 0x229928: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22992Cu;
        goto label_22992c;
    }
    ctx->pc = 0x229924u;
    {
        const bool branch_taken_0x229924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229924u;
        // 0x229928: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229924) {
            ctx->pc = 0x229740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229740;
        }
    }
    ctx->pc = 0x22992Cu;
label_22992c:
    // 0x22992c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22992cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_229930:
    // 0x229930: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x229930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_229934:
    // 0x229934: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x229934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_229938:
    // 0x229938: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x229938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_22993c:
    // 0x22993c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22993cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_229940:
    // 0x229940: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x229940u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_229944:
    // 0x229944: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229944u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_229948:
    // 0x229948: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x229948u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_22994c:
    // 0x22994c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x22994cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_229950:
    // 0x229950: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x229950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_229954:
    // 0x229954: 0x3e00008  jr          $ra
label_229958:
    if (ctx->pc == 0x229958u) {
        ctx->pc = 0x229958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229954u;
        // 0x229958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22995Cu;
        goto label_fallthrough_0x229954;
    }
    ctx->pc = 0x229954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229954u;
        // 0x229958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229954:
    ctx->pc = 0x22995Cu;
}
