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

// Function: sub_00263190
// Address: 0x263190 - 0x263698
void sub_00263190_0x263190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263190_0x263190");
#endif

    switch (ctx->pc) {
        case 0x2631e4u: goto label_2631e4;
        case 0x263298u: goto label_263298;
        case 0x2632b8u: goto label_2632b8;
        case 0x2632d8u: goto label_2632d8;
        case 0x263304u: goto label_263304;
        case 0x263330u: goto label_263330;
        case 0x26334cu: goto label_26334c;
        case 0x263378u: goto label_263378;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633f8u: goto label_2633f8;
        case 0x2635a8u: goto label_2635a8;
        case 0x263664u: goto label_263664;
        default: break;
    }

    ctx->pc = 0x263190u;

    // 0x263190: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x263190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x263194: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x263194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x263198: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x263198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26319c: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x26319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x2631a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2631a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2631a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2631a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2631a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2631a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2631ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2631acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2631b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2631b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2631b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2631b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2631b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2631bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2631bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2631c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2631c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2631c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2631c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2631c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2631cc: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2631ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2631d0: 0x9063005f  lbu         $v1, 0x5F($v1)
    ctx->pc = 0x2631d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
    // 0x2631d4: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x2631d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x2631d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2631d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2631dc: 0xc0a6018  jal         func_298060
    ctx->pc = 0x2631DCu;
    SET_GPR_U32(ctx, 31, 0x2631E4u);
    ctx->pc = 0x2631E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2631DCu;
    // 0x2631e0: 0x245e0110  addiu       $fp, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298060u, 0x2631DCu, 0x2631E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631E4u;
label_2631e4:
    // 0x2631e4: 0x8e8629c0  lw          $a2, 0x29C0($s4)
    ctx->pc = 0x2631e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2631e8: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x2631e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x2631ec: 0x96a229d8  lhu         $v0, 0x29D8($s5)
    ctx->pc = 0x2631ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10712)));
    // 0x2631f0: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2631f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x2631f4: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x2631f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x2631f8: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2631f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2631fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2631FCu;
    {
        const bool branch_taken_0x2631fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x263200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631FCu;
        // 0x263200: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631fc) {
            ctx->pc = 0x263210u;
            goto label_263210;
        }
    }
    ctx->pc = 0x263204u;
    // 0x263204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263208u;
    {
        const bool branch_taken_0x263208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263208u;
        // 0x26320c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263208) {
            ctx->pc = 0x26322Cu;
            goto label_26322c;
        }
    }
    ctx->pc = 0x263210u;
label_263210:
    // 0x263210: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x263210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x263214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26321c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26321cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263220: 0x0  nop
    ctx->pc = 0x263220u;
    // NOP
    // 0x263224: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x263224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x263228: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x263228u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26322c:
    // 0x26322c: 0xc48101c4  lwc1        $f1, 0x1C4($a0)
    ctx->pc = 0x26322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263230: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x263230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x263234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263238: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x263238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x26323c: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x26323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x263240: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x263240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x263244: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x263244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x263248: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x263248u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26324c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x26324cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x263250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x263250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263254: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x263258: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x263258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x26325c: 0x0  nop
    ctx->pc = 0x26325cu;
    // NOP
    // 0x263260: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x263260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x263264: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x263268: 0x0  nop
    ctx->pc = 0x263268u;
    // NOP
    // 0x26326c: 0x1010  mfhi        $v0
    ctx->pc = 0x26326cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x263270: 0x45b821  addu        $s7, $v0, $a1
    ctx->pc = 0x263270u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x263274: 0x2771023  subu        $v0, $s3, $s7
    ctx->pc = 0x263274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x263278: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x263278u;
    {
        const bool branch_taken_0x263278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263278u;
        // 0x26327c: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263278) {
            ctx->pc = 0x2632A8u;
            goto label_2632a8;
        }
    }
    ctx->pc = 0x263280u;
    // 0x263280: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x263280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x263284: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x263284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x263288: 0x3476ffff  ori         $s6, $v1, 0xFFFF
    ctx->pc = 0x263288u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26328c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26328cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263290: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x263290u;
    SET_GPR_U32(ctx, 31, 0x263298u);
    ctx->pc = 0x263294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263290u;
    // 0x263294: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x263290u, 0x263298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263298u;
