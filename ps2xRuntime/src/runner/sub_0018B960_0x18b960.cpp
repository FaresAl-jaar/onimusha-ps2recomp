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

// Function: sub_0018B960
// Address: 0x18b960 - 0x18bf28
void sub_0018B960_0x18b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B960_0x18b960");
#endif

    switch (ctx->pc) {
        case 0x18b9b8u: goto label_18b9b8;
        case 0x18b9e4u: goto label_18b9e4;
        case 0x18ba54u: goto label_18ba54;
        case 0x18ba5cu: goto label_18ba5c;
        case 0x18ba80u: goto label_18ba80;
        case 0x18ba8cu: goto label_18ba8c;
        case 0x18ba9cu: goto label_18ba9c;
        case 0x18baa4u: goto label_18baa4;
        case 0x18bae8u: goto label_18bae8;
        case 0x18baf0u: goto label_18baf0;
        case 0x18bafcu: goto label_18bafc;
        case 0x18bb0cu: goto label_18bb0c;
        case 0x18bb14u: goto label_18bb14;
        case 0x18bb38u: goto label_18bb38;
        case 0x18bb48u: goto label_18bb48;
        case 0x18bb5cu: goto label_18bb5c;
        case 0x18bb68u: goto label_18bb68;
        case 0x18bb78u: goto label_18bb78;
        case 0x18bce0u: goto label_18bce0;
        case 0x18bd04u: goto label_18bd04;
        case 0x18bd90u: goto label_18bd90;
        case 0x18bd98u: goto label_18bd98;
        case 0x18bdecu: goto label_18bdec;
        case 0x18be34u: goto label_18be34;
        case 0x18be50u: goto label_18be50;
        case 0x18be60u: goto label_18be60;
        case 0x18beb8u: goto label_18beb8;
        case 0x18bec8u: goto label_18bec8;
        default: break;
    }

    ctx->pc = 0x18b960u;

    // 0x18b960: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x18b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x18b964: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18b968: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18b96c: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x18b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18b970: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x18b970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x18b974: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18b974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x18b978: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18b978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b97c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18b980: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18b984: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18b984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b988: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18b98c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18b98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b990: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x18b990u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18b994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b998: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x18b998u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18b99c: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x18b99cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18b9a0: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x18b9a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18b9a4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x18b9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18b9a8: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x18b9a8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x18b9ac: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x18b9acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x18b9b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B9B0u;
    {
        const bool branch_taken_0x18b9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9B0u;
        // 0x18b9b4: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9b0) {
            ctx->pc = 0x18B9D4u;
            goto label_18b9d4;
        }
    }
    ctx->pc = 0x18B9B8u;
label_18b9b8:
    // 0x18b9b8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x18b9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b9bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b9c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18b9c4: 0x0  nop
    ctx->pc = 0x18b9c4u;
    // NOP
    // 0x18b9c8: 0x0  nop
    ctx->pc = 0x18b9c8u;
    // NOP
    // 0x18b9cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18B9CCu;
    {
        const bool branch_taken_0x18b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b9cc) {
            ctx->pc = 0x18B9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b9b8;
        }
    }
    ctx->pc = 0x18B9D4u;
label_18b9d4:
    // 0x18b9d4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18b9d8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x18b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18b9dc: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18B9DCu;
    SET_GPR_U32(ctx, 31, 0x18B9E4u);
    ctx->pc = 0x18B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9DCu;
    // 0x18b9e0: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18B9DCu, 0x18B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9E4u;
