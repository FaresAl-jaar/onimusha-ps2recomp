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

// Function: sub_003AE7E0
// Address: 0x3ae7e0 - 0x3ae990
void sub_003AE7E0_0x3ae7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE7E0_0x3ae7e0");
#endif

    switch (ctx->pc) {
        case 0x3ae8c8u: goto label_3ae8c8;
        case 0x3ae914u: goto label_3ae914;
        case 0x3ae92cu: goto label_3ae92c;
        case 0x3ae944u: goto label_3ae944;
        case 0x3ae95cu: goto label_3ae95c;
        case 0x3ae980u: goto label_3ae980;
        default: break;
    }

    ctx->pc = 0x3ae7e0u;

    // 0x3ae7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ae7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ae7e4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3ae7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3ae7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ae7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ae7f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3ae7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3ae7f4: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3AE7F4u;
    {
        const bool branch_taken_0x3ae7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7F4u;
        // 0x3ae7f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae7f4) {
            ctx->pc = 0x3AE8C0u;
            goto label_3ae8c0;
        }
    }
    ctx->pc = 0x3AE7FCu;
    // 0x3ae7fc: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x3ae7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3ae800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ae800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae804: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3ae804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3ae808: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x3ae808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x3ae80c: 0x920429d1  lbu         $a0, 0x29D1($s0)
    ctx->pc = 0x3ae80cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10705)));
    // 0x3ae810: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3AE810u;
    {
        const bool branch_taken_0x3ae810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE810u;
        // 0x3ae814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae810) {
            ctx->pc = 0x3AE8A0u;
            goto label_3ae8a0;
        }
    }
    ctx->pc = 0x3AE818u;
    // 0x3ae818: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3AE818u;
    {
        const bool branch_taken_0x3ae818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae818) {
            ctx->pc = 0x3AE8A0u;
            goto label_3ae8a0;
        }
    }
    ctx->pc = 0x3AE820u;
    // 0x3ae820: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE820u;
    {
        const bool branch_taken_0x3ae820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae820) {
            ctx->pc = 0x3AE830u;
            goto label_3ae830;
        }
    }
    ctx->pc = 0x3AE828u;
    // 0x3ae828: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3AE828u;
    {
        const bool branch_taken_0x3ae828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae828) {
            ctx->pc = 0x3AE8C0u;
            goto label_3ae8c0;
        }
    }
    ctx->pc = 0x3AE830u;
label_3ae830:
    // 0x3ae830: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3ae830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3ae834: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3ae834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae838: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3AE838u;
    {
        const bool branch_taken_0x3ae838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ae838) {
            ctx->pc = 0x3AE8C0u;
            goto label_3ae8c0;
        }
    }
    ctx->pc = 0x3AE840u;
    // 0x3ae840: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3ae840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae844: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3ae844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3ae848: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ae848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ae84c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ae84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae854: 0x0  nop
    ctx->pc = 0x3ae854u;
    // NOP
    // 0x3ae858: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ae858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ae85c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae85cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE860u;
    {
        const bool branch_taken_0x3ae860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae860) {
            ctx->pc = 0x3AE878u;
            goto label_3ae878;
        }
    }
    ctx->pc = 0x3AE868u;
    // 0x3ae868: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae86c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ae86cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ae870: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE870u;
    {
        const bool branch_taken_0x3ae870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE870u;
        // 0x3ae874: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae870) {
            ctx->pc = 0x3AE894u;
            goto label_3ae894;
        }
    }
    ctx->pc = 0x3AE878u;
label_3ae878:
    // 0x3ae878: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae87c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae880: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae884: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ae884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ae888: 0x0  nop
    ctx->pc = 0x3ae888u;
    // NOP
    // 0x3ae88c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ae88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ae890: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x3ae890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_3ae894:
    // 0x3ae894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae898: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE898u;
    {
        const bool branch_taken_0x3ae898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE898u;
        // 0x3ae89c: 0xa20229d1  sb          $v0, 0x29D1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae898) {
            ctx->pc = 0x3AE8C0u;
            goto label_3ae8c0;
        }
    }
    ctx->pc = 0x3AE8A0u;
label_3ae8a0:
    // 0x3ae8a0: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x3ae8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3ae8a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE8A4u;
    {
        const bool branch_taken_0x3ae8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae8a4) {
            ctx->pc = 0x3AE8B8u;
            goto label_3ae8b8;
        }
    }
    ctx->pc = 0x3AE8ACu;
    // 0x3ae8ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ae8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ae8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE8B0u;
    {
        const bool branch_taken_0x3ae8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8B0u;
        // 0x3ae8b4: 0xa6020828  sh          $v0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8b0) {
            ctx->pc = 0x3AE8C0u;
            goto label_3ae8c0;
        }
    }
    ctx->pc = 0x3AE8B8u;
label_3ae8b8:
    // 0x3ae8b8: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3ae8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae8bc: 0x0  nop
    ctx->pc = 0x3ae8bcu;
    // NOP
label_3ae8c0:
    // 0x3ae8c0: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3AE8C0u;
    SET_GPR_U32(ctx, 31, 0x3AE8C8u);
    ctx->pc = 0x3AE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE8C0u;
    // 0x3ae8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3AE8C0u, 0x3AE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE8C8u;