label_263298:
    // 0x263298: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x263298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x26329c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26329Cu;
    {
        const bool branch_taken_0x26329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26329Cu;
        // 0x2632a0: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26329c) {
            ctx->pc = 0x263338u;
            goto label_263338;
        }
    }
    ctx->pc = 0x2632A4u;
    // 0x2632a4: 0x0  nop
    ctx->pc = 0x2632a4u;
    // NOP
label_2632a8:
    // 0x2632a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2632a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2632ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2632acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2632b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632b4: 0x3456ffff  ori         $s6, $v0, 0xFFFF
    ctx->pc = 0x2632b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2632b8:
    // 0x2632b8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x2632b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2632bc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2632bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2632c0: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2632c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2632c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2632c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2632c8: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x2632c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2632cc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2632ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2632d0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2632D0u;
    SET_GPR_U32(ctx, 31, 0x2632D8u);
    ctx->pc = 0x2632D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2632D0u;
    // 0x2632d4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2632D0u, 0x2632D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2632D8u;
label_2632d8:
    // 0x2632d8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2632d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2632dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2632dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2632e0: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2632e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2632e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2632E4u;
    {
        const bool branch_taken_0x2632e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2632E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632E4u;
        // 0x2632e8: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632e4) {
            ctx->pc = 0x2632B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2632b8;
        }
    }
    ctx->pc = 0x2632ECu;
    // 0x2632ec: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x2632ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2632f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2632f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2632f4: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2632f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2632f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2632fc: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2632FCu;
    SET_GPR_U32(ctx, 31, 0x263304u);
    ctx->pc = 0x263300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2632FCu;
    // 0x263300: 0x572021  addu        $a0, $v0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2632FCu, 0x263304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263304u;
label_263304:
    // 0x263304: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x263304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x263308: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x263308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x26330c: 0x8e902ab0  lw          $s0, 0x2AB0($s4)
    ctx->pc = 0x26330cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x263310: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263310u;
    {
        const bool branch_taken_0x263310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x263310) {
            ctx->pc = 0x263338u;
            goto label_263338;
        }
    }
    ctx->pc = 0x263318u;
    // 0x263318: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x263318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x26331c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x263320: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x263320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x263324: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x263324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x263328: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x263328u;
    SET_GPR_U32(ctx, 31, 0x263330u);
    ctx->pc = 0x26332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263328u;
    // 0x26332c: 0x572021  addu        $a0, $v0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x263328u, 0x263330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263330u;
label_263330:
    // 0x263330: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x263330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x263334: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x263334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_263338:
    // 0x263338: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x263338u;
    {
        const bool branch_taken_0x263338 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263338u;
        // 0x26333c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263338) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x263340u;
    // 0x263340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x263340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263344: 0xc0bae88  jal         func_2EBA20
    ctx->pc = 0x263344u;
    SET_GPR_U32(ctx, 31, 0x26334Cu);
    ctx->pc = 0x263348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263344u;
    // 0x263348: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA20u, 0x263344u, 0x26334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26334Cu;
label_26334c:
    // 0x26334c: 0x0  nop
    ctx->pc = 0x26334cu;
    // NOP
label_263350:
    // 0x263350: 0x9284065c  lbu         $a0, 0x65C($s4)
    ctx->pc = 0x263350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1628)));
    // 0x263354: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x263354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263358: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x263358u;
    {
        const bool branch_taken_0x263358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x263358) {
            ctx->pc = 0x263378u;
            goto label_263378;
        }
    }
    ctx->pc = 0x263360u;
    // 0x263360: 0x928708e8  lbu         $a3, 0x8E8($s4)
    ctx->pc = 0x263360u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x263364: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x263364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x263368: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x263368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x26336c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x26336cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x263370: 0xc0ce188  jal         func_338620
    ctx->pc = 0x263370u;
    SET_GPR_U32(ctx, 31, 0x263378u);
    ctx->pc = 0x263374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263370u;
    // 0x263374: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x263370u, 0x263378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263378u;
