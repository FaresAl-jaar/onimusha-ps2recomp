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

// Function: sub_002698C0
// Address: 0x2698c0 - 0x269b0c
void sub_002698C0_0x2698c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002698C0_0x2698c0");
#endif

    switch (ctx->pc) {
        case 0x2698c0u: goto label_2698c0;
        case 0x2698c4u: goto label_2698c4;
        case 0x2698c8u: goto label_2698c8;
        case 0x2698ccu: goto label_2698cc;
        case 0x2698d0u: goto label_2698d0;
        case 0x2698d4u: goto label_2698d4;
        case 0x2698d8u: goto label_2698d8;
        case 0x2698dcu: goto label_2698dc;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698e4u: goto label_2698e4;
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        case 0x269930u: goto label_269930;
        case 0x269934u: goto label_269934;
        case 0x269938u: goto label_269938;
        case 0x26993cu: goto label_26993c;
        case 0x269940u: goto label_269940;
        case 0x269944u: goto label_269944;
        case 0x269948u: goto label_269948;
        case 0x26994cu: goto label_26994c;
        case 0x269950u: goto label_269950;
        case 0x269954u: goto label_269954;
        case 0x269958u: goto label_269958;
        case 0x26995cu: goto label_26995c;
        case 0x269960u: goto label_269960;
        case 0x269964u: goto label_269964;
        case 0x269968u: goto label_269968;
        case 0x26996cu: goto label_26996c;
        case 0x269970u: goto label_269970;
        case 0x269974u: goto label_269974;
        case 0x269978u: goto label_269978;
        case 0x26997cu: goto label_26997c;
        case 0x269980u: goto label_269980;
        case 0x269984u: goto label_269984;
        case 0x269988u: goto label_269988;
        case 0x26998cu: goto label_26998c;
        case 0x269990u: goto label_269990;
        case 0x269994u: goto label_269994;
        case 0x269998u: goto label_269998;
        case 0x26999cu: goto label_26999c;
        case 0x2699a0u: goto label_2699a0;
        case 0x2699a4u: goto label_2699a4;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699acu: goto label_2699ac;
        case 0x2699b0u: goto label_2699b0;
        case 0x2699b4u: goto label_2699b4;
        case 0x2699b8u: goto label_2699b8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c0u: goto label_2699c0;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ccu: goto label_2699cc;
        case 0x2699d0u: goto label_2699d0;
        case 0x2699d4u: goto label_2699d4;
        case 0x2699d8u: goto label_2699d8;
        case 0x2699dcu: goto label_2699dc;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699e4u: goto label_2699e4;
        case 0x2699e8u: goto label_2699e8;
        case 0x2699ecu: goto label_2699ec;
        case 0x2699f0u: goto label_2699f0;
        case 0x2699f4u: goto label_2699f4;
        case 0x2699f8u: goto label_2699f8;
        case 0x2699fcu: goto label_2699fc;
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        case 0x269a40u: goto label_269a40;
        case 0x269a44u: goto label_269a44;
        case 0x269a48u: goto label_269a48;
        case 0x269a4cu: goto label_269a4c;
        case 0x269a50u: goto label_269a50;
        case 0x269a54u: goto label_269a54;
        case 0x269a58u: goto label_269a58;
        case 0x269a5cu: goto label_269a5c;
        case 0x269a60u: goto label_269a60;
        case 0x269a64u: goto label_269a64;
        case 0x269a68u: goto label_269a68;
        case 0x269a6cu: goto label_269a6c;
        case 0x269a70u: goto label_269a70;
        case 0x269a74u: goto label_269a74;
        case 0x269a78u: goto label_269a78;
        case 0x269a7cu: goto label_269a7c;
        case 0x269a80u: goto label_269a80;
        case 0x269a84u: goto label_269a84;
        case 0x269a88u: goto label_269a88;
        case 0x269a8cu: goto label_269a8c;
        case 0x269a90u: goto label_269a90;
        case 0x269a94u: goto label_269a94;
        case 0x269a98u: goto label_269a98;
        case 0x269a9cu: goto label_269a9c;
        case 0x269aa0u: goto label_269aa0;
        case 0x269aa4u: goto label_269aa4;
        case 0x269aa8u: goto label_269aa8;
        case 0x269aacu: goto label_269aac;
        case 0x269ab0u: goto label_269ab0;
        case 0x269ab4u: goto label_269ab4;
        case 0x269ab8u: goto label_269ab8;
        case 0x269abcu: goto label_269abc;
        case 0x269ac0u: goto label_269ac0;
        case 0x269ac4u: goto label_269ac4;
        case 0x269ac8u: goto label_269ac8;
        case 0x269accu: goto label_269acc;
        case 0x269ad0u: goto label_269ad0;
        case 0x269ad4u: goto label_269ad4;
        case 0x269ad8u: goto label_269ad8;
        case 0x269adcu: goto label_269adc;
        case 0x269ae0u: goto label_269ae0;
        case 0x269ae4u: goto label_269ae4;
        case 0x269ae8u: goto label_269ae8;
        case 0x269aecu: goto label_269aec;
        case 0x269af0u: goto label_269af0;
        case 0x269af4u: goto label_269af4;
        case 0x269af8u: goto label_269af8;
        case 0x269afcu: goto label_269afc;
        case 0x269b00u: goto label_269b00;
        case 0x269b04u: goto label_269b04;
        case 0x269b08u: goto label_269b08;
        default: break;
    }

    ctx->pc = 0x2698c0u;