label_3ae8c8:
    // 0x3ae8c8: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3ae8c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3ae8cc: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x3ae8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x3ae8d0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3AE8D0u;
    {
        const bool branch_taken_0x3ae8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8D0u;
        // 0x3ae8d4: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8d0) {
            ctx->pc = 0x3AE968u;
            goto label_3ae968;
        }
    }
    ctx->pc = 0x3AE8D8u;
    // 0x3ae8d8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3AE8D8u;
    {
        const bool branch_taken_0x3ae8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae8d8) {
            ctx->pc = 0x3AE950u;
            goto label_3ae950;
        }
    }
    ctx->pc = 0x3AE8E0u;
    // 0x3ae8e0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3ae8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3ae8e4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AE8E4u;
    {
        const bool branch_taken_0x3ae8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8E4u;
        // 0x3ae8e8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8e4) {
            ctx->pc = 0x3AE938u;
            goto label_3ae938;
        }
    }
    ctx->pc = 0x3AE8ECu;
    // 0x3ae8ec: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3AE8ECu;
    {
        const bool branch_taken_0x3ae8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae8ec) {
            ctx->pc = 0x3AE920u;
            goto label_3ae920;
        }
    }
    ctx->pc = 0x3AE8F4u;
    // 0x3ae8f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ae8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ae8f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE8F8u;
    {
        const bool branch_taken_0x3ae8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae8f8) {
            ctx->pc = 0x3AE908u;
            goto label_3ae908;
        }
    }
    ctx->pc = 0x3AE900u;
    // 0x3ae900: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3AE900u;
    {
        const bool branch_taken_0x3ae900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae900) {
            ctx->pc = 0x3AE980u;
            goto label_3ae980;
        }
    }
    ctx->pc = 0x3AE908u;
label_3ae908:
    // 0x3ae908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae90c: 0xc0eb6e8  jal         func_3ADBA0
    ctx->pc = 0x3AE90Cu;
    SET_GPR_U32(ctx, 31, 0x3AE914u);
    ctx->pc = 0x3AE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE90Cu;
    // 0x3ae910: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADBA0u, 0x3AE90Cu, 0x3AE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE914u;
label_3ae914:
    // 0x3ae914: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3AE914u;
    {
        const bool branch_taken_0x3ae914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae914) {
            ctx->pc = 0x3AE980u;
            goto label_3ae980;
        }
    }
    ctx->pc = 0x3AE91Cu;
    // 0x3ae91c: 0x0  nop
    ctx->pc = 0x3ae91cu;
    // NOP
label_3ae920:
    // 0x3ae920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae924: 0xc0eb6e8  jal         func_3ADBA0
    ctx->pc = 0x3AE924u;
    SET_GPR_U32(ctx, 31, 0x3AE92Cu);
    ctx->pc = 0x3AE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE924u;
    // 0x3ae928: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADBA0u, 0x3AE924u, 0x3AE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE92Cu;
label_3ae92c:
    // 0x3ae92c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AE92Cu;
    {
        const bool branch_taken_0x3ae92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae92c) {
            ctx->pc = 0x3AE980u;
            goto label_3ae980;
        }
    }
    ctx->pc = 0x3AE934u;
    // 0x3ae934: 0x0  nop
    ctx->pc = 0x3ae934u;
    // NOP
label_3ae938:
    // 0x3ae938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae93c: 0xc0eb6e8  jal         func_3ADBA0
    ctx->pc = 0x3AE93Cu;
    SET_GPR_U32(ctx, 31, 0x3AE944u);
    ctx->pc = 0x3AE940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE93Cu;
    // 0x3ae940: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADBA0u, 0x3AE93Cu, 0x3AE944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE944u;
label_3ae944:
    // 0x3ae944: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AE944u;
    {
        const bool branch_taken_0x3ae944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae944) {
            ctx->pc = 0x3AE980u;
            goto label_3ae980;
        }
    }
    ctx->pc = 0x3AE94Cu;
    // 0x3ae94c: 0x0  nop
    ctx->pc = 0x3ae94cu;
    // NOP
label_3ae950:
    // 0x3ae950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae954: 0xc0eb6e8  jal         func_3ADBA0
    ctx->pc = 0x3AE954u;
    SET_GPR_U32(ctx, 31, 0x3AE95Cu);
    ctx->pc = 0x3AE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE954u;
    // 0x3ae958: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADBA0u, 0x3AE954u, 0x3AE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE95Cu;
label_3ae95c:
    // 0x3ae95c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE95Cu;
    {
        const bool branch_taken_0x3ae95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae95c) {
            ctx->pc = 0x3AE980u;
            goto label_3ae980;
        }
    }
    ctx->pc = 0x3AE964u;
    // 0x3ae964: 0x0  nop
    ctx->pc = 0x3ae964u;
    // NOP
label_3ae968:
    // 0x3ae968: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3ae968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3ae96c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3ae96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3ae970: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE970u;
    {
        const bool branch_taken_0x3ae970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE970u;
        // 0x3ae974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae970) {
            ctx->pc = 0x3AE980u;
            goto label_3ae980;
        }
    }
    ctx->pc = 0x3AE978u;
    // 0x3ae978: 0xc0eb9b8  jal         func_3AE6E0
    ctx->pc = 0x3AE978u;
    SET_GPR_U32(ctx, 31, 0x3AE980u);
    ctx->pc = 0x3AE6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE6E0u, 0x3AE978u, 0x3AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE980u;
label_3ae980:
    // 0x3ae980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ae984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae988: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE988u;
        // 0x3ae98c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE990u;
}
