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

// Function: sub_00333EC0
// Address: 0x333ec0 - 0x334050
void sub_00333EC0_0x333ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333EC0_0x333ec0");
#endif

    switch (ctx->pc) {
        case 0x333ec0u: goto label_333ec0;
        case 0x333ec4u: goto label_333ec4;
        case 0x333ec8u: goto label_333ec8;
        case 0x333eccu: goto label_333ecc;
        case 0x333ed0u: goto label_333ed0;
        case 0x333ed4u: goto label_333ed4;
        case 0x333ed8u: goto label_333ed8;
        case 0x333edcu: goto label_333edc;
        case 0x333ee0u: goto label_333ee0;
        case 0x333ee4u: goto label_333ee4;
        case 0x333ee8u: goto label_333ee8;
        case 0x333eecu: goto label_333eec;
        case 0x333ef0u: goto label_333ef0;
        case 0x333ef4u: goto label_333ef4;
        case 0x333ef8u: goto label_333ef8;
        case 0x333efcu: goto label_333efc;
        case 0x333f00u: goto label_333f00;
        case 0x333f04u: goto label_333f04;
        case 0x333f08u: goto label_333f08;
        case 0x333f0cu: goto label_333f0c;
        case 0x333f10u: goto label_333f10;
        case 0x333f14u: goto label_333f14;
        case 0x333f18u: goto label_333f18;
        case 0x333f1cu: goto label_333f1c;
        case 0x333f20u: goto label_333f20;
        case 0x333f24u: goto label_333f24;
        case 0x333f28u: goto label_333f28;
        case 0x333f2cu: goto label_333f2c;
        case 0x333f30u: goto label_333f30;
        case 0x333f34u: goto label_333f34;
        case 0x333f38u: goto label_333f38;
        case 0x333f3cu: goto label_333f3c;
        case 0x333f40u: goto label_333f40;
        case 0x333f44u: goto label_333f44;
        case 0x333f48u: goto label_333f48;
        case 0x333f4cu: goto label_333f4c;
        case 0x333f50u: goto label_333f50;
        case 0x333f54u: goto label_333f54;
        case 0x333f58u: goto label_333f58;
        case 0x333f5cu: goto label_333f5c;
        case 0x333f60u: goto label_333f60;
        case 0x333f64u: goto label_333f64;
        case 0x333f68u: goto label_333f68;
        case 0x333f6cu: goto label_333f6c;
        case 0x333f70u: goto label_333f70;
        case 0x333f74u: goto label_333f74;
        case 0x333f78u: goto label_333f78;
        case 0x333f7cu: goto label_333f7c;
        case 0x333f80u: goto label_333f80;
        case 0x333f84u: goto label_333f84;
        case 0x333f88u: goto label_333f88;
        case 0x333f8cu: goto label_333f8c;
        case 0x333f90u: goto label_333f90;
        case 0x333f94u: goto label_333f94;
        case 0x333f98u: goto label_333f98;
        case 0x333f9cu: goto label_333f9c;
        case 0x333fa0u: goto label_333fa0;
        case 0x333fa4u: goto label_333fa4;
        case 0x333fa8u: goto label_333fa8;
        case 0x333facu: goto label_333fac;
        case 0x333fb0u: goto label_333fb0;
        case 0x333fb4u: goto label_333fb4;
        case 0x333fb8u: goto label_333fb8;
        case 0x333fbcu: goto label_333fbc;
        case 0x333fc0u: goto label_333fc0;
        case 0x333fc4u: goto label_333fc4;
        case 0x333fc8u: goto label_333fc8;
        case 0x333fccu: goto label_333fcc;
        case 0x333fd0u: goto label_333fd0;
        case 0x333fd4u: goto label_333fd4;
        case 0x333fd8u: goto label_333fd8;
        case 0x333fdcu: goto label_333fdc;
        case 0x333fe0u: goto label_333fe0;
        case 0x333fe4u: goto label_333fe4;
        case 0x333fe8u: goto label_333fe8;
        case 0x333fecu: goto label_333fec;
        case 0x333ff0u: goto label_333ff0;
        case 0x333ff4u: goto label_333ff4;
        case 0x333ff8u: goto label_333ff8;
        case 0x333ffcu: goto label_333ffc;
        case 0x334000u: goto label_334000;
        case 0x334004u: goto label_334004;
        case 0x334008u: goto label_334008;
        case 0x33400cu: goto label_33400c;
        case 0x334010u: goto label_334010;
        case 0x334014u: goto label_334014;
        case 0x334018u: goto label_334018;
        case 0x33401cu: goto label_33401c;
        case 0x334020u: goto label_334020;
        case 0x334024u: goto label_334024;
        case 0x334028u: goto label_334028;
        case 0x33402cu: goto label_33402c;
        case 0x334030u: goto label_334030;
        case 0x334034u: goto label_334034;
        case 0x334038u: goto label_334038;
        case 0x33403cu: goto label_33403c;
        case 0x334040u: goto label_334040;
        case 0x334044u: goto label_334044;
        case 0x334048u: goto label_334048;
        case 0x33404cu: goto label_33404c;
        default: break;
    }

    ctx->pc = 0x333ec0u;