label_2698c0:
    // 0x2698c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2698c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2698c4:
    // 0x2698c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2698c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_2698c8:
    // 0x2698c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2698c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2698cc:
    // 0x2698cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2698ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2698d0:
    // 0x2698d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2698d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2698d4:
    // 0x2698d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2698d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2698d8:
    // 0x2698d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2698d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2698dc:
    // 0x2698dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2698dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2698e0:
    // 0x2698e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2698e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2698e4:
    // 0x2698e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2698e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2698e8:
    // 0x2698e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2698e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2698ec:
    // 0x2698ec: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x2698ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_2698f0:
    // 0x2698f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2698f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2698f4:
    // 0x2698f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2698f8:
    if (ctx->pc == 0x2698F8u) {
        ctx->pc = 0x2698F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698F4u;
        // 0x2698f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698FCu;
        goto label_2698fc;
    }
    ctx->pc = 0x2698F4u;
    {
        const bool branch_taken_0x2698f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698F4u;
        // 0x2698f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698f4) {
            ctx->pc = 0x269908u;
            goto label_269908;
        }
    }
    ctx->pc = 0x2698FCu;
label_2698fc:
    // 0x2698fc: 0x1000007c  b           . + 4 + (0x7C << 2)
label_269900:
    if (ctx->pc == 0x269900u) {
        ctx->pc = 0x269900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698FCu;
        // 0x269900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269904u;
        goto label_269904;
    }
    ctx->pc = 0x2698FCu;
    {
        const bool branch_taken_0x2698fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698FCu;
        // 0x269900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698fc) {
            ctx->pc = 0x269AF0u;
            goto label_269af0;
        }
    }
    ctx->pc = 0x269904u;
label_269904:
    // 0x269904: 0x0  nop
    ctx->pc = 0x269904u;
    // NOP
label_269908:
    // 0x269908: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x269908u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_26990c:
    // 0x26990c: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x26990cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_269910:
    // 0x269910: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x269910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_269914:
    // 0x269914: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x269914u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_269918:
    // 0x269918: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26991c:
    // 0x26991c: 0xc09a4e4  jal         func_269390
label_269920:
    if (ctx->pc == 0x269920u) {
        ctx->pc = 0x269920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26991Cu;
        // 0x269920: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269924u;
        goto label_269924;
    }
    ctx->pc = 0x26991Cu;
    SET_GPR_U32(ctx, 31, 0x269924u);
    ctx->pc = 0x269920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26991Cu;
    // 0x269920: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269390u, 0x26991Cu, 0x269924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269924u;
