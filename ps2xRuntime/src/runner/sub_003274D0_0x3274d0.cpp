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

// Function: sub_003274D0
// Address: 0x3274d0 - 0x327760
void sub_003274D0_0x3274d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003274D0_0x3274d0");
#endif

    switch (ctx->pc) {
        case 0x32766cu: goto label_32766c;
        case 0x327678u: goto label_327678;
        case 0x327740u: goto label_327740;
        case 0x327750u: goto label_327750;
        default: break;
    }

    ctx->pc = 0x3274d0u;

    // 0x3274d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3274d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3274d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3274d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3274d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3274dc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3274dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3274e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3274e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3274e4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3274e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3274e8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3274e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3274ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3274ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3274f0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3274f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3274f4: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3274f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3274f8: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x3274f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x3274fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3274FCu;
    {
        const bool branch_taken_0x3274fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x327500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274FCu;
        // 0x327500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274fc) {
            ctx->pc = 0x327510u;
            goto label_327510;
        }
    }
    ctx->pc = 0x327504u;
    // 0x327504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327508: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327508u;
    {
        const bool branch_taken_0x327508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327508u;
        // 0x32750c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327508) {
            ctx->pc = 0x32752Cu;
            goto label_32752c;
        }
    }
    ctx->pc = 0x327510u;
label_327510:
    // 0x327510: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x327510u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x327514: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327518: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32751c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32751cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327520: 0x0  nop
    ctx->pc = 0x327520u;
    // NOP
    // 0x327524: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x327524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x327528: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x327528u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32752c:
    // 0x32752c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x32752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x327530: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x327530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x327534: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x327534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x327538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x327538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32753c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32753cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x327540: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327544: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x327544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x327548: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x327548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x32754c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x327550: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x327550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x327554: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x327554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x327558: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x327558u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32755c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327560: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x327560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x327564: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x327568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32756c: 0x0  nop
    ctx->pc = 0x32756cu;
    // NOP
    // 0x327570: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x327570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x327574: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x327574u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x327578: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327578u;
    {
        const bool branch_taken_0x327578 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327578u;
        // 0x32757c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327578) {
            ctx->pc = 0x32758Cu;
            goto label_32758c;
        }
    }
    ctx->pc = 0x327580u;
    // 0x327580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327584u;
    {
        const bool branch_taken_0x327584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327584u;
        // 0x327588: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327584) {
            ctx->pc = 0x3275A8u;
            goto label_3275a8;
        }
    }
    ctx->pc = 0x32758Cu;
label_32758c:
    // 0x32758c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32758cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x327590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32759c: 0x0  nop
    ctx->pc = 0x32759cu;
    // NOP
    // 0x3275a0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3275a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3275a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3275a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3275a8:
    // 0x3275a8: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3275a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3275ac: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3275acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3275b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3275b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3275b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3275b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3275b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3275bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3275bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3275c0: 0x0  nop
    ctx->pc = 0x3275c0u;
    // NOP
    // 0x3275c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3275c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3275c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3275c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3275cc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3275ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3275d0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x3275d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3275d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3275d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3275d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3275d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3275dc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3275dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3275e0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3275e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3275e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3275e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3275e8: 0x0  nop
    ctx->pc = 0x3275e8u;
    // NOP
    // 0x3275ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3275ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3275f0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3275f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3275f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3275F4u;
    {
        const bool branch_taken_0x3275f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3275F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275F4u;
        // 0x3275f8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275f4) {
            ctx->pc = 0x327608u;
            goto label_327608;
        }
    }
    ctx->pc = 0x3275FCu;
    // 0x3275fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3275fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327600u;
    {
        const bool branch_taken_0x327600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327600u;
        // 0x327604: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327600) {
            ctx->pc = 0x327624u;
            goto label_327624;
        }
    }
    ctx->pc = 0x327608u;
label_327608:
    // 0x327608: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x327608u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x32760c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327618: 0x0  nop
    ctx->pc = 0x327618u;
    // NOP
    // 0x32761c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32761cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x327620: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x327620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_327624:
    // 0x327624: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x327624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x327628: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32762c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x32762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x327630: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327638: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x327638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x32763c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32763cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327640: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x327640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x327644: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x327644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x327648: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x327648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32764c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x327650: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x327650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327654: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x327654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x327658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32765c: 0x0  nop
    ctx->pc = 0x32765cu;
    // NOP
    // 0x327660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x327660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x327664: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x327664u;
    SET_GPR_U32(ctx, 31, 0x32766Cu);
    ctx->pc = 0x327668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327664u;
    // 0x327668: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x327664u, 0x32766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32766Cu;
label_32766c:
    // 0x32766c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327670: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x327670u;
    SET_GPR_U32(ctx, 31, 0x327678u);
    ctx->pc = 0x327674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327670u;
    // 0x327674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x327670u, 0x327678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327678u;
label_327678:
    // 0x327678: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x327678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x32767c: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x32767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x327680: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x327680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x327684: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x327684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x327688: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x32768c: 0x2463cc54  addiu       $v1, $v1, -0x33AC
    ctx->pc = 0x32768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954068));
    // 0x327690: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x327694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327698: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x327698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32769c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3276a0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3276a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3276a4: 0x92050574  lbu         $a1, 0x574($s0)
    ctx->pc = 0x3276a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x3276a8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3276a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3276ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3276b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3276b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3276b4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3276b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3276b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3276b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3276bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3276bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3276c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3276c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3276c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3276C4u;
    {
        const bool branch_taken_0x3276c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3276C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276C4u;
        // 0x3276c8: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276c4) {
            ctx->pc = 0x3276D8u;
            goto label_3276d8;
        }
    }
    ctx->pc = 0x3276CCu;
    // 0x3276cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3276ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3276d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3276D0u;
    {
        const bool branch_taken_0x3276d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276D0u;
        // 0x3276d4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276d0) {
            ctx->pc = 0x3276F4u;
            goto label_3276f4;
        }
    }
    ctx->pc = 0x3276D8u;
label_3276d8:
    // 0x3276d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3276d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3276dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3276dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3276e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3276e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3276e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3276e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3276e8: 0x0  nop
    ctx->pc = 0x3276e8u;
    // NOP
    // 0x3276ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3276ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3276f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3276f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3276f4:
    // 0x3276f4: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3276f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3276f8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3276f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3276fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3276fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x327700: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x327700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x327704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327708: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32770c: 0x0  nop
    ctx->pc = 0x32770cu;
    // NOP
    // 0x327710: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x327710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x327714: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x327714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x327718: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32771c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327720: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x327720u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x327724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x327724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32772c: 0x0  nop
    ctx->pc = 0x32772cu;
    // NOP
    // 0x327730: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x327730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x327734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327738: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x327738u;
    SET_GPR_U32(ctx, 31, 0x327740u);
    ctx->pc = 0x32773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327738u;
    // 0x32773c: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x327738u, 0x327740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327740u;
label_327740:
    // 0x327740: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x327740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x327744: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x327744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327748: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x327748u;
    SET_GPR_U32(ctx, 31, 0x327750u);
    ctx->pc = 0x32774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327748u;
    // 0x32774c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x327748u, 0x327750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327750u;
label_327750:
    // 0x327750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327758: 0x3e00008  jr          $ra
    ctx->pc = 0x327758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327758u;
        // 0x32775c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327760u;
}
