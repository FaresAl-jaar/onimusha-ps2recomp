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

// Function: sub_001C7190
// Address: 0x1c7190 - 0x1c733c
void sub_001C7190_0x1c7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7190_0x1c7190");
#endif

    switch (ctx->pc) {
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7244u: goto label_1c7244;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c725cu: goto label_1c725c;
        case 0x1c7268u: goto label_1c7268;
        case 0x1c727cu: goto label_1c727c;
        case 0x1c7284u: goto label_1c7284;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c7308u: goto label_1c7308;
        case 0x1c731cu: goto label_1c731c;
        default: break;
    }

    ctx->pc = 0x1c7190u;

    // 0x1c7190: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c7190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c7194: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c7198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c7198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c719c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1c719cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1c71a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c71a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c71a4: 0x2442f720  addiu       $v0, $v0, -0x8E0
    ctx->pc = 0x1c71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965024));
    // 0x1c71a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c71ac: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x1c71acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c71b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c71b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c71b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c71b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c71bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c71bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71c0: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1c71c0u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40F720u));
    // 0x1c71c4: 0x24a5f730  addiu       $a1, $a1, -0x8D0
    ctx->pc = 0x1c71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965040));
    // 0x1c71c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c71cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c71ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71d0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c71d4: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1c71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1c71d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c71dc: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c71dcu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40F730u));
    // 0x1c71e0: 0x2442f740  addiu       $v0, $v0, -0x8C0
    ctx->pc = 0x1c71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
    // 0x1c71e4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1c71e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1c71e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c71e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F740u));
    // 0x1c71ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c71ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c71f0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1c71f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c71f4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C71F4u;
    SET_GPR_U32(ctx, 31, 0x1C71FCu);
    ctx->pc = 0x1C71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71F4u;
    // 0x1c71f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C71F4u, 0x1C71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71FCu;
label_1c71fc:
    // 0x1c71fc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c7200: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7204: 0xc041442  jal         func_105108
    ctx->pc = 0x1C7204u;
    SET_GPR_U32(ctx, 31, 0x1C720Cu);
    ctx->pc = 0x1C7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7204u;
    // 0x1c7208: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C7204u, 0x1C720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C720Cu;
label_1c720c:
    // 0x1c720c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1c720cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c7210: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c7210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c7214: 0xc041442  jal         func_105108
    ctx->pc = 0x1C7214u;
    SET_GPR_U32(ctx, 31, 0x1C721Cu);
    ctx->pc = 0x1C7218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7214u;
    // 0x1c7218: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C7214u, 0x1C721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C721Cu;
label_1c721c:
    // 0x1c721c: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c721cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c7220: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c7224: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x1c7224u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c7228: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c722c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c7230: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1c7230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7234: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C7234u;
    SET_GPR_U32(ctx, 31, 0x1C723Cu);
    ctx->pc = 0x1C7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7234u;
    // 0x1c7238: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C7234u, 0x1C723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C723Cu;
label_1c723c:
    // 0x1c723c: 0xc07cd3c  jal         func_1F34F0
    ctx->pc = 0x1C723Cu;
    SET_GPR_U32(ctx, 31, 0x1C7244u);
    ctx->pc = 0x1C7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C723Cu;
    // 0x1c7240: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34F0u, 0x1C723Cu, 0x1C7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7244u;
label_1c7244:
    // 0x1c7244: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c7248: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C7248u;
    SET_GPR_U32(ctx, 31, 0x1C7250u);
    ctx->pc = 0x1C724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7248u;
    // 0x1c724c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C7248u, 0x1C7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7250u;
label_1c7250:
    // 0x1c7250: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c7254: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C7254u;
    SET_GPR_U32(ctx, 31, 0x1C725Cu);
    ctx->pc = 0x1C7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7254u;
    // 0x1c7258: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C7254u, 0x1C725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C725Cu;
label_1c725c:
    // 0x1c725c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c7260: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C7260u;
    SET_GPR_U32(ctx, 31, 0x1C7268u);
    ctx->pc = 0x1C7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7260u;
    // 0x1c7264: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C7260u, 0x1C7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7268u;
