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

// Function: sub_003C7160
// Address: 0x3c7160 - 0x3c7448
void sub_003C7160_0x3c7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7160_0x3c7160");
#endif

    switch (ctx->pc) {
        case 0x3c71a4u: goto label_3c71a4;
        case 0x3c71acu: goto label_3c71ac;
        case 0x3c71f0u: goto label_3c71f0;
        case 0x3c7220u: goto label_3c7220;
        case 0x3c7238u: goto label_3c7238;
        case 0x3c7258u: goto label_3c7258;
        case 0x3c72c0u: goto label_3c72c0;
        case 0x3c7348u: goto label_3c7348;
        case 0x3c7380u: goto label_3c7380;
        case 0x3c7398u: goto label_3c7398;
        case 0x3c7428u: goto label_3c7428;
        default: break;
    }

    ctx->pc = 0x3c7160u;

    // 0x3c7160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c7160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c7164: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3c7164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3c7168: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c716c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c7170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c7174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c7174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7178: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c7178u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c717c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c717cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c7180: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c7184: 0xac820578  sw          $v0, 0x578($a0)
    ctx->pc = 0x3c7184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1400), GPR_U32(ctx, 2));
    // 0x3c7188: 0x8c820568  lw          $v0, 0x568($a0)
    ctx->pc = 0x3c7188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c718c: 0x8c830578  lw          $v1, 0x578($a0)
    ctx->pc = 0x3c718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1400)));
    // 0x3c7190: 0x8e250574  lw          $a1, 0x574($s1)
    ctx->pc = 0x3c7190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7194: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7198: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x3c7198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3c719c: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x3C719Cu;
    SET_GPR_U32(ctx, 31, 0x3C71A4u);
    ctx->pc = 0x3C71A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C719Cu;
    // 0x3c71a0: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x3C719Cu, 0x3C71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C71A4u;
label_3c71a4:
    // 0x3c71a4: 0xc0f1a8c  jal         func_3C6A30
    ctx->pc = 0x3C71A4u;
    SET_GPR_U32(ctx, 31, 0x3C71ACu);
    ctx->pc = 0x3C71A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C71A4u;
    // 0x3c71a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A30u, 0x3C71A4u, 0x3C71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C71ACu;
label_3c71ac:
    // 0x3c71ac: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c71acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c71b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c71b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c71b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c71b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3c71b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c71bc: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x3c71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
    // 0x3c71c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c71c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c71c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c71c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E380u));
    // 0x3c71c8: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x3c71c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x3c71cc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3c71ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c71d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c71d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c71d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3c71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3c71d8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3c71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c71dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c71dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c71e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3c71e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3c71e4: 0x8e240574  lw          $a0, 0x574($s1)
    ctx->pc = 0x3c71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c71e8: 0xc041442  jal         func_105108
    ctx->pc = 0x3C71E8u;
    SET_GPR_U32(ctx, 31, 0x3C71F0u);
    ctx->pc = 0x3C71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C71E8u;
    // 0x3c71ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C71E8u, 0x3C71F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C71F0u;
label_3c71f0:
    // 0x3c71f0: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c71f4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3c71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3c71f8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x3c71f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3c71fc: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7200: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3c7200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c7204: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3c7204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c7208: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3c7208u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3c720c: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7210: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7214: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3c7214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c7218: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C7218u;
    SET_GPR_U32(ctx, 31, 0x3C7220u);
    ctx->pc = 0x3C721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7218u;
    // 0x3c721c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C7218u, 0x3C7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7220u;
label_3c7220:
    // 0x3c7220: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c7220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7224: 0xe454001c  swc1        $f20, 0x1C($v0)
    ctx->pc = 0x3c7224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3c7228: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x3c7228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c722c: 0x8e240574  lw          $a0, 0x574($s1)
    ctx->pc = 0x3c722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7230: 0xc04d80c  jal         func_136030
    ctx->pc = 0x3C7230u;
    SET_GPR_U32(ctx, 31, 0x3C7238u);
    ctx->pc = 0x3C7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7230u;
    // 0x3c7234: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x3C7230u, 0x3C7238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7238u;
