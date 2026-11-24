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

// Function: sub_001B3190
// Address: 0x1b3190 - 0x1b35dc
void sub_001B3190_0x1b3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3190_0x1b3190");
#endif

    switch (ctx->pc) {
        case 0x1b31d0u: goto label_1b31d0;
        case 0x1b3250u: goto label_1b3250;
        case 0x1b326cu: goto label_1b326c;
        case 0x1b3284u: goto label_1b3284;
        case 0x1b3294u: goto label_1b3294;
        case 0x1b32dcu: goto label_1b32dc;
        case 0x1b3378u: goto label_1b3378;
        case 0x1b3430u: goto label_1b3430;
        default: break;
    }

    ctx->pc = 0x1b3190u;

    // 0x1b3190: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b3194: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b3198: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1b319c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1b31a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1b31a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b31a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b31a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b31ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b31acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b31b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b31b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b31b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b31bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b31bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b31c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b31c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b31c4: 0xc4ac0024  lwc1        $f12, 0x24($a1)
    ctx->pc = 0x1b31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b31c8: 0xc070524  jal         func_1C1490
    ctx->pc = 0x1B31C8u;
    SET_GPR_U32(ctx, 31, 0x1B31D0u);
    ctx->pc = 0x1B31CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31C8u;
    // 0x1b31cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1490u, 0x1B31C8u, 0x1B31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31D0u;
label_1b31d0:
    // 0x1b31d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b31d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31d4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x1b31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1b31d8: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1b31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1b31dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b31dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b31e0: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x1b31e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b31e4: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x1b31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b31e8: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1b31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1b31ec: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1b31ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b31f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B31F0u;
    {
        const bool branch_taken_0x1b31f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31F0u;
        // 0x1b31f4: 0x858804  sllv        $s1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31f0) {
            ctx->pc = 0x1B3218u;
            goto label_1b3218;
        }
    }
    ctx->pc = 0x1B31F8u;
    // 0x1b31f8: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1b31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1b31fc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1b31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1b3200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b3200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3204: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x1b3204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x1b3208: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1b320c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1b320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1b3210: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b3210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3214: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x1b3214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_1b3218:
    // 0x1b3218: 0x8e470060  lw          $a3, 0x60($s2)
    ctx->pc = 0x1b3218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1b321c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b3220: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b3224: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x1b3224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1b3228: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b322c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1b322cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b3230: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1b3230u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1b3234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3238: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1b3238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1b323c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1b323cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1b3240: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1b3240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1b3244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b3244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b3248: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B3248u;
    SET_GPR_U32(ctx, 31, 0x1B3250u);
    ctx->pc = 0x1B324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3248u;
    // 0x1b324c: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B3248u, 0x1B3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3250u;
label_1b3250:
    // 0x1b3250: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b3250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b3254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3258: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1b3258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1b325c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3260: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1b3260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b3264: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B3264u;
    SET_GPR_U32(ctx, 31, 0x1B326Cu);
    ctx->pc = 0x1B3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3264u;
    // 0x1b3268: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B3264u, 0x1B326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B326Cu;
label_1b326c:
    // 0x1b326c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b3270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3274: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1b3274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1b3278: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1b3278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b327c: 0xc0707fc  jal         func_1C1FF0
    ctx->pc = 0x1B327Cu;
    SET_GPR_U32(ctx, 31, 0x1B3284u);
    ctx->pc = 0x1B3280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B327Cu;
    // 0x1b3280: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FF0u, 0x1B327Cu, 0x1B3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3284u;
label_1b3284:
    // 0x1b3284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b328c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B328Cu;
    SET_GPR_U32(ctx, 31, 0x1B3294u);
    ctx->pc = 0x1B3290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B328Cu;
    // 0x1b3290: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B328Cu, 0x1B3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3294u;
label_1b3294:
    // 0x1b3294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b329c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1b329cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b32a0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b32a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b32a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b32a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1b32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1b32ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b32acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b32b0: 0x0  nop
    ctx->pc = 0x1b32b0u;
    // NOP
    // 0x1b32b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b32b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b32b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b32bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b32bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b32c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b32c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b32c4: 0x0  nop
    ctx->pc = 0x1b32c4u;
    // NOP
    // 0x1b32c8: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1b32c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b32cc: 0x0  nop
    ctx->pc = 0x1b32ccu;
    // NOP
    // 0x1b32d0: 0x0  nop
    ctx->pc = 0x1b32d0u;
    // NOP
    // 0x1b32d4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B32D4u;
    SET_GPR_U32(ctx, 31, 0x1B32DCu);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B32D4u, 0x1B32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32DCu;
