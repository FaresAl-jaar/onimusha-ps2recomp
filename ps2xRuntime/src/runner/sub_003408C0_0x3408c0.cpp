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

// Function: sub_003408C0
// Address: 0x3408c0 - 0x340a4c
void sub_003408C0_0x3408c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003408C0_0x3408c0");
#endif

    switch (ctx->pc) {
        case 0x34092cu: goto label_34092c;
        case 0x340938u: goto label_340938;
        case 0x340970u: goto label_340970;
        case 0x340a2cu: goto label_340a2c;
        default: break;
    }

    ctx->pc = 0x3408c0u;

    // 0x3408c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3408c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3408c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3408c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3408c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3408cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3408ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3408d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3408d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3408d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3408d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408d8: 0x9086001b  lbu         $a2, 0x1B($a0)
    ctx->pc = 0x3408d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x3408dc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3408dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3408e0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3408e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3408e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3408e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3408e8: 0x24847740  addiu       $a0, $a0, 0x7740
    ctx->pc = 0x3408e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30528));
    // 0x3408ec: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3408ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3408f0: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x3408f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3408f4: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x3408f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3408f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3408F8u;
    {
        const bool branch_taken_0x3408f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3408f8) {
            ctx->pc = 0x340908u;
            goto label_340908;
        }
    }
    ctx->pc = 0x340900u;
    // 0x340900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x340900u;
    {
        const bool branch_taken_0x340900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340900) {
            ctx->pc = 0x340958u;
            goto label_340958;
        }
    }
    ctx->pc = 0x340908u;
label_340908:
    // 0x340908: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x340908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x34090c: 0x8c241680  lw          $a0, 0x1680($at)
    ctx->pc = 0x34090cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x811680u));
    // 0x340910: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x340910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x340914: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x340914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x340918: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x340918u;
    {
        const bool branch_taken_0x340918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340918u;
        // 0x34091c: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340918) {
            ctx->pc = 0x340958u;
            goto label_340958;
        }
    }
    ctx->pc = 0x340920u;
    // 0x340920: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x340920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340924: 0xc0e1ad8  jal         func_386B60
    ctx->pc = 0x340924u;
    SET_GPR_U32(ctx, 31, 0x34092Cu);
    ctx->pc = 0x340928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340924u;
    // 0x340928: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386B60u, 0x340924u, 0x34092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34092Cu;
label_34092c:
    // 0x34092c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340930: 0xc0d03bc  jal         func_340EF0
    ctx->pc = 0x340930u;
    SET_GPR_U32(ctx, 31, 0x340938u);
    ctx->pc = 0x340934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340930u;
    // 0x340934: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340EF0u, 0x340930u, 0x340938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340938u;
label_340938:
    // 0x340938: 0x9225001b  lbu         $a1, 0x1B($s1)
    ctx->pc = 0x340938u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x34093c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34093cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x340940: 0x24637740  addiu       $v1, $v1, 0x7740
    ctx->pc = 0x340940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30528));
    // 0x340944: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x340948: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x340948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34094c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x34094cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340950: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x340950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340954: 0x0  nop
    ctx->pc = 0x340954u;
    // NOP
label_340958:
    // 0x340958: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x340958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x34095c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x34095Cu;
    {
        const bool branch_taken_0x34095c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34095Cu;
        // 0x340960: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34095c) {
            ctx->pc = 0x340A38u;
            goto label_340a38;
        }
    }
    ctx->pc = 0x340964u;
    // 0x340964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340968: 0xc0e1cf0  jal         func_3873C0
    ctx->pc = 0x340968u;
    SET_GPR_U32(ctx, 31, 0x340970u);
    ctx->pc = 0x34096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340968u;
    // 0x34096c: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873C0u, 0x340968u, 0x340970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340970u;
label_340970:
    // 0x340970: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x340970u;
    {
        const bool branch_taken_0x340970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340970) {
            ctx->pc = 0x340A38u;
            goto label_340a38;
        }
    }
    ctx->pc = 0x340978u;
    // 0x340978: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x340978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34097c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x34097cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x340980: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x340980u;
    {
        const bool branch_taken_0x340980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x340984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340980u;
        // 0x340984: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340980) {
            ctx->pc = 0x340998u;
            goto label_340998;
        }
    }
    ctx->pc = 0x340988u;
    // 0x340988: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x340988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x34098c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340990: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340990u;
    {
        const bool branch_taken_0x340990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340990) {
            ctx->pc = 0x3409A0u;
            goto label_3409a0;
        }
    }
    ctx->pc = 0x340998u;
label_340998:
    // 0x340998: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x340998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x34099c: 0x0  nop
    ctx->pc = 0x34099cu;
    // NOP
label_3409a0:
    // 0x3409a0: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x3409a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3409a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3409A4u;
    {
        const bool branch_taken_0x3409a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3409A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409A4u;
        // 0x3409a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409a4) {
            ctx->pc = 0x3409B4u;
            goto label_3409b4;
        }
    }
    ctx->pc = 0x3409ACu;
    // 0x3409ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3409ACu;
    {
        const bool branch_taken_0x3409ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3409B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409ACu;
        // 0x3409b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409ac) {
            ctx->pc = 0x340A10u;
            goto label_340a10;
        }
    }
    ctx->pc = 0x3409B4u;
label_3409b4:
    // 0x3409b4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3409b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3409b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3409b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3409bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3409bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3409c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3409c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3409c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3409c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3409c8: 0x0  nop
    ctx->pc = 0x3409c8u;
    // NOP
    // 0x3409cc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3409ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3409d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3409d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3409d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3409D4u;
    {
        const bool branch_taken_0x3409d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3409d4) {
            ctx->pc = 0x3409ECu;
            goto label_3409ec;
        }
    }
    ctx->pc = 0x3409DCu;
    // 0x3409dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3409dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3409e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3409e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3409e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3409E4u;
    {
        const bool branch_taken_0x3409e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3409E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409E4u;
        // 0x3409e8: 0x3343c  dsll32      $a2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409e4) {
            ctx->pc = 0x340A08u;
            goto label_340a08;
        }
    }
    ctx->pc = 0x3409ECu;
label_3409ec:
    // 0x3409ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3409ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3409f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3409f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3409f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3409f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3409f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3409f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3409fc: 0x0  nop
    ctx->pc = 0x3409fcu;
    // NOP
    // 0x340a00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340a04: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x340a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_340a08:
    // 0x340a08: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x340a08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x340a0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x340a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_340a10:
    // 0x340a10: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x340a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x340a14: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x340a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x340a18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x340a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x340a20: 0x90450006  lbu         $a1, 0x6($v0)
    ctx->pc = 0x340a20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x340a24: 0xc0e1a40  jal         func_386900
    ctx->pc = 0x340A24u;
    SET_GPR_U32(ctx, 31, 0x340A2Cu);
    ctx->pc = 0x340A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A24u;
    // 0x340a28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386900u, 0x340A24u, 0x340A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A2Cu;
label_340a2c:
    // 0x340a2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x340a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x340a30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340a34: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x340a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_340a38:
    // 0x340a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a44: 0x3e00008  jr          $ra
    ctx->pc = 0x340A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A44u;
        // 0x340a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340A4Cu;
}