label_333ec0:
    // 0x333ec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x333ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_333ec4:
    // 0x333ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x333ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_333ec8:
    // 0x333ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_333ecc:
    // 0x333ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_333ed0:
    // 0x333ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_333ed4:
    // 0x333ed4: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x333ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_333ed8:
    // 0x333ed8: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
label_333edc:
    if (ctx->pc == 0x333EDCu) {
        ctx->pc = 0x333EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ED8u;
        // 0x333edc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333EE0u;
        goto label_333ee0;
    }
    ctx->pc = 0x333ED8u;
    {
        const bool branch_taken_0x333ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ED8u;
        // 0x333edc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ed8) {
            ctx->pc = 0x334038u;
            goto label_334038;
        }
    }
    ctx->pc = 0x333EE0u;
label_333ee0:
    // 0x333ee0: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x333ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_333ee4:
    // 0x333ee4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_333ee8:
    // 0x333ee8: 0xc0b2ebc  jal         func_2CBAF0
label_333eec:
    if (ctx->pc == 0x333EECu) {
        ctx->pc = 0x333EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EE8u;
        // 0x333eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333EF0u;
        goto label_333ef0;
    }
    ctx->pc = 0x333EE8u;
    SET_GPR_U32(ctx, 31, 0x333EF0u);
    ctx->pc = 0x333EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333EE8u;
    // 0x333eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x333EE8u, 0x333EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333EF0u;
label_333ef0:
    // 0x333ef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x333ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_333ef4:
    // 0x333ef4: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_333ef8:
    if (ctx->pc == 0x333EF8u) {
        ctx->pc = 0x333EFCu;
        goto label_333efc;
    }
    ctx->pc = 0x333EF4u;
    {
        const bool branch_taken_0x333ef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ef4) {
            ctx->pc = 0x334030u;
            goto label_334030;
        }
    }
    ctx->pc = 0x333EFCu;
label_333efc:
    // 0x333efc: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x333efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_333f00:
    // 0x333f00: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x333f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_333f04:
    // 0x333f04: 0x320f809  jalr        $t9
label_333f08:
    if (ctx->pc == 0x333F08u) {
        ctx->pc = 0x333F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F04u;
        // 0x333f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333F0Cu;
        goto label_333f0c;
    }
    ctx->pc = 0x333F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333F0Cu);
        ctx->pc = 0x333F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F04u;
        // 0x333f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333F04u, 0x333F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x333F0Cu;
label_333f0c:
    // 0x333f0c: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x333f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_333f10:
    // 0x333f10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x333f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_333f14:
    // 0x333f14: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x333f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_333f18:
    // 0x333f18: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x333f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_333f1c:
    // 0x333f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x333f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333f20:
    // 0x333f20: 0x8ca50094  lw          $a1, 0x94($a1)
    ctx->pc = 0x333f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_333f24:
    // 0x333f24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_333f28:
    // 0x333f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_333f2c:
    // 0x333f2c: 0x78a302f0  lq          $v1, 0x2F0($a1)
    ctx->pc = 0x333f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 752)));