label_1b32dc:
    // 0x1b32dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b32e0: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x1b32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x1b32e4: 0x432804  sllv        $a1, $v1, $v0
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b32e8: 0x11b023  negu        $s6, $s1
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1b32ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1b32ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b32f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b32f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b32f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b32f8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1b32f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b32fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b32fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3300: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b3300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b3304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3308: 0x0  nop
    ctx->pc = 0x1b3308u;
    // NOP
    // 0x1b330c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b330cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b3310: 0x0  nop
    ctx->pc = 0x1b3310u;
    // NOP
    // 0x1b3314: 0x0  nop
    ctx->pc = 0x1b3314u;
    // NOP
    // 0x1b3318: 0x2ac100e1  slti        $at, $s6, 0xE1
    ctx->pc = 0x1b3318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1b331c: 0x102000a2  beqz        $at, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1B331Cu;
    {
        const bool branch_taken_0x1b331c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b331c) {
            ctx->pc = 0x1B35A8u;
            goto label_1b35a8;
        }
    }
    ctx->pc = 0x1B3324u;
    // 0x1b3324: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1b3324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b3328: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1b3328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b332c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b332cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b3330: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x1b3330u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b3334: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1b3334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b3338: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1b333c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1b333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b3340: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1b3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1b3344: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1b3344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b3348: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1b3348u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b334c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1b334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x1b3350: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1b3350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b3354: 0x24630900  addiu       $v1, $v1, 0x900
    ctx->pc = 0x1b3354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x1b3358: 0x36900  sll         $t5, $v1, 4
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b335c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1b335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b3360: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b3360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b3364: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1b3364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1b3368: 0x36100  sll         $t4, $v1, 4
    ctx->pc = 0x1b3368u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b336c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b336cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b3370: 0x2463f010  addiu       $v1, $v1, -0xFF0
    ctx->pc = 0x1b3370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1b3374: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1b3374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_1b3378:
    // 0x1b3378: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b337c: 0x8fb800e0  lw          $t8, 0xE0($sp)
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b3380: 0x2c3a021  addu        $s4, $s6, $v1
    ctx->pc = 0x1b3380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1b3384: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1b3384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b3388: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x1b3388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1b338c: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x1b338cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b3390: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1b3390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b3394: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1b3394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1b3398: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1b3398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b339c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b339cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b33a0: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1b33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1b33a4: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x1b33a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b33a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1b33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b33ac: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x1b33acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1b33b0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1b33b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b33b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b33b8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1b33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x1b33bc: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x1b33bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b33c0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1b33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b33c4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b33c8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1b33c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b33cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b33d0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1b33d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b33d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b33d8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1b33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1b33dc: 0x90930000  lbu         $s3, 0x0($a0)
    ctx->pc = 0x1b33dcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b33e0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1b33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b33e4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1b33e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b33e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b33ec: 0x90790000  lbu         $t9, 0x0($v1)
    ctx->pc = 0x1b33ecu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b33f0: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x1b33f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33f4: 0x28610201  slti        $at, $v1, 0x201
    ctx->pc = 0x1b33f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1b33f8: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B33F8u;
    {
        const bool branch_taken_0x1b33f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33F8u;
        // 0x1b33fc: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f8) {
            ctx->pc = 0x1B3568u;
            goto label_1b3568;
        }
    }
    ctx->pc = 0x1B3400u;
    // 0x1b3400: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1b3400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1b3404: 0x26840790  addiu       $a0, $s4, 0x790
    ctx->pc = 0x1b3404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x1b3408: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x1b3408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b340c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b340cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b3410: 0x35438  dsll        $t2, $v1, 16
    ctx->pc = 0x1b3410u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 16);
    // 0x1b3414: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1b3414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b3418: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1b3418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1b341c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b341cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b3420: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1b3420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b3424: 0x3f438  dsll        $fp, $v1, 16
    ctx->pc = 0x1b3424u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 16);
    // 0x1b3428: 0x24890009  addiu       $t1, $a0, 0x9
    ctx->pc = 0x1b3428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x1b342c: 0x0  nop
    ctx->pc = 0x1b342cu;
    // NOP