label_18b9e4:
    // 0x18b9e4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x18b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b9e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x18b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b9ec: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x18b9ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b9f0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x18B9F0u;
    {
        const bool branch_taken_0x18b9f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9F0u;
        // 0x18b9f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9f0) {
            ctx->pc = 0x18BA20u;
            goto label_18ba20;
        }
    }
    ctx->pc = 0x18B9F8u;
    // 0x18b9f8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x18b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b9fc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x18b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ba00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18ba00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ba04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18BA04u;
    {
        const bool branch_taken_0x18ba04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA04u;
        // 0x18ba08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba04) {
            ctx->pc = 0x18BA20u;
            goto label_18ba20;
        }
    }
    ctx->pc = 0x18BA0Cu;
    // 0x18ba0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ba10: 0x0  nop
    ctx->pc = 0x18ba10u;
    // NOP
    // 0x18ba14: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x18ba14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x18ba18: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x18ba18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x18ba1c: 0x0  nop
    ctx->pc = 0x18ba1cu;
    // NOP
label_18ba20:
    // 0x18ba20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18ba24: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18ba28: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18ba2c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18ba30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18ba34: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x18ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x18ba38: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x18ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x18ba3c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18ba40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18ba40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18ba44: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x18ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x18ba48: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x18ba4c: 0xc041290  jal         func_104A40
    ctx->pc = 0x18BA4Cu;
    SET_GPR_U32(ctx, 31, 0x18BA54u);
    ctx->pc = 0x18BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA4Cu;
    // 0x18ba50: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18BA4Cu, 0x18BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA54u;
label_18ba54:
    // 0x18ba54: 0xc041294  jal         func_104A50
    ctx->pc = 0x18BA54u;
    SET_GPR_U32(ctx, 31, 0x18BA5Cu);
    ctx->pc = 0x18BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA54u;
    // 0x18ba58: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18BA54u, 0x18BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA5Cu;
label_18ba5c:
    // 0x18ba5c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18ba60: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18ba64: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18ba64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18ba68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ba68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba6c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x18ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x18ba70: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x18ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18ba74: 0x344803e8  ori         $t0, $v0, 0x3E8
    ctx->pc = 0x18ba74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1000);
    // 0x18ba78: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18BA78u;
    SET_GPR_U32(ctx, 31, 0x18BA80u);
    ctx->pc = 0x18BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA78u;
    // 0x18ba7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18BA78u, 0x18BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA80u;
label_18ba80:
    // 0x18ba80: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18ba84: 0xc041322  jal         func_104C88
    ctx->pc = 0x18BA84u;
    SET_GPR_U32(ctx, 31, 0x18BA8Cu);
    ctx->pc = 0x18BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA84u;
    // 0x18ba88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18BA84u, 0x18BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA8Cu;
label_18ba8c:
    // 0x18ba8c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18ba90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ba94: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18BA94u;
    SET_GPR_U32(ctx, 31, 0x18BA9Cu);
    ctx->pc = 0x18BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA94u;
    // 0x18ba98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18BA94u, 0x18BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA9Cu;
label_18ba9c:
    // 0x18ba9c: 0xc041298  jal         func_104A60
    ctx->pc = 0x18BA9Cu;
    SET_GPR_U32(ctx, 31, 0x18BAA4u);
    ctx->pc = 0x18BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA9Cu;
    // 0x18baa0: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18BA9Cu, 0x18BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAA4u;
label_18baa4:
    // 0x18baa4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18baa8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18baac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18bab0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18bab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18bab4: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x18bab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x18bab8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18bab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18babc: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18bac0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18bac4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18bac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18bac8: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x18bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x18bacc: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x18baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x18bad0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18bad4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18bad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18bad8: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x18bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x18badc: 0x8e050364  lw          $a1, 0x364($s0)
    ctx->pc = 0x18badcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x18bae0: 0xc041290  jal         func_104A40
    ctx->pc = 0x18BAE0u;
    SET_GPR_U32(ctx, 31, 0x18BAE8u);
    ctx->pc = 0x18BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAE0u;
    // 0x18bae4: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18BAE0u, 0x18BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAE8u;
label_18bae8:
    // 0x18bae8: 0xc041294  jal         func_104A50
    ctx->pc = 0x18BAE8u;
    SET_GPR_U32(ctx, 31, 0x18BAF0u);
    ctx->pc = 0x18BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAE8u;
    // 0x18baec: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18BAE8u, 0x18BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAF0u;