label_263378:
    // 0x263378: 0x8e902ab0  lw          $s0, 0x2AB0($s4)
    ctx->pc = 0x263378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x26337c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26337Cu;
    {
        const bool branch_taken_0x26337c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26337c) {
            ctx->pc = 0x2633D0u;
            goto label_2633d0;
        }
    }
    ctx->pc = 0x263384u;
    // 0x263384: 0x928229d0  lbu         $v0, 0x29D0($s4)
    ctx->pc = 0x263384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10704)));
    // 0x263388: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263388u;
    {
        const bool branch_taken_0x263388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263388) {
            ctx->pc = 0x2633B0u;
            goto label_2633b0;
        }
    }
    ctx->pc = 0x263390u;
    // 0x263390: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x263390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x263394: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x263394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263398: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x263398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26339c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x26339Cu;
    SET_GPR_U32(ctx, 31, 0x2633A4u);
    ctx->pc = 0x2633A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26339Cu;
    // 0x2633a0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x26339Cu, 0x2633A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633A4u;
label_2633a4:
    // 0x2633a4: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2633a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2633a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2633A8u;
    {
        const bool branch_taken_0x2633a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633A8u;
        // 0x2633ac: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633a8) {
            ctx->pc = 0x2633D0u;
            goto label_2633d0;
        }
    }
    ctx->pc = 0x2633B0u;
label_2633b0:
    // 0x2633b0: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2633b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2633b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2633b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633b8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2633b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2633bc: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2633BCu;
    SET_GPR_U32(ctx, 31, 0x2633C4u);
    ctx->pc = 0x2633C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633BCu;
    // 0x2633c0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2633BCu, 0x2633C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633C4u;
label_2633c4:
    // 0x2633c4: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x2633c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2633c8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2633c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2633cc: 0x0  nop
    ctx->pc = 0x2633ccu;
    // NOP
label_2633d0:
    // 0x2633d0: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x2633d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2633d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2633d8: 0x148300a3  bne         $a0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2633D8u;
    {
        const bool branch_taken_0x2633d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2633d8) {
            ctx->pc = 0x263668u;
            goto label_263668;
        }
    }
    ctx->pc = 0x2633E0u;
    // 0x2633e0: 0x92a32b08  lbu         $v1, 0x2B08($s5)
    ctx->pc = 0x2633e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 11016)));
    // 0x2633e4: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2633E4u;
    {
        const bool branch_taken_0x2633e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2633e4) {
            ctx->pc = 0x263668u;
            goto label_263668;
        }
    }
    ctx->pc = 0x2633ECu;
    // 0x2633ec: 0x96b029da  lhu         $s0, 0x29DA($s5)
    ctx->pc = 0x2633ecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10714)));
    // 0x2633f0: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x2633F0u;
    SET_GPR_U32(ctx, 31, 0x2633F8u);
    ctx->pc = 0x2633F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633F0u;
    // 0x2633f4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2633F0u, 0x2633F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633F8u;
label_2633f8:
    // 0x2633f8: 0x24430006  addiu       $v1, $v0, 0x6
    ctx->pc = 0x2633f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2633fc: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2633fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263400: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x263400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x263404: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x263404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x263408: 0x96a30286  lhu         $v1, 0x286($s5)
    ctx->pc = 0x263408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 646)));
    // 0x26340c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x26340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x263410: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x263410u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x263414: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x263414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x263418: 0x0  nop
    ctx->pc = 0x263418u;
    // NOP
    // 0x26341c: 0x0  nop
    ctx->pc = 0x26341cu;
    // NOP
    // 0x263420: 0x2010  mfhi        $a0
    ctx->pc = 0x263420u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x263424: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x263424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x263428: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x263428u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x26342c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x263430: 0x4843c  dsll32      $s0, $a0, 16
    ctx->pc = 0x263430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 16));
    // 0x263434: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x263434u;
    {
        const bool branch_taken_0x263434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263434u;
        // 0x263438: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263434) {
            ctx->pc = 0x263488u;
            goto label_263488;
        }
    }
    ctx->pc = 0x26343Cu;
    // 0x26343c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x26343cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x263440: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x263440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x263444: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x263444u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x263448: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x263448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x26344c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x26344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x263450: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x263450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263454: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263458: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26345c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x26345cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263460: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x263460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x263464: 0x0  nop
    ctx->pc = 0x263464u;
    // NOP
    // 0x263468: 0x0  nop
    ctx->pc = 0x263468u;
    // NOP
    // 0x26346c: 0x1010  mfhi        $v0
    ctx->pc = 0x26346cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x263470: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x263470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x263474: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x263474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x263478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26347c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x26347cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x263480: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x263480u;
    {
        const bool branch_taken_0x263480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263480u;
        // 0x263484: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263480) {
            ctx->pc = 0x263578u;
            goto label_263578;
        }
    }
    ctx->pc = 0x263488u;