label_1b3430:
    // 0x1b3430: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1b3430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b3434: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1b3434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b3438: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x1b3438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x1b343c: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x1b343cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1b3440: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1b3440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b3444: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1b3444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b3448: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x1b3448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1b344c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1b344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b3450: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1b3450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1b3454: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x1b3454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1b3458: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1b3458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1b345c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1b345cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b3460: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b3460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b3464: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1b3464u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3468: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b346c: 0xb9b823  subu        $s7, $a1, $t9
    ctx->pc = 0x1b346cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x1b3470: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1b3470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b3474: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1b3474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b3478: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1b3478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b347c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b3480: 0x305c021  addu        $t8, $t8, $a1
    ctx->pc = 0x1b3480u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x1b3484: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1b3484u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b3488: 0x2b010201  slti        $at, $t8, 0x201
    ctx->pc = 0x1b3488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1b348c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1b348cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b3490: 0x3331823  subu        $v1, $t9, $s3
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 19)));
    // 0x1b3494: 0xf32823  subu        $a1, $a3, $s3
    ctx->pc = 0x1b3494u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1b3498: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1b3498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1b349c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b349cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34a0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1b34a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b34a4: 0x8a1825  or          $v1, $a0, $t2
    ctx->pc = 0x1b34a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x1b34a8: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x1b34a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x1b34ac: 0x1c31825  or          $v1, $t6, $v1
    ctx->pc = 0x1b34acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
    // 0x1b34b0: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x1b34b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    // 0x1b34b4: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x1b34b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x1b34b8: 0xd93823  subu        $a3, $a2, $t9
    ctx->pc = 0x1b34b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x1b34bc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1b34bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1b34c0: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x1b34c0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34c4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1b34c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b34c8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1b34c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1b34cc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1b34ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1b34d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b34d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b34d4: 0x0  nop
    ctx->pc = 0x1b34d4u;
    // NOP
    // 0x1b34d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b34d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b34dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b34dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b34e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b34e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b34e4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1b34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1b34e8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1b34e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b34ec: 0x70a42018  mult1       $a0, $a1, $a0
    ctx->pc = 0x1b34ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b34f0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1b34f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1b34f4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1b34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1b34f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b34f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b34fc: 0x0  nop
    ctx->pc = 0x1b34fcu;
    // NOP
    // 0x1b3500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3504: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3508: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b3508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b350c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1b350cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1b3510: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1b3510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1b3514: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1b3514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b3518: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b351c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1b351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1b3520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b3520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3524: 0x0  nop
    ctx->pc = 0x1b3524u;
    // NOP
    // 0x1b3528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b352c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b352cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b3530: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b3530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b3534: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1b3538: 0x70771818  mult1       $v1, $v1, $s7
    ctx->pc = 0x1b3538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b353c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b353cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b3540: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1b3540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1b3544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b3544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3548: 0x0  nop
    ctx->pc = 0x1b3548u;
    // NOP
    // 0x1b354c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b354cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3550: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3554: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1b3554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b3558: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1b3558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b355c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1b355cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1b3560: 0x1420ffb3  bnez        $at, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1B3560u;
    {
        const bool branch_taken_0x1b3560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3560u;
        // 0x1b3564: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3560) {
            ctx->pc = 0x1B3430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3430;
        }
    }
    ctx->pc = 0x1B3568u;
label_1b3568:
    // 0x1b3568: 0x26830790  addiu       $v1, $s4, 0x790
    ctx->pc = 0x1b3568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x1b356c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b356cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b3570: 0x2d1b021  addu        $s6, $s6, $s1
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1b3574: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b3574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b3578: 0x2ac100e1  slti        $at, $s6, 0xE1
    ctx->pc = 0x1b3578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1b357c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b3580: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b3580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b3584: 0x1a32025  or          $a0, $t5, $v1
    ctx->pc = 0x1b3584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x1b3588: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x1b3588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x1b358c: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x1b358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    // 0x1b3590: 0x1c31825  or          $v1, $t6, $v1
    ctx->pc = 0x1b3590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
    // 0x1b3594: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1b3594u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1b3598: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1b3598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1b359c: 0x1420ff76  bnez        $at, . + 4 + (-0x8A << 2)
    ctx->pc = 0x1B359Cu;
    {
        const bool branch_taken_0x1b359c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B359Cu;
        // 0x1b35a0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b359c) {
            ctx->pc = 0x1B3378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3378;
        }
    }
    ctx->pc = 0x1B35A4u;
    // 0x1b35a4: 0x0  nop
    ctx->pc = 0x1b35a4u;
    // NOP
label_1b35a8:
    // 0x1b35a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b35a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b35ac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b35acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b35b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b35b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b35b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b35b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b35b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b35b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b35bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b35bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b35c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b35c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b35c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b35c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b35c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b35c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b35cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b35ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b35d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b35d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b35d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B35D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35D4u;
        // 0x1b35d8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B35D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B35DCu;
}