label_18baf0:
    // 0x18baf0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18baf4: 0xc041322  jal         func_104C88
    ctx->pc = 0x18BAF4u;
    SET_GPR_U32(ctx, 31, 0x18BAFCu);
    ctx->pc = 0x18BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAF4u;
    // 0x18baf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18BAF4u, 0x18BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAFCu;
label_18bafc:
    // 0x18bafc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18bb00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bb04: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18BB04u;
    SET_GPR_U32(ctx, 31, 0x18BB0Cu);
    ctx->pc = 0x18BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB04u;
    // 0x18bb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18BB04u, 0x18BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB0Cu;
label_18bb0c:
    // 0x18bb0c: 0xc041298  jal         func_104A60
    ctx->pc = 0x18BB0Cu;
    SET_GPR_U32(ctx, 31, 0x18BB14u);
    ctx->pc = 0x18BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB0Cu;
    // 0x18bb10: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18BB0Cu, 0x18BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB14u;
label_18bb14:
    // 0x18bb14: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18bb18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18bb1c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18bb20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18bb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18bb28: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18bb2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18bb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb30: 0xc0414d0  jal         func_105340
    ctx->pc = 0x18BB30u;
    SET_GPR_U32(ctx, 31, 0x18BB38u);
    ctx->pc = 0x18BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB30u;
    // 0x18bb34: 0xac22fc90  sw          $v0, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x18BB30u, 0x18BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB38u;
label_18bb38:
    // 0x18bb38: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x18bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18bb3c: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x18bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
    // 0x18bb40: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18BB40u;
    SET_GPR_U32(ctx, 31, 0x18BB48u);
    ctx->pc = 0x18BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB40u;
    // 0x18bb44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18BB40u, 0x18BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB48u;
label_18bb48:
    // 0x18bb48: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x18bb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x18bb4c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18bb50: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18bb54: 0xc041460  jal         func_105180
    ctx->pc = 0x18BB54u;
    SET_GPR_U32(ctx, 31, 0x18BB5Cu);
    ctx->pc = 0x18BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB54u;
    // 0x18bb58: 0x24c6d760  addiu       $a2, $a2, -0x28A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18BB54u, 0x18BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB5Cu;
label_18bb5c:
    // 0x18bb5c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18bb60: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18BB60u;
    SET_GPR_U32(ctx, 31, 0x18BB68u);
    ctx->pc = 0x18BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB60u;
    // 0x18bb64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18BB60u, 0x18BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB68u;
label_18bb68:
    // 0x18bb68: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x18bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x18bb6c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x18bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18bb70: 0xc041460  jal         func_105180
    ctx->pc = 0x18BB70u;
    SET_GPR_U32(ctx, 31, 0x18BB78u);
    ctx->pc = 0x18BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB70u;
    // 0x18bb74: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18BB70u, 0x18BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB78u;