label_333f30:
    // 0x333f30: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x333f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_333f34:
    // 0x333f34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x333f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_333f38:
    // 0x333f38: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x333f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_333f3c:
    // 0x333f3c: 0xc0969c8  jal         func_25A720
label_333f40:
    if (ctx->pc == 0x333F40u) {
        ctx->pc = 0x333F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F3Cu;
        // 0x333f40: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333F44u;
        goto label_333f44;
    }
    ctx->pc = 0x333F3Cu;
    SET_GPR_U32(ctx, 31, 0x333F44u);
    ctx->pc = 0x333F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F3Cu;
    // 0x333f40: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x333F3Cu, 0x333F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F44u;
label_333f44:
    // 0x333f44: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_333f48:
    if (ctx->pc == 0x333F48u) {
        ctx->pc = 0x333F4Cu;
        goto label_333f4c;
    }
    ctx->pc = 0x333F44u;
    {
        const bool branch_taken_0x333f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333f44) {
            ctx->pc = 0x333F78u;
            goto label_333f78;
        }
    }
    ctx->pc = 0x333F4Cu;
label_333f4c:
    // 0x333f4c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x333f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_333f50:
    // 0x333f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x333f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_333f54:
    // 0x333f54: 0xc0969ac  jal         func_25A6B0
label_333f58:
    if (ctx->pc == 0x333F58u) {
        ctx->pc = 0x333F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F54u;
        // 0x333f58: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333F5Cu;
        goto label_333f5c;
    }
    ctx->pc = 0x333F54u;
    SET_GPR_U32(ctx, 31, 0x333F5Cu);
    ctx->pc = 0x333F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F54u;
    // 0x333f58: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x333F54u, 0x333F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F5Cu;
label_333f5c:
    // 0x333f5c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x333f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_333f60:
    // 0x333f60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x333f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_333f64:
    // 0x333f64: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x333f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_333f68:
    // 0x333f68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x333f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_333f6c:
    // 0x333f6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x333f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_333f70:
    // 0x333f70: 0x1000000b  b           . + 4 + (0xB << 2)
label_333f74:
    if (ctx->pc == 0x333F74u) {
        ctx->pc = 0x333F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F70u;
        // 0x333f74: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x333F78u;
        goto label_333f78;
    }
    ctx->pc = 0x333F70u;
    {
        const bool branch_taken_0x333f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F70u;
        // 0x333f74: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f70) {
            ctx->pc = 0x333FA0u;
            goto label_333fa0;
        }
    }
    ctx->pc = 0x333F78u;
label_333f78:
    // 0x333f78: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x333f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_333f7c:
    // 0x333f7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x333f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_333f80:
    // 0x333f80: 0xc0969ac  jal         func_25A6B0
label_333f84:
    if (ctx->pc == 0x333F84u) {
        ctx->pc = 0x333F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F80u;
        // 0x333f84: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333F88u;
        goto label_333f88;
    }
    ctx->pc = 0x333F80u;
    SET_GPR_U32(ctx, 31, 0x333F88u);
    ctx->pc = 0x333F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F80u;
    // 0x333f84: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x333F80u, 0x333F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F88u;
label_333f88:
    // 0x333f88: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x333f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_333f8c:
    // 0x333f8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x333f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_333f90:
    // 0x333f90: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x333f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_333f94:
    // 0x333f94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x333f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_333f98:
    // 0x333f98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x333f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333f9c:
    // 0x333f9c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x333f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_333fa0:
    // 0x333fa0: 0x3c024699  lui         $v0, 0x4699
    ctx->pc = 0x333fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18073 << 16));
label_333fa4:
    // 0x333fa4: 0x3443f800  ori         $v1, $v0, 0xF800
    ctx->pc = 0x333fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
label_333fa8:
    // 0x333fa8: 0x3c0246a7  lui         $v0, 0x46A7
    ctx->pc = 0x333fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18087 << 16));