label_263488:
    // 0x263488: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x263488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x26348c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26348Cu;
    {
        const bool branch_taken_0x26348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26348Cu;
        // 0x263490: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26348c) {
            ctx->pc = 0x2634D8u;
            goto label_2634d8;
        }
    }
    ctx->pc = 0x263494u;
    // 0x263494: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x263494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x263498: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x263498u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x26349c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x26349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2634a0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2634a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2634a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2634a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2634a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2634ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2634acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2634b0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2634b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2634b4: 0x0  nop
    ctx->pc = 0x2634b4u;
    // NOP
    // 0x2634b8: 0x0  nop
    ctx->pc = 0x2634b8u;
    // NOP
    // 0x2634bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2634bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2634c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2634c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2634c4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2634c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2634c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2634c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2634cc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2634ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2634d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2634D0u;
    {
        const bool branch_taken_0x2634d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634D0u;
        // 0x2634d4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634d0) {
            ctx->pc = 0x263578u;
            goto label_263578;
        }
    }
    ctx->pc = 0x2634D8u;
label_2634d8:
    // 0x2634d8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2634d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2634dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2634DCu;
    {
        const bool branch_taken_0x2634dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634DCu;
        // 0x2634e0: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634dc) {
            ctx->pc = 0x263528u;
            goto label_263528;
        }
    }
    ctx->pc = 0x2634E4u;
    // 0x2634e4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2634e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2634e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2634ec: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2634ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2634f0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2634f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2634f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2634f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2634f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2634fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2634fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263500: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x263500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x263504: 0x0  nop
    ctx->pc = 0x263504u;
    // NOP
    // 0x263508: 0x0  nop
    ctx->pc = 0x263508u;
    // NOP
    // 0x26350c: 0x1010  mfhi        $v0
    ctx->pc = 0x26350cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x263510: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x263510u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x263514: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x263514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x263518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26351c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x26351cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x263520: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x263520u;
    {
        const bool branch_taken_0x263520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263520u;
        // 0x263524: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263520) {
            ctx->pc = 0x263578u;
            goto label_263578;
        }
    }
    ctx->pc = 0x263528u;
label_263528:
    // 0x263528: 0x96a20288  lhu         $v0, 0x288($s5)
    ctx->pc = 0x263528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 648)));
    // 0x26352c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x26352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x263530: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x263530u;
    {
        const bool branch_taken_0x263530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263530u;
        // 0x263534: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263530) {
            ctx->pc = 0x263578u;
            goto label_263578;
        }
    }
    ctx->pc = 0x263538u;
    // 0x263538: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x263538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x26353c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x26353cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x263540: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x263540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x263544: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x263544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x263548: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x263548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26354c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x263550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263554: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x263554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x263558: 0x0  nop
    ctx->pc = 0x263558u;
    // NOP
    // 0x26355c: 0x0  nop
    ctx->pc = 0x26355cu;
    // NOP
    // 0x263560: 0x1010  mfhi        $v0
    ctx->pc = 0x263560u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x263564: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x263564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x263568: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x263568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x26356c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263570: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x263570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x263574: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x263574u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_263578:
    // 0x263578: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x263578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x26357c: 0x24420cb0  addiu       $v0, $v0, 0xCB0
    ctx->pc = 0x26357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x263580: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x263580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x263584: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x263584u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x4E0CB0u));
    // 0x263588: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x263588u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E0CB8u));
    // 0x26358c: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x26358cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x4E0CBAu));
    // 0x263590: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x263590u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x263594: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x263594u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x263598: 0xa0c2000a  sb          $v0, 0xA($a2)
    ctx->pc = 0x263598u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x26359c: 0x928507b3  lbu         $a1, 0x7B3($s4)
    ctx->pc = 0x26359cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1971)));
    // 0x2635a0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2635A0u;
    SET_GPR_U32(ctx, 31, 0x2635A8u);
    ctx->pc = 0x2635A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2635A0u;
    // 0x2635a4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2635A0u, 0x2635A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2635A8u;