label_18bb78:
    // 0x18bb78: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x18bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bb7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18bb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bb84: 0x27ab01e4  addiu       $t3, $sp, 0x1E4
    ctx->pc = 0x18bb84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x18bb88: 0x27a901d4  addiu       $t1, $sp, 0x1D4
    ctx->pc = 0x18bb88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x18bb8c: 0x27a701f4  addiu       $a3, $sp, 0x1F4
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x18bb90: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x18bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x18bb94: 0x27aa01e8  addiu       $t2, $sp, 0x1E8
    ctx->pc = 0x18bb94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x18bb98: 0x3445ff60  ori         $a1, $v0, 0xFF60
    ctx->pc = 0x18bb98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x18bb9c: 0x27a801d8  addiu       $t0, $sp, 0x1D8
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x18bba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18bba4: 0x27a601f8  addiu       $a2, $sp, 0x1F8
    ctx->pc = 0x18bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x18bba8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x18bba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x18bbac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x18bbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x18bbb0: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x18bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbb4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x18bbb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18bbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18bbbc: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x18bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
    // 0x18bbc0: 0x34434925  ori         $v1, $v0, 0x4925
    ctx->pc = 0x18bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x18bbc4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x18bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x18bbc8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x18bbc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x18bbcc: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x18bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbd0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x18bbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18bbd4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x18bbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18bbd8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x18bbdc: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x18bbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x18bbe0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x18bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x18bbe4: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x18bbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x18bbe8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x18bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x18bbec: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x18bbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x18bbf0: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x18bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbf4: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x18bbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x18bbf8: 0x46006c46  mov.s       $f17, $f13
    ctx->pc = 0x18bbf8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    // 0x18bbfc: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x18bbfcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x18bc00: 0xe6610010  swc1        $f1, 0x10($s3)
    ctx->pc = 0x18bc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x18bc04: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x18bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc08: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x18bc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x18bc0c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x18bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc10: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x18bc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x18bc14: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x18bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x18bc18: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x18bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc1c: 0xe6610020  swc1        $f1, 0x20($s3)
    ctx->pc = 0x18bc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x18bc20: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x18bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc24: 0xe6610024  swc1        $f1, 0x24($s3)
    ctx->pc = 0x18bc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x18bc28: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x18bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc2c: 0xe6610028  swc1        $f1, 0x28($s3)
    ctx->pc = 0x18bc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x18bc30: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x18bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
    // 0x18bc34: 0xc5650000  lwc1        $f5, 0x0($t3)
    ctx->pc = 0x18bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18bc38: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x18bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18bc3c: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x18bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18bc40: 0xc7a301e0  lwc1        $f3, 0x1E0($sp)
    ctx->pc = 0x18bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bc44: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x18bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc48: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x18bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bc4c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x18bc4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x18bc50: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x18bc50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18bc54: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x18bc54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[5]));
    // 0x18bc58: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x18bc58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x18bc5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18bc5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18bc60: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x18bc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x18bc64: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x18bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18bc68: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x18bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18bc6c: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x18bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18bc70: 0xc7a301d0  lwc1        $f3, 0x1D0($sp)
    ctx->pc = 0x18bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bc74: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x18bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc78: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x18bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bc7c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x18bc7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x18bc80: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x18bc80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18bc84: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x18bc84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[5]));
    // 0x18bc88: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x18bc88u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x18bc8c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18bc8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18bc90: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x18bc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x18bc94: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x18bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18bc98: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x18bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18bc9c: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x18bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18bca0: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x18bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bca4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x18bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bca8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x18bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bcac: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x18bcacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x18bcb0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x18bcb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18bcb4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x18bcb4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[5]));
    // 0x18bcb8: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x18bcb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x18bcbc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18bcbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18bcc0: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x18bcc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x18bcc4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x18bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x18bcc8: 0x8c22fde8  lw          $v0, -0x218($at)
    ctx->pc = 0x18bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x18bccc: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x18bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bcd0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x18bcd0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18bcd4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18bcd8: 0xc041646  jal         func_105918
    ctx->pc = 0x18BCD8u;
    SET_GPR_U32(ctx, 31, 0x18BCE0u);
    ctx->pc = 0x18BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCD8u;
    // 0x18bcdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105918u, 0x18BCD8u, 0x18BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCE0u;