label_333fac:
    // 0x333fac: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x333facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_333fb0:
    // 0x333fb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x333fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_333fb4:
    // 0x333fb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x333fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_333fb8:
    // 0x333fb8: 0xc096960  jal         func_25A580
label_333fbc:
    if (ctx->pc == 0x333FBCu) {
        ctx->pc = 0x333FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FB8u;
        // 0x333fbc: 0xc60e0000  lwc1        $f14, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x333FC0u;
        goto label_333fc0;
    }
    ctx->pc = 0x333FB8u;
    SET_GPR_U32(ctx, 31, 0x333FC0u);
    ctx->pc = 0x333FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FB8u;
    // 0x333fbc: 0xc60e0000  lwc1        $f14, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x333FB8u, 0x333FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FC0u;
label_333fc0:
    // 0x333fc0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x333fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_333fc4:
    // 0x333fc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x333fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_333fc8:
    // 0x333fc8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x333fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_333fcc:
    // 0x333fcc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x333fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_333fd0:
    // 0x333fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333fd4:
    // 0x333fd4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x333fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_333fd8:
    // 0x333fd8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x333fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333fdc:
    // 0x333fdc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x333fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_333fe0:
    // 0x333fe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x333fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_333fe4:
    // 0x333fe4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x333fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_333fe8:
    // 0x333fe8: 0xc0414c0  jal         func_105300
label_333fec:
    if (ctx->pc == 0x333FECu) {
        ctx->pc = 0x333FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FE8u;
        // 0x333fec: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x333FF0u;
        goto label_333ff0;
    }
    ctx->pc = 0x333FE8u;
    SET_GPR_U32(ctx, 31, 0x333FF0u);
    ctx->pc = 0x333FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FE8u;
    // 0x333fec: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x333FE8u, 0x333FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FF0u;
label_333ff0:
    // 0x333ff0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x333ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_333ff4:
    // 0x333ff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x333ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_333ff8:
    // 0x333ff8: 0xc0969ac  jal         func_25A6B0
label_333ffc:
    if (ctx->pc == 0x333FFCu) {
        ctx->pc = 0x334000u;
        goto label_334000;
    }
    ctx->pc = 0x333FF8u;
    SET_GPR_U32(ctx, 31, 0x334000u);
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x333FF8u, 0x334000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334000u;
label_334000:
    // 0x334000: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x334000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_334004:
    // 0x334004: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x334004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_334008:
    // 0x334008: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x334008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_33400c:
    // 0x33400c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334010:
    // 0x334010: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x334010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_334014:
    // 0x334014: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x334014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_334018:
    // 0x334018: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33401c:
    // 0x33401c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x33401cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_334020:
    // 0x334020: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x334020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_334024:
    // 0x334024: 0xc0bc938  jal         func_2F24E0
label_334028:
    if (ctx->pc == 0x334028u) {
        ctx->pc = 0x334028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334024u;
        // 0x334028: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33402Cu;
        goto label_33402c;
    }
    ctx->pc = 0x334024u;
    SET_GPR_U32(ctx, 31, 0x33402Cu);
    ctx->pc = 0x334028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334024u;
    // 0x334028: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F24E0u, 0x334024u, 0x33402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33402Cu;
label_33402c:
    // 0x33402c: 0xa22007d8  sb          $zero, 0x7D8($s1)
    ctx->pc = 0x33402cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2008), (uint8_t)GPR_U32(ctx, 0));
label_334030:
    // 0x334030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334034:
    // 0x334034: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x334034u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_334038:
    // 0x334038: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x334038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33403c:
    // 0x33403c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33403cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_334040:
    // 0x334040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_334044:
    // 0x334044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_334048:
    // 0x334048: 0x3e00008  jr          $ra
label_33404c:
    if (ctx->pc == 0x33404Cu) {
        ctx->pc = 0x33404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334048u;
        // 0x33404c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334050u;
        goto label_fallthrough_0x334048;
    }
    ctx->pc = 0x334048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334048u;
        // 0x33404c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x334048:
    ctx->pc = 0x334050u;
}