label_269924:
    // 0x269924: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x269924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_269928:
    // 0x269928: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_26992c:
    if (ctx->pc == 0x26992Cu) {
        ctx->pc = 0x26992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269928u;
        // 0x26992c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269930u;
        goto label_269930;
    }
    ctx->pc = 0x269928u;
    {
        const bool branch_taken_0x269928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269928u;
        // 0x26992c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269928) {
            ctx->pc = 0x269938u;
            goto label_269938;
        }
    }
    ctx->pc = 0x269930u;
label_269930:
    // 0x269930: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_269934:
    if (ctx->pc == 0x269934u) {
        ctx->pc = 0x269938u;
        goto label_269938;
    }
    ctx->pc = 0x269930u;
    {
        const bool branch_taken_0x269930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269930) {
            ctx->pc = 0x269998u;
            goto label_269998;
        }
    }
    ctx->pc = 0x269938u;
label_269938:
    // 0x269938: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x269938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26993c:
    // 0x26993c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x26993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269940:
    // 0x269940: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x269940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_269944:
    // 0x269944: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x269944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_269948:
    // 0x269948: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x269948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_26994c:
    // 0x26994c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26994cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_269950:
    // 0x269950: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x269950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_269954:
    // 0x269954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_269958:
    // 0x269958: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x269958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_26995c:
    // 0x26995c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26995cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_269960:
    // 0x269960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x269960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_269964:
    // 0x269964: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_269968:
    if (ctx->pc == 0x269968u) {
        ctx->pc = 0x26996Cu;
        goto label_26996c;
    }
    ctx->pc = 0x269964u;
    {
        const bool branch_taken_0x269964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269964) {
            ctx->pc = 0x26997Cu;
            goto label_26997c;
        }
    }
    ctx->pc = 0x26996Cu;
label_26996c:
    // 0x26996c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26996cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_269970:
    // 0x269970: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x269970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_269974:
    // 0x269974: 0x10000008  b           . + 4 + (0x8 << 2)
label_269978:
    if (ctx->pc == 0x269978u) {
        ctx->pc = 0x269978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269974u;
        // 0x269978: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26997Cu;
        goto label_26997c;
    }
    ctx->pc = 0x269974u;
    {
        const bool branch_taken_0x269974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269974u;
        // 0x269978: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269974) {
            ctx->pc = 0x269998u;
            goto label_269998;
        }
    }
    ctx->pc = 0x26997Cu;
label_26997c:
    // 0x26997c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26997cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_269980:
    // 0x269980: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x269980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_269984:
    // 0x269984: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_269988:
    // 0x269988: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x269988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26998c:
    // 0x26998c: 0x0  nop
    ctx->pc = 0x26998cu;
    // NOP
label_269990:
    // 0x269990: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x269990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_269994:
    // 0x269994: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_269998:
    // 0x269998: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x269998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_26999c:
    // 0x26999c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26999cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2699a0:
    // 0x2699a0: 0xc0b2ebc  jal         func_2CBAF0
label_2699a4:
    if (ctx->pc == 0x2699A4u) {
        ctx->pc = 0x2699A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699A0u;
        // 0x2699a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699A8u;
        goto label_2699a8;
    }
    ctx->pc = 0x2699A0u;
    SET_GPR_U32(ctx, 31, 0x2699A8u);
    ctx->pc = 0x2699A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699A0u;
    // 0x2699a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x2699A0u, 0x2699A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699A8u;
label_2699a8:
    // 0x2699a8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2699ac:
    if (ctx->pc == 0x2699ACu) {
        ctx->pc = 0x2699ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699A8u;
        // 0x2699ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699B0u;
        goto label_2699b0;
    }
    ctx->pc = 0x2699A8u;
    {
        const bool branch_taken_0x2699a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699A8u;
        // 0x2699ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699a8) {
            ctx->pc = 0x269A40u;
            goto label_269a40;
        }
    }
    ctx->pc = 0x2699B0u;
label_2699b0:
    // 0x2699b0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2699b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2699b4:
    // 0x2699b4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2699b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2699b8:
    // 0x2699b8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2699b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2699bc:
    // 0x2699bc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2699bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_2699c0:
    // 0x2699c0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2699c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2699c4:
    // 0x2699c4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2699c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2699c8:
    // 0x2699c8: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_2699cc:
    // 0x2699cc: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2699ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_2699d0:
    // 0x2699d0: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x2699d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_2699d4:
    // 0x2699d4: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x2699d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