label_18bce0:
    // 0x18bce0: 0x3c0246fa  lui         $v0, 0x46FA
    ctx->pc = 0x18bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18170 << 16));
    // 0x18bce4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x18bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x18bce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bcec: 0x0  nop
    ctx->pc = 0x18bcecu;
    // NOP
    // 0x18bcf0: 0x46140603  div.s       $f24, $f0, $f20
    ctx->pc = 0x18bcf0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x18bcf4: 0x0  nop
    ctx->pc = 0x18bcf4u;
    // NOP
    // 0x18bcf8: 0x0  nop
    ctx->pc = 0x18bcf8u;
    // NOP
    // 0x18bcfc: 0xc04150c  jal         func_105430
    ctx->pc = 0x18BCFCu;
    SET_GPR_U32(ctx, 31, 0x18BD04u);
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18BCFCu, 0x18BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD04u;
label_18bd04:
    // 0x18bd04: 0x4618c040  add.s       $f1, $f24, $f24
    ctx->pc = 0x18bd04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
    // 0x18bd08: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x18bd0c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x18bd10: 0x3c02c200  lui         $v0, 0xC200
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49664 << 16));
    // 0x18bd14: 0x344200cd  ori         $v0, $v0, 0xCD
    ctx->pc = 0x18bd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)205);
    // 0x18bd18: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x18bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x18bd1c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x18bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x18bd20: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x18bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x18bd24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18bd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bd28: 0x34c2019a  ori         $v0, $a2, 0x19A
    ctx->pc = 0x18bd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)410);
    // 0x18bd2c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x18bd30: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x18bd30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18bd34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18bd34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18bd38: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x18bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x18bd3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18bd40: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x18bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x18bd44: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x18bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x18bd48: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x18bd48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x18bd4c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x18bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x18bd50: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x18bd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x18bd54: 0x46169002  mul.s       $f0, $f18, $f22
    ctx->pc = 0x18bd54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[22]);
    // 0x18bd58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18bd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bd5c: 0x44857800  mtc1        $a1, $f15
    ctx->pc = 0x18bd5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18bd60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18bd60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18bd64: 0x46000407  neg.s       $f16, $f0
    ctx->pc = 0x18bd64u;
    ctx->f[16] = FPU_NEG_S(ctx->f[0]);
    // 0x18bd68: 0x46159002  mul.s       $f0, $f18, $f21
    ctx->pc = 0x18bd68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[21]);
    // 0x18bd6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18bd6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18bd70: 0x46010443  div.s       $f17, $f0, $f1
    ctx->pc = 0x18bd70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18bd74: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18bd74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18bd78: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18bd78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x18bd7c: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x18bd7cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x18bd80: 0x0  nop
    ctx->pc = 0x18bd80u;
    // NOP
    // 0x18bd84: 0x0  nop
    ctx->pc = 0x18bd84u;
    // NOP
    // 0x18bd88: 0xc062e18  jal         func_18B860
    ctx->pc = 0x18BD88u;
    SET_GPR_U32(ctx, 31, 0x18BD90u);
    ctx->pc = 0x18B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B860u, 0x18BD88u, 0x18BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD90u;
label_18bd90:
    // 0x18bd90: 0xc04150c  jal         func_105430
    ctx->pc = 0x18BD90u;
    SET_GPR_U32(ctx, 31, 0x18BD98u);
    ctx->pc = 0x18BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD90u;
    // 0x18bd94: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18BD90u, 0x18BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD98u;
label_18bd98:
    // 0x18bd98: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18bd9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18bda0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18bda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bda4: 0x27b200d4  addiu       $s2, $sp, 0xD4
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x18bda8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18bda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bdac: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x18bdb0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18bdb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18bdb4: 0x3c03c380  lui         $v1, 0xC380
    ctx->pc = 0x18bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50048 << 16));
    // 0x18bdb8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x18bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x18bdbc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x18bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x18bdc0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x18bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18bdc4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18bdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18bdc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bdcc: 0x0  nop
    ctx->pc = 0x18bdccu;
    // NOP
    // 0x18bdd0: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x18bdd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18bdd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18bdd8: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x18bdd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x18bddc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18bde0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x18bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x18bde4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18BDE4u;
    SET_GPR_U32(ctx, 31, 0x18BDECu);
    ctx->pc = 0x18BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BDE4u;
    // 0x18bde8: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18BDE4u, 0x18BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BDECu;