label_2635a8:
    // 0x2635a8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2635a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2635ac: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x2635acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2635b0: 0x906500b0  lbu         $a1, 0xB0($v1)
    ctx->pc = 0x2635b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2635b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2635b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2635b8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2635b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2635bc: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x2635bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2635c0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2635c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2635c4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2635c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2635c8: 0x0  nop
    ctx->pc = 0x2635c8u;
    // NOP
    // 0x2635cc: 0x0  nop
    ctx->pc = 0x2635ccu;
    // NOP
    // 0x2635d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2635d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2635d4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2635d8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2635d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2635dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2635dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2635e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2635e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2635e4: 0x13c0001a  beqz        $fp, . + 4 + (0x1A << 2)
    ctx->pc = 0x2635E4u;
    {
        const bool branch_taken_0x2635e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635E4u;
        // 0x2635e8: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635e4) {
            ctx->pc = 0x263650u;
            goto label_263650;
        }
    }
    ctx->pc = 0x2635ECu;
    // 0x2635ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2635ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2635f0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2635f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2635f4: 0xc7c000b8  lwc1        $f0, 0xB8($fp)
    ctx->pc = 0x2635f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2635f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2635f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2635fc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2635fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x263600: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x263600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263604: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x263604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26360c: 0x0  nop
    ctx->pc = 0x26360cu;
    // NOP
    // 0x263610: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x263610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x263614: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x263614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263618: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x263618u;
    {
        const bool branch_taken_0x263618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263618) {
            ctx->pc = 0x263630u;
            goto label_263630;
        }
    }
    ctx->pc = 0x263620u;
    // 0x263620: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x263624: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x263624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x263628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263628u;
    {
        const bool branch_taken_0x263628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263628u;
        // 0x26362c: 0x41c3c  dsll32      $v1, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263628) {
            ctx->pc = 0x26364Cu;
            goto label_26364c;
        }
    }
    ctx->pc = 0x263630u;
label_263630:
    // 0x263630: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263634: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x263634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x263638: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x263638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26363c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x26363cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x263640: 0x0  nop
    ctx->pc = 0x263640u;
    // NOP
    // 0x263644: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x263644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x263648: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x263648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_26364c:
    // 0x26364c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26364cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_263650:
    // 0x263650: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263650u;
    {
        const bool branch_taken_0x263650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263650u;
        // 0x263654: 0x32c3c  dsll32      $a1, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263650) {
            ctx->pc = 0x263668u;
            goto label_263668;
        }
    }
    ctx->pc = 0x263658u;
    // 0x263658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26365c: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x26365Cu;
    SET_GPR_U32(ctx, 31, 0x263664u);
    ctx->pc = 0x263660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26365Cu;
    // 0x263660: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x26365Cu, 0x263664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263664u;
label_263664:
    // 0x263664: 0x0  nop
    ctx->pc = 0x263664u;
    // NOP
label_263668:
    // 0x263668: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x263668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26366c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26366cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x263670: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x263670u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x263674: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x263674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263678: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x263678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26367c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26367cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263680: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x263680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26368c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26368cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263690: 0x3e00008  jr          $ra
    ctx->pc = 0x263690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263690u;
        // 0x263694: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263698u;
}