label_3c7238:
    // 0x3c7238: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x3c7238u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x3c723c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3c723cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7240: 0x45010079  bc1t        . + 4 + (0x79 << 2)
    ctx->pc = 0x3C7240u;
    {
        const bool branch_taken_0x3c7240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7240) {
            ctx->pc = 0x3C7428u;
            goto label_3c7428;
        }
    }
    ctx->pc = 0x3C7248u;
    // 0x3c7248: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x3c7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c724c: 0x8e240574  lw          $a0, 0x574($s1)
    ctx->pc = 0x3c724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7250: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3C7250u;
    SET_GPR_U32(ctx, 31, 0x3C7258u);
    ctx->pc = 0x3C7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7250u;
    // 0x3c7254: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3C7250u, 0x3C7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7258u;
label_3c7258:
    // 0x3c7258: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c7258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c725c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3c725cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3c7260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7264: 0x8e240578  lw          $a0, 0x578($s1)
    ctx->pc = 0x3c7264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c7268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c726c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c726cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7270: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x3c7270u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x3c7274: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x3c7274u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x3c7278: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x3c7278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x3c727c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3c727cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c7280: 0x4600b547  neg.s       $f21, $f22
    ctx->pc = 0x3c7280u;
    ctx->f[21] = FPU_NEG_S(ctx->f[22]);
    // 0x3c7284: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3c7284u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3c7288: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c7288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c728c: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x3c728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c7290: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c7290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c7294: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3c7294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c7298: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3c7298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c729c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3c729cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3c72a0: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x3c72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c72a4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x3c72a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3c72a8: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x3c72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c72ac: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x3c72acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3c72b0: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x3c72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c72b4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3C72B4u;
    {
        const bool branch_taken_0x3c72b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72B4u;
        // 0x3c72b8: 0xe4560030  swc1        $f22, 0x30($v0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72b4) {
            ctx->pc = 0x3C7410u;
            goto label_3c7410;
        }
    }
    ctx->pc = 0x3C72BCu;
    // 0x3c72bc: 0x0  nop
    ctx->pc = 0x3c72bcu;
    // NOP
label_3c72c0:
    // 0x3c72c0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c72c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c72c4: 0x0  nop
    ctx->pc = 0x3c72c4u;
    // NOP
    // 0x3c72c8: 0x4603b036  c.le.s      $f22, $f3
    ctx->pc = 0x3c72c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c72cc: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x3C72CCu;
    {
        const bool branch_taken_0x3c72cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c72cc) {
            ctx->pc = 0x3C73E0u;
            goto label_3c73e0;
        }
    }
    ctx->pc = 0x3C72D4u;
    // 0x3c72d4: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c72d8: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x3c72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c72dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c72e0: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x3c72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c72e4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x3c72e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c72e8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3c72e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c72ec: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x3C72ECu;
    {
        const bool branch_taken_0x3c72ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72ECu;
        // 0x3c72f0: 0x4601b000  add.s       $f0, $f22, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72ec) {
            ctx->pc = 0x3C7320u;
            goto label_3c7320;
        }
    }
    ctx->pc = 0x3C72F4u;
    // 0x3c72f4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c72f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c72f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C72F8u;
    {
        const bool branch_taken_0x3c72f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c72f8) {
            ctx->pc = 0x3C7310u;
            goto label_3c7310;
        }
    }
    ctx->pc = 0x3C7300u;
    // 0x3c7300: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3c7300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3c7304: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7304u;
    {
        const bool branch_taken_0x3c7304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7304u;
        // 0x3c7308: 0x46001d86  mov.s       $f22, $f3 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7304) {
            ctx->pc = 0x3C7320u;
            goto label_3c7320;
        }
    }
    ctx->pc = 0x3C730Cu;
    // 0x3c730c: 0x0  nop
    ctx->pc = 0x3c730cu;
    // NOP
label_3c7310:
    // 0x3c7310: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3c7310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3c7314: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x3c7314u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3c7318: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x3c7318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3c731c: 0x0  nop
    ctx->pc = 0x3c731cu;
    // NOP
label_3c7320:
    // 0x3c7320: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c7320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7324: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x3c7324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c7328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c732c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3c732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7330: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3C7330u;
    {
        const bool branch_taken_0x3c7330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7330u;
        // 0x3c7334: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7330) {
            ctx->pc = 0x3C7408u;
            goto label_3c7408;
        }
    }
    ctx->pc = 0x3C7338u;
    // 0x3c7338: 0x8e220568  lw          $v0, 0x568($s1)
    ctx->pc = 0x3c7338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3c733c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c733cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7340: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3C7340u;
    {
        const bool branch_taken_0x3c7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7340u;
        // 0x3c7344: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7340) {
            ctx->pc = 0x3C73C8u;
            goto label_3c73c8;
        }
    }
    ctx->pc = 0x3C7348u;