label_18bdec:
    // 0x18bdec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18bdf0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18bdf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18bdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bdf8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18bdfc: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x18bdfcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x18be00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18be00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18be04: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18be08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18be08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18be0c: 0x0  nop
    ctx->pc = 0x18be0cu;
    // NOP
    // 0x18be10: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18be10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18be14: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x18be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x18be18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18be18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18be1c: 0x0  nop
    ctx->pc = 0x18be1cu;
    // NOP
    // 0x18be20: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x18be20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18be24: 0x0  nop
    ctx->pc = 0x18be24u;
    // NOP
    // 0x18be28: 0x0  nop
    ctx->pc = 0x18be28u;
    // NOP
    // 0x18be2c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18BE2Cu;
    SET_GPR_U32(ctx, 31, 0x18BE34u);
    ctx->pc = 0x18BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE2Cu;
    // 0x18be30: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18BE2Cu, 0x18BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE34u;
label_18be34:
    // 0x18be34: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x18be34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x18be38: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x18be3c: 0xe6550000  swc1        $f21, 0x0($s2)
    ctx->pc = 0x18be3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x18be40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x18be40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18be44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18be44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18be48: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18BE48u;
    SET_GPR_U32(ctx, 31, 0x18BE50u);
    ctx->pc = 0x18BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE48u;
    // 0x18be4c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18BE48u, 0x18BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE50u;
label_18be50:
    // 0x18be50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18be54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18be54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be58: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18BE58u;
    SET_GPR_U32(ctx, 31, 0x18BE60u);
    ctx->pc = 0x18BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE58u;
    // 0x18be5c: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18BE58u, 0x18BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE60u;
label_18be60:
    // 0x18be60: 0xc7a50100  lwc1        $f5, 0x100($sp)
    ctx->pc = 0x18be60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18be64: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x18be64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x18be68: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x18be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18be6c: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x18be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x18be70: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x18be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18be74: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18be78: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x18be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18be7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18be7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be80: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x18be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18be84: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x18be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18be88: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x18be88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18be8c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x18be8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18be90: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x18be90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18be94: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x18be94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18be98: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x18be98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18be9c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x18be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x18bea0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bea4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18bea8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x18bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18beac: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x18beacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18beb0: 0xc04144e  jal         func_105138
    ctx->pc = 0x18BEB0u;
    SET_GPR_U32(ctx, 31, 0x18BEB8u);
    ctx->pc = 0x18BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEB0u;
    // 0x18beb4: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18BEB0u, 0x18BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BEB8u;
label_18beb8:
    // 0x18beb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bebc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x18bec0: 0xc04144e  jal         func_105138
    ctx->pc = 0x18BEC0u;
    SET_GPR_U32(ctx, 31, 0x18BEC8u);
    ctx->pc = 0x18BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEC0u;
    // 0x18bec4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18BEC0u, 0x18BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BEC8u;
label_18bec8:
    // 0x18bec8: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x18bec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x18becc: 0x141a02  srl         $v1, $s4, 8
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x18bed0: 0xae640040  sw          $a0, 0x40($s3)
    ctx->pc = 0x18bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 4));
    // 0x18bed4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18bed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18bed8: 0xae630044  sw          $v1, 0x44($s3)
    ctx->pc = 0x18bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
    // 0x18bedc: 0x141c02  srl         $v1, $s4, 16
    ctx->pc = 0x18bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
    // 0x18bee0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18bee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18bee4: 0x141e02  srl         $v1, $s4, 24
    ctx->pc = 0x18bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
    // 0x18bee8: 0xae640048  sw          $a0, 0x48($s3)
    ctx->pc = 0x18bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 4));
    // 0x18beec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18beecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18bef0: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x18bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x18bef4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18bef8: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x18bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18befc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x18befcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18bf00: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x18bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18bf04: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18bf04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18bf08: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x18bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18bf0c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18bf0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18bf10: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x18bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18bf14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18bf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bf18: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x18bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18bf1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18bf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF20u;
        // 0x18bf24: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BF28u;
}