label_2699d8:
    // 0x2699d8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x2699d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_2699dc:
    // 0x2699dc: 0xa20207d9  sb          $v0, 0x7D9($s0)
    ctx->pc = 0x2699dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 2));
label_2699e0:
    // 0x2699e0: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x2699e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_2699e4:
    // 0x2699e4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_2699e8:
    if (ctx->pc == 0x2699E8u) {
        ctx->pc = 0x2699E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E4u;
        // 0x2699e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699ECu;
        goto label_2699ec;
    }
    ctx->pc = 0x2699E4u;
    {
        const bool branch_taken_0x2699e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2699E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E4u;
        // 0x2699e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699e4) {
            ctx->pc = 0x269A00u;
            goto label_269a00;
        }
    }
    ctx->pc = 0x2699ECu;
label_2699ec:
    // 0x2699ec: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
label_2699f0:
    // 0x2699f0: 0xae0208d8  sw          $v0, 0x8D8($s0)
    ctx->pc = 0x2699f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 2));
label_2699f4:
    // 0x2699f4: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x2699f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_2699f8:
    // 0x2699f8: 0xae0208dc  sw          $v0, 0x8DC($s0)
    ctx->pc = 0x2699f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2268), GPR_U32(ctx, 2));
label_2699fc:
    // 0x2699fc: 0x0  nop
    ctx->pc = 0x2699fcu;
    // NOP
label_269a00:
    // 0x269a00: 0x8665001a  lh          $a1, 0x1A($s3)
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_269a04:
    // 0x269a04: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_269a08:
    if (ctx->pc == 0x269A08u) {
        ctx->pc = 0x269A0Cu;
        goto label_269a0c;
    }
    ctx->pc = 0x269A04u;
    {
        const bool branch_taken_0x269a04 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x269a04) {
            ctx->pc = 0x269A20u;
            goto label_269a20;
        }
    }
    ctx->pc = 0x269A0Cu;
label_269a0c:
    // 0x269a0c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x269a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_269a10:
    // 0x269a10: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x269a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_269a14:
    // 0x269a14: 0xc0e360c  jal         func_38D830
label_269a18:
    if (ctx->pc == 0x269A18u) {
        ctx->pc = 0x269A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A14u;
        // 0x269a18: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A1Cu;
        goto label_269a1c;
    }
    ctx->pc = 0x269A14u;
    SET_GPR_U32(ctx, 31, 0x269A1Cu);
    ctx->pc = 0x269A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A14u;
    // 0x269a18: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x269A14u, 0x269A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A1Cu;
label_269a1c:
    // 0x269a1c: 0x0  nop
    ctx->pc = 0x269a1cu;
    // NOP
label_269a20:
    // 0x269a20: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x269a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_269a24:
    // 0x269a24: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_269a28:
    // 0x269a28: 0x320f809  jalr        $t9
label_269a2c:
    if (ctx->pc == 0x269A2Cu) {
        ctx->pc = 0x269A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A28u;
        // 0x269a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A30u;
        goto label_269a30;
    }
    ctx->pc = 0x269A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x269A30u);
        ctx->pc = 0x269A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A28u;
        // 0x269a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A28u, 0x269A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269A30u;
label_269a30:
    // 0x269a30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x269a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_269a34:
    // 0x269a34: 0x10000004  b           . + 4 + (0x4 << 2)
label_269a38:
    if (ctx->pc == 0x269A38u) {
        ctx->pc = 0x269A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A34u;
        // 0x269a38: 0xa2050640  sb          $a1, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A3Cu;
        goto label_269a3c;
    }
    ctx->pc = 0x269A34u;
    {
        const bool branch_taken_0x269a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A34u;
        // 0x269a38: 0xa2050640  sb          $a1, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a34) {
            ctx->pc = 0x269A48u;
            goto label_269a48;
        }
    }
    ctx->pc = 0x269A3Cu;