label_3c7348:
    // 0x3c7348: 0x8e250578  lw          $a1, 0x578($s1)
    ctx->pc = 0x3c7348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x3c734c: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x3c734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3c7350: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3c7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c7354: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3c7354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7358: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3c7358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c735c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3C735Cu;
    {
        const bool branch_taken_0x3c735c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c735c) {
            ctx->pc = 0x3C73C0u;
            goto label_3c73c0;
        }
    }
    ctx->pc = 0x3C7364u;
    // 0x3c7364: 0x8e220568  lw          $v0, 0x568($s1)
    ctx->pc = 0x3c7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3c7368: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x3c7368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c736c: 0x8e230574  lw          $v1, 0x574($s1)
    ctx->pc = 0x3c736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7370: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c7370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3c7374: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x3c7374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c7378: 0xc0f1bd8  jal         func_3C6F60
    ctx->pc = 0x3C7378u;
    SET_GPR_U32(ctx, 31, 0x3C7380u);
    ctx->pc = 0x3C737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7378u;
    // 0x3c737c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6F60u, 0x3C7378u, 0x3C7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7380u;
label_3c7380:
    // 0x3c7380: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c7380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7384: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c7384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c7388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c738c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3c738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c7390: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C7390u;
    SET_GPR_U32(ctx, 31, 0x3C7398u);
    ctx->pc = 0x3C7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7390u;
    // 0x3c7394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C7390u, 0x3C7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7398u;
label_3c7398:
    // 0x3c7398: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c739c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c739cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c73a0: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x3c73a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x3c73a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c73a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3c73a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3c73ac: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c73b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c73b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C73B4u;
    {
        const bool branch_taken_0x3c73b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73B4u;
        // 0x3c73b8: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73b4) {
            ctx->pc = 0x3C7408u;
            goto label_3c7408;
        }
    }
    ctx->pc = 0x3C73BCu;
    // 0x3c73bc: 0x0  nop
    ctx->pc = 0x3c73bcu;
    // NOP
label_3c73c0:
    // 0x3c73c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c73c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c73c4: 0x0  nop
    ctx->pc = 0x3c73c4u;
    // NOP
label_3c73c8:
    // 0x3c73c8: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3c73c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c73cc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3C73CCu;
    {
        const bool branch_taken_0x3c73cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c73cc) {
            ctx->pc = 0x3C7348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7348;
        }
    }
    ctx->pc = 0x3C73D4u;
    // 0x3c73d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C73D4u;
    {
        const bool branch_taken_0x3c73d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c73d4) {
            ctx->pc = 0x3C7408u;
            goto label_3c7408;
        }
    }
    ctx->pc = 0x3C73DCu;
    // 0x3c73dc: 0x0  nop
    ctx->pc = 0x3c73dcu;
    // NOP
label_3c73e0:
    // 0x3c73e0: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c73e4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c73e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c73ec: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3c73ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c73f0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x3c73f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3c73f4: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x3c73f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x3c73f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3c73f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3c73fc: 0x8e220574  lw          $v0, 0x574($s1)
    ctx->pc = 0x3c73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3c7400: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c7400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c7404: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x3c7404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_3c7408:
    // 0x3c7408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c7408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c740c: 0x0  nop
    ctx->pc = 0x3c740cu;
    // NOP
label_3c7410:
    // 0x3c7410: 0x8e220568  lw          $v0, 0x568($s1)
    ctx->pc = 0x3c7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3c7414: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3c7414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c7418: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3C7418u;
    {
        const bool branch_taken_0x3c7418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7418u;
        // 0x3c741c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7418) {
            ctx->pc = 0x3C72C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c72c0;
        }
    }
    ctx->pc = 0x3C7420u;
    // 0x3c7420: 0xc0f1b18  jal         func_3C6C60
    ctx->pc = 0x3C7420u;
    SET_GPR_U32(ctx, 31, 0x3C7428u);
    ctx->pc = 0x3C7424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7420u;
    // 0x3c7424: 0xe6350570  swc1        $f21, 0x570($s1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6C60u, 0x3C7420u, 0x3C7428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7428u;
label_3c7428:
    // 0x3c7428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c7428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c742c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c742cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7430: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c7430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3c7434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c7434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7438: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c7438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c743c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c7440: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7440u;
        // 0x3c7444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7448u;
}