label_1c7268:
    // 0x1c7268: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c726c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c7270: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1c7270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7274: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C7274u;
    SET_GPR_U32(ctx, 31, 0x1C727Cu);
    ctx->pc = 0x1C7278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7274u;
    // 0x1c7278: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C7274u, 0x1C727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C727Cu;
label_1c727c:
    // 0x1c727c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C727Cu;
    SET_GPR_U32(ctx, 31, 0x1C7284u);
    ctx->pc = 0x1C7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C727Cu;
    // 0x1c7280: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C727Cu, 0x1C7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7284u;
label_1c7284:
    // 0x1c7284: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c7284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c7288: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c7288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c728c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C728Cu;
    SET_GPR_U32(ctx, 31, 0x1C7294u);
    ctx->pc = 0x1C7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C728Cu;
    // 0x1c7290: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C728Cu, 0x1C7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7294u;
label_1c7294:
    // 0x1c7294: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c7298: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C7298u;
    SET_GPR_U32(ctx, 31, 0x1C72A0u);
    ctx->pc = 0x1C729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7298u;
    // 0x1c729c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C7298u, 0x1C72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72A0u;
label_1c72a0:
    // 0x1c72a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c72a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c72a4: 0x0  nop
    ctx->pc = 0x1c72a4u;
    // NOP
    // 0x1c72a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c72a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c72ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C72ACu;
    {
        const bool branch_taken_0x1c72ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72ACu;
        // 0x1c72b0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72ac) {
            ctx->pc = 0x1C72B8u;
            goto label_1c72b8;
        }
    }
    ctx->pc = 0x1C72B4u;
    // 0x1c72b4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c72b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c72b8:
    // 0x1c72b8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c72bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c72bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c72c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c72c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c72c4: 0x0  nop
    ctx->pc = 0x1c72c4u;
    // NOP
    // 0x1c72c8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c72c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c72cc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1C72CCu;
    {
        const bool branch_taken_0x1c72cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c72cc) {
            ctx->pc = 0x1C7320u;
            goto label_1c7320;
        }
    }
    ctx->pc = 0x1C72D4u;
    // 0x1c72d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c72d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c72d8: 0x0  nop
    ctx->pc = 0x1c72d8u;
    // NOP
    // 0x1c72dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c72dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c72e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C72E0u;
    {
        const bool branch_taken_0x1c72e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c72e0) {
            ctx->pc = 0x1C72F0u;
            goto label_1c72f0;
        }
    }
    ctx->pc = 0x1C72E8u;
    // 0x1c72e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C72E8u;
    {
        const bool branch_taken_0x1c72e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72E8u;
        // 0x1c72ec: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72e8) {
            ctx->pc = 0x1C72F8u;
            goto label_1c72f8;
        }
    }
    ctx->pc = 0x1C72F0u;
label_1c72f0:
    // 0x1c72f0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c72f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c72f4: 0x0  nop
    ctx->pc = 0x1c72f4u;
    // NOP
label_1c72f8:
    // 0x1c72f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c72f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c72fc: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1c72fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c7300: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C7300u;
    SET_GPR_U32(ctx, 31, 0x1C7308u);
    ctx->pc = 0x1C7304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7300u;
    // 0x1c7304: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C7300u, 0x1C7308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7308u;
label_1c7308:
    // 0x1c7308: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c7308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c730c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c7310: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c7314: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C7314u;
    SET_GPR_U32(ctx, 31, 0x1C731Cu);
    ctx->pc = 0x1C7318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7314u;
    // 0x1c7318: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C7314u, 0x1C731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C731Cu;
label_1c731c:
    // 0x1c731c: 0x0  nop
    ctx->pc = 0x1c731cu;
    // NOP
label_1c7320:
    // 0x1c7320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c7320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7324: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7328: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c732c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c732cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7330: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7334: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7334u;
        // 0x1c7338: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C733Cu;
}