label_269a3c:
    // 0x269a3c: 0x0  nop
    ctx->pc = 0x269a3cu;
    // NOP
label_269a40:
    // 0x269a40: 0x1000002b  b           . + 4 + (0x2B << 2)
label_269a44:
    if (ctx->pc == 0x269A44u) {
        ctx->pc = 0x269A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A40u;
        // 0x269a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A48u;
        goto label_269a48;
    }
    ctx->pc = 0x269A40u;
    {
        const bool branch_taken_0x269a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A40u;
        // 0x269a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a40) {
            ctx->pc = 0x269AF0u;
            goto label_269af0;
        }
    }
    ctx->pc = 0x269A48u;
label_269a48:
    // 0x269a48: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x269a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_269a4c:
    // 0x269a4c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_269a50:
    if (ctx->pc == 0x269A50u) {
        ctx->pc = 0x269A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A4Cu;
        // 0x269a50: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A54u;
        goto label_269a54;
    }
    ctx->pc = 0x269A4Cu;
    {
        const bool branch_taken_0x269a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A4Cu;
        // 0x269a50: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a4c) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A54u;
label_269a54:
    // 0x269a54: 0x90222cb4  lbu         $v0, 0x2CB4($at)
    ctx->pc = 0x269a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11444)));
label_269a58:
    // 0x269a58: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_269a5c:
    if (ctx->pc == 0x269A5Cu) {
        ctx->pc = 0x269A60u;
        goto label_269a60;
    }
    ctx->pc = 0x269A58u;
    {
        const bool branch_taken_0x269a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269a58) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A60u;
label_269a60:
    // 0x269a60: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_269a64:
    if (ctx->pc == 0x269A64u) {
        ctx->pc = 0x269A68u;
        goto label_269a68;
    }
    ctx->pc = 0x269A60u;
    {
        const bool branch_taken_0x269a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a60) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A68u;
label_269a68:
    // 0x269a68: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x269a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_269a6c:
    // 0x269a6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269a70:
    // 0x269a70: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_269a74:
    if (ctx->pc == 0x269A74u) {
        ctx->pc = 0x269A78u;
        goto label_269a78;
    }
    ctx->pc = 0x269A70u;
    {
        const bool branch_taken_0x269a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x269a70) {
            ctx->pc = 0x269AC0u;
            goto label_269ac0;
        }
    }
    ctx->pc = 0x269A78u;
label_269a78:
    // 0x269a78: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_269a7c:
    if (ctx->pc == 0x269A7Cu) {
        ctx->pc = 0x269A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A78u;
        // 0x269a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A80u;
        goto label_269a80;
    }
    ctx->pc = 0x269A78u;
    {
        const bool branch_taken_0x269a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x269A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A78u;
        // 0x269a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a78) {
            ctx->pc = 0x269AA0u;
            goto label_269aa0;
        }
    }
    ctx->pc = 0x269A80u;
label_269a80:
    // 0x269a80: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_269a84:
    if (ctx->pc == 0x269A84u) {
        ctx->pc = 0x269A88u;
        goto label_269a88;
    }
    ctx->pc = 0x269A80u;
    {
        const bool branch_taken_0x269a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x269a80) {
            ctx->pc = 0x269AA0u;
            goto label_269aa0;
        }
    }
    ctx->pc = 0x269A88u;
label_269a88:
    // 0x269a88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_269a8c:
    if (ctx->pc == 0x269A8Cu) {
        ctx->pc = 0x269A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A88u;
        // 0x269a8c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A90u;
        goto label_269a90;
    }
    ctx->pc = 0x269A88u;
    {
        const bool branch_taken_0x269a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A88u;
        // 0x269a8c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a88) {
            ctx->pc = 0x269AA0u;
            goto label_269aa0;
        }
    }
    ctx->pc = 0x269A90u;
label_269a90:
    // 0x269a90: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_269a94:
    if (ctx->pc == 0x269A94u) {
        ctx->pc = 0x269A98u;
        goto label_269a98;
    }
    ctx->pc = 0x269A90u;
    {
        const bool branch_taken_0x269a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x269a90) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A98u;
