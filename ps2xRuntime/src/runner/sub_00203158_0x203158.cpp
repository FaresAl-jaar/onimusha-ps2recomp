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

// Function: sub_00203158
// Address: 0x203158 - 0x2032a4
void sub_00203158_0x203158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203158_0x203158");
#endif

    switch (ctx->pc) {
        case 0x203194u: goto label_203194;
        case 0x2031a4u: goto label_2031a4;
        case 0x2031b4u: goto label_2031b4;
        case 0x2031c4u: goto label_2031c4;
        case 0x20321cu: goto label_20321c;
        case 0x20322cu: goto label_20322c;
        case 0x20323cu: goto label_20323c;
        case 0x20324cu: goto label_20324c;
        case 0x20325cu: goto label_20325c;
        case 0x20326cu: goto label_20326c;
        case 0x20327cu: goto label_20327c;
        default: break;
    }

    ctx->pc = 0x203158u;

    // 0x203158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20315c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x203160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203164: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x203164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20316c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20316cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x203170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x203174: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x203178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20317c: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x20317cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x203180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x203184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203188: 0x8c92003c  lw          $s2, 0x3C($a0)
    ctx->pc = 0x203188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x20318c: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x20318Cu;
    SET_GPR_U32(ctx, 31, 0x203194u);
    ctx->pc = 0x203190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20318Cu;
    // 0x203190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x20318Cu, 0x203194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203194u;
label_203194:
    // 0x203194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x203198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20319c: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x20319Cu;
    SET_GPR_U32(ctx, 31, 0x2031A4u);
    ctx->pc = 0x2031A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20319Cu;
    // 0x2031a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x20319Cu, 0x2031A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031A4u;
label_2031a4:
    // 0x2031a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2031a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2031a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031ac: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x2031ACu;
    SET_GPR_U32(ctx, 31, 0x2031B4u);
    ctx->pc = 0x2031B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2031ACu;
    // 0x2031b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x2031ACu, 0x2031B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031B4u;
label_2031b4:
    // 0x2031b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2031b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031b8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2031bc: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x2031BCu;
    SET_GPR_U32(ctx, 31, 0x2031C4u);
    ctx->pc = 0x2031C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2031BCu;
    // 0x2031c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x2031BCu, 0x2031C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031C4u;
label_2031c4:
    // 0x2031c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2031c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031c8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2031cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2031d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2031d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2031d4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2031d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2031dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2031e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2031e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2031e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2031e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2031e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2031ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2031ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2031f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2031f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2031f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2031f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2031f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2031f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2031fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2031fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203200: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x203200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203204: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x203204u;
    {
        const bool branch_taken_0x203204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x203208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203204u;
        // 0x203208: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203204) {
            ctx->pc = 0x203210u;
            goto label_203210;
        }
    }
    ctx->pc = 0x20320Cu;
    // 0x20320c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20320cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203210:
    // 0x203210: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x203214: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203214u;
    SET_GPR_U32(ctx, 31, 0x20321Cu);
    ctx->pc = 0x203218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203214u;
    // 0x203218: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203214u, 0x20321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20321Cu;
label_20321c:
    // 0x20321c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203220: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x203220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203224: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203224u;
    SET_GPR_U32(ctx, 31, 0x20322Cu);
    ctx->pc = 0x203228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203224u;
    // 0x203228: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203224u, 0x20322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20322Cu;
label_20322c:
    // 0x20322c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203230: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x203230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203234: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203234u;
    SET_GPR_U32(ctx, 31, 0x20323Cu);
    ctx->pc = 0x203238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203234u;
    // 0x203238: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203234u, 0x20323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20323Cu;
label_20323c:
    // 0x20323c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203240: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x203240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x203244: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203244u;
    SET_GPR_U32(ctx, 31, 0x20324Cu);
    ctx->pc = 0x203248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203244u;
    // 0x203248: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203244u, 0x20324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20324Cu;
label_20324c:
    // 0x20324c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203250: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x203250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x203254: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203254u;
    SET_GPR_U32(ctx, 31, 0x20325Cu);
    ctx->pc = 0x203258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203254u;
    // 0x203258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203254u, 0x20325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20325Cu;
label_20325c:
    // 0x20325c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203260: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x203264: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203264u;
    SET_GPR_U32(ctx, 31, 0x20326Cu);
    ctx->pc = 0x203268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203264u;
    // 0x203268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203264u, 0x20326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20326Cu;
label_20326c:
    // 0x20326c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20326cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203270: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203274: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x203274u;
    SET_GPR_U32(ctx, 31, 0x20327Cu);
    ctx->pc = 0x203278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203274u;
    // 0x203278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x203274u, 0x20327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20327Cu;
label_20327c:
    // 0x20327c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203284: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20328c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203290: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203294: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20329c: 0x80852ce  j           func_214B38
    ctx->pc = 0x20329Cu;
    ctx->pc = 0x2032A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20329Cu;
    // 0x2032a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B38u;
    sub_00214B38_0x214b38(rdram, ctx, runtime); return;
    ctx->pc = 0x2032A4u;
}