label_269a98:
    // 0x269a98: 0x1000000d  b           . + 4 + (0xD << 2)
label_269a9c:
    if (ctx->pc == 0x269A9Cu) {
        ctx->pc = 0x269AA0u;
        goto label_269aa0;
    }
    ctx->pc = 0x269A98u;
    {
        const bool branch_taken_0x269a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a98) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269AA0u;
label_269aa0:
    // 0x269aa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269aa4:
    // 0x269aa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x269aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_269aa8:
    // 0x269aa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269aac:
    // 0x269aac: 0xc0b6b28  jal         func_2DACA0
label_269ab0:
    if (ctx->pc == 0x269AB0u) {
        ctx->pc = 0x269AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AACu;
        // 0x269ab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AB4u;
        goto label_269ab4;
    }
    ctx->pc = 0x269AACu;
    SET_GPR_U32(ctx, 31, 0x269AB4u);
    ctx->pc = 0x269AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AACu;
    // 0x269ab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x269AACu, 0x269AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AB4u;
label_269ab4:
    // 0x269ab4: 0x10000006  b           . + 4 + (0x6 << 2)
label_269ab8:
    if (ctx->pc == 0x269AB8u) {
        ctx->pc = 0x269ABCu;
        goto label_269abc;
    }
    ctx->pc = 0x269AB4u;
    {
        const bool branch_taken_0x269ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ab4) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269ABCu;
label_269abc:
    // 0x269abc: 0x0  nop
    ctx->pc = 0x269abcu;
    // NOP
label_269ac0:
    // 0x269ac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269ac4:
    // 0x269ac4: 0xc0b6b28  jal         func_2DACA0
label_269ac8:
    if (ctx->pc == 0x269AC8u) {
        ctx->pc = 0x269AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AC4u;
        // 0x269ac8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269ACCu;
        goto label_269acc;
    }
    ctx->pc = 0x269AC4u;
    SET_GPR_U32(ctx, 31, 0x269ACCu);
    ctx->pc = 0x269AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AC4u;
    // 0x269ac8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x269AC4u, 0x269ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269ACCu;
label_269acc:
    // 0x269acc: 0x0  nop
    ctx->pc = 0x269accu;
    // NOP
label_269ad0:
    // 0x269ad0: 0x92680016  lbu         $t0, 0x16($s3)
    ctx->pc = 0x269ad0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_269ad4:
    // 0x269ad4: 0x92660007  lbu         $a2, 0x7($s3)
    ctx->pc = 0x269ad4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_269ad8:
    // 0x269ad8: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x269ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_269adc:
    // 0x269adc: 0x92670017  lbu         $a3, 0x17($s3)
    ctx->pc = 0x269adcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
label_269ae0:
    // 0x269ae0: 0xc0b273c  jal         func_2C9CF0
label_269ae4:
    if (ctx->pc == 0x269AE4u) {
        ctx->pc = 0x269AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AE0u;
        // 0x269ae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AE8u;
        goto label_269ae8;
    }
    ctx->pc = 0x269AE0u;
    SET_GPR_U32(ctx, 31, 0x269AE8u);
    ctx->pc = 0x269AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AE0u;
    // 0x269ae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x269AE0u, 0x269AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AE8u;
label_269ae8:
    // 0x269ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x269ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269aec:
    // 0x269aec: 0x0  nop
    ctx->pc = 0x269aecu;
    // NOP
label_269af0:
    // 0x269af0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x269af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_269af4:
    // 0x269af4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x269af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269af8:
    // 0x269af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x269af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_269afc:
    // 0x269afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_269b00:
    // 0x269b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_269b04:
    // 0x269b04: 0x3e00008  jr          $ra
label_269b08:
    if (ctx->pc == 0x269B08u) {
        ctx->pc = 0x269B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B04u;
        // 0x269b08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269B0Cu;
        goto label_fallthrough_0x269b04;
    }
    ctx->pc = 0x269B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B04u;
        // 0x269b08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269b04:
    ctx->pc = 0x269B0Cu;
}
