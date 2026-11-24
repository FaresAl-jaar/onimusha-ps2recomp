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

// Function: sub_003D5F80
// Address: 0x3d5f80 - 0x3d60c0
void sub_003D5F80_0x3d5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F80_0x3d5f80");
#endif

    switch (ctx->pc) {
        case 0x3d5f80u: goto label_3d5f80;
        case 0x3d5f84u: goto label_3d5f84;
        case 0x3d5f88u: goto label_3d5f88;
        case 0x3d5f8cu: goto label_3d5f8c;
        case 0x3d5f90u: goto label_3d5f90;
        case 0x3d5f94u: goto label_3d5f94;
        case 0x3d5f98u: goto label_3d5f98;
        case 0x3d5f9cu: goto label_3d5f9c;
        case 0x3d5fa0u: goto label_3d5fa0;
        case 0x3d5fa4u: goto label_3d5fa4;
        case 0x3d5fa8u: goto label_3d5fa8;
        case 0x3d5facu: goto label_3d5fac;
        case 0x3d5fb0u: goto label_3d5fb0;
        case 0x3d5fb4u: goto label_3d5fb4;
        case 0x3d5fb8u: goto label_3d5fb8;
        case 0x3d5fbcu: goto label_3d5fbc;
        case 0x3d5fc0u: goto label_3d5fc0;
        case 0x3d5fc4u: goto label_3d5fc4;
        case 0x3d5fc8u: goto label_3d5fc8;
        case 0x3d5fccu: goto label_3d5fcc;
        case 0x3d5fd0u: goto label_3d5fd0;
        case 0x3d5fd4u: goto label_3d5fd4;
        case 0x3d5fd8u: goto label_3d5fd8;
        case 0x3d5fdcu: goto label_3d5fdc;
        case 0x3d5fe0u: goto label_3d5fe0;
        case 0x3d5fe4u: goto label_3d5fe4;
        case 0x3d5fe8u: goto label_3d5fe8;
        case 0x3d5fecu: goto label_3d5fec;
        case 0x3d5ff0u: goto label_3d5ff0;
        case 0x3d5ff4u: goto label_3d5ff4;
        case 0x3d5ff8u: goto label_3d5ff8;
        case 0x3d5ffcu: goto label_3d5ffc;
        case 0x3d6000u: goto label_3d6000;
        case 0x3d6004u: goto label_3d6004;
        case 0x3d6008u: goto label_3d6008;
        case 0x3d600cu: goto label_3d600c;
        case 0x3d6010u: goto label_3d6010;
        case 0x3d6014u: goto label_3d6014;
        case 0x3d6018u: goto label_3d6018;
        case 0x3d601cu: goto label_3d601c;
        case 0x3d6020u: goto label_3d6020;
        case 0x3d6024u: goto label_3d6024;
        case 0x3d6028u: goto label_3d6028;
        case 0x3d602cu: goto label_3d602c;
        case 0x3d6030u: goto label_3d6030;
        case 0x3d6034u: goto label_3d6034;
        case 0x3d6038u: goto label_3d6038;
        case 0x3d603cu: goto label_3d603c;
        case 0x3d6040u: goto label_3d6040;
        case 0x3d6044u: goto label_3d6044;
        case 0x3d6048u: goto label_3d6048;
        case 0x3d604cu: goto label_3d604c;
        case 0x3d6050u: goto label_3d6050;
        case 0x3d6054u: goto label_3d6054;
        case 0x3d6058u: goto label_3d6058;
        case 0x3d605cu: goto label_3d605c;
        case 0x3d6060u: goto label_3d6060;
        case 0x3d6064u: goto label_3d6064;
        case 0x3d6068u: goto label_3d6068;
        case 0x3d606cu: goto label_3d606c;
        case 0x3d6070u: goto label_3d6070;
        case 0x3d6074u: goto label_3d6074;
        case 0x3d6078u: goto label_3d6078;
        case 0x3d607cu: goto label_3d607c;
        case 0x3d6080u: goto label_3d6080;
        case 0x3d6084u: goto label_3d6084;
        case 0x3d6088u: goto label_3d6088;
        case 0x3d608cu: goto label_3d608c;
        case 0x3d6090u: goto label_3d6090;
        case 0x3d6094u: goto label_3d6094;
        case 0x3d6098u: goto label_3d6098;
        case 0x3d609cu: goto label_3d609c;
        case 0x3d60a0u: goto label_3d60a0;
        case 0x3d60a4u: goto label_3d60a4;
        case 0x3d60a8u: goto label_3d60a8;
        case 0x3d60acu: goto label_3d60ac;
        case 0x3d60b0u: goto label_3d60b0;
        case 0x3d60b4u: goto label_3d60b4;
        case 0x3d60b8u: goto label_3d60b8;
        case 0x3d60bcu: goto label_3d60bc;
        default: break;
    }

    ctx->pc = 0x3d5f80u;

label_3d5f80:
    // 0x3d5f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d5f84:
    // 0x3d5f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d5f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d5f88:
    // 0x3d5f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d5f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d5f8c:
    // 0x3d5f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d5f90:
    // 0x3d5f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d5f94:
    // 0x3d5f94: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x3d5f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
label_3d5f98:
    // 0x3d5f98: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3d5f98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_3d5f9c:
    // 0x3d5f9c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3d5f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_3d5fa0:
    // 0x3d5fa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d5fa4:
    if (ctx->pc == 0x3D5FA4u) {
        ctx->pc = 0x3D5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA0u;
        // 0x3d5fa4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FA8u;
        goto label_3d5fa8;
    }
    ctx->pc = 0x3D5FA0u;
    {
        const bool branch_taken_0x3d5fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA0u;
        // 0x3d5fa4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5fa0) {
            ctx->pc = 0x3D5FB0u;
            goto label_3d5fb0;
        }
    }
    ctx->pc = 0x3D5FA8u;
label_3d5fa8:
    // 0x3d5fa8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3d5fac:
    if (ctx->pc == 0x3D5FACu) {
        ctx->pc = 0x3D5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA8u;
        // 0x3d5fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FB0u;
        goto label_3d5fb0;
    }
    ctx->pc = 0x3D5FA8u;
    {
        const bool branch_taken_0x3d5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FA8u;
        // 0x3d5fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5fa8) {
            ctx->pc = 0x3D60A8u;
            goto label_3d60a8;
        }
    }
    ctx->pc = 0x3D5FB0u;
label_3d5fb0:
    // 0x3d5fb0: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x3d5fb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
label_3d5fb4:
    // 0x3d5fb4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3d5fb4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_3d5fb8:
    // 0x3d5fb8: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x3d5fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_3d5fbc:
    // 0x3d5fbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3d5fc0:
    if (ctx->pc == 0x3D5FC0u) {
        ctx->pc = 0x3D5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FBCu;
        // 0x3d5fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FC4u;
        goto label_3d5fc4;
    }
    ctx->pc = 0x3D5FBCu;
    {
        const bool branch_taken_0x3d5fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FBCu;
        // 0x3d5fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5fbc) {
            ctx->pc = 0x3D5FD0u;
            goto label_3d5fd0;
        }
    }
    ctx->pc = 0x3D5FC4u;
label_3d5fc4:
    // 0x3d5fc4: 0x10000038  b           . + 4 + (0x38 << 2)
label_3d5fc8:
    if (ctx->pc == 0x3D5FC8u) {
        ctx->pc = 0x3D5FCCu;
        goto label_3d5fcc;
    }
    ctx->pc = 0x3D5FC4u;
    {
        const bool branch_taken_0x3d5fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fc4) {
            ctx->pc = 0x3D60A8u;
            goto label_3d60a8;
        }
    }
    ctx->pc = 0x3D5FCCu;
label_3d5fcc:
    // 0x3d5fcc: 0x0  nop
    ctx->pc = 0x3d5fccu;
    // NOP
label_3d5fd0:
    // 0x3d5fd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3d5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d5fd4:
    // 0x3d5fd4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3d5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d5fd8:
    // 0x3d5fd8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d5fdc:
    // 0x3d5fdc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3d5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d5fe0:
    // 0x3d5fe0: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x3d5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
label_3d5fe4:
    // 0x3d5fe4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3d5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3d5fe8:
    // 0x3d5fe8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3d5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d5fec:
    // 0x3d5fec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d5ff0:
    // 0x3d5ff0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d5ff4:
    // 0x3d5ff4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d5ff8:
    // 0x3d5ff8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3d5ffc:
    if (ctx->pc == 0x3D5FFCu) {
        ctx->pc = 0x3D5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FF8u;
        // 0x3d5ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6000u;
        goto label_3d6000;
    }
    ctx->pc = 0x3D5FF8u;
    {
        const bool branch_taken_0x3d5ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FF8u;
        // 0x3d5ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ff8) {
            ctx->pc = 0x3D6008u;
            goto label_3d6008;
        }
    }
    ctx->pc = 0x3D6000u;
label_3d6000:
    // 0x3d6000: 0x10000029  b           . + 4 + (0x29 << 2)
label_3d6004:
    if (ctx->pc == 0x3D6004u) {
        ctx->pc = 0x3D6008u;
        goto label_3d6008;
    }
    ctx->pc = 0x3D6000u;
    {
        const bool branch_taken_0x3d6000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6000) {
            ctx->pc = 0x3D60A8u;
            goto label_3d60a8;
        }
    }
    ctx->pc = 0x3D6008u;
label_3d6008:
    // 0x3d6008: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3d6008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3d600c:
    // 0x3d600c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3d600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d6010:
    // 0x3d6010: 0xc0b2ebc  jal         func_2CBAF0
label_3d6014:
    if (ctx->pc == 0x3D6014u) {
        ctx->pc = 0x3D6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6010u;
        // 0x3d6014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6018u;
        goto label_3d6018;
    }
    ctx->pc = 0x3D6010u;
    SET_GPR_U32(ctx, 31, 0x3D6018u);
    ctx->pc = 0x3D6014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6010u;
    // 0x3d6014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3D6010u, 0x3D6018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6018u;
label_3d6018:
    // 0x3d6018: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d6018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d601c:
    // 0x3d601c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_3d6020:
    if (ctx->pc == 0x3D6020u) {
        ctx->pc = 0x3D6024u;
        goto label_3d6024;
    }
    ctx->pc = 0x3D601Cu;
    {
        const bool branch_taken_0x3d601c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d601c) {
            ctx->pc = 0x3D6030u;
            goto label_3d6030;
        }
    }
    ctx->pc = 0x3D6024u;
label_3d6024:
    // 0x3d6024: 0x10000020  b           . + 4 + (0x20 << 2)
label_3d6028:
    if (ctx->pc == 0x3D6028u) {
        ctx->pc = 0x3D6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6024u;
        // 0x3d6028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D602Cu;
        goto label_3d602c;
    }
    ctx->pc = 0x3D6024u;
    {
        const bool branch_taken_0x3d6024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6024u;
        // 0x3d6028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6024) {
            ctx->pc = 0x3D60A8u;
            goto label_3d60a8;
        }
    }
    ctx->pc = 0x3D602Cu;
label_3d602c:
    // 0x3d602c: 0x0  nop
    ctx->pc = 0x3d602cu;
    // NOP
label_3d6030:
    // 0x3d6030: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x3d6030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_3d6034:
    // 0x3d6034: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3d6034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3d6038:
    // 0x3d6038: 0x320f809  jalr        $t9
label_3d603c:
    if (ctx->pc == 0x3D603Cu) {
        ctx->pc = 0x3D603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6038u;
        // 0x3d603c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6040u;
        goto label_3d6040;
    }
    ctx->pc = 0x3D6038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D6040u);
        ctx->pc = 0x3D603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6038u;
        // 0x3d603c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6038u, 0x3D6040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6040u;
label_3d6040:
    // 0x3d6040: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3d6040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d6044:
    // 0x3d6044: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x3d6044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_3d6048:
    // 0x3d6048: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3d6048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d604c:
    // 0x3d604c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d604cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6050:
    // 0x3d6050: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d6050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d6054:
    // 0x3d6054: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3d6054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d6058:
    // 0x3d6058: 0x24424430  addiu       $v0, $v0, 0x4430
    ctx->pc = 0x3d6058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17456));
label_3d605c:
    // 0x3d605c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d6060:
    // 0x3d6060: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3d6060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3d6064:
    // 0x3d6064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d6064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6068:
    // 0x3d6068: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3d6068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d606c:
    // 0x3d606c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d6070:
    // 0x3d6070: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x3d6070u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3d6074:
    // 0x3d6074: 0x26440530  addiu       $a0, $s2, 0x530
    ctx->pc = 0x3d6074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
label_3d6078:
    // 0x3d6078: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3d6078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d607c:
    // 0x3d607c: 0x7e490020  sq          $t1, 0x20($s2)
    ctx->pc = 0x3d607cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 9));
label_3d6080:
    // 0x3d6080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d6080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6084:
    // 0x3d6084: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x3d6084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_3d6088:
    // 0x3d6088: 0xc0b273c  jal         func_2C9CF0
label_3d608c:
    if (ctx->pc == 0x3D608Cu) {
        ctx->pc = 0x3D608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6088u;
        // 0x3d608c: 0xa2420640  sb          $v0, 0x640($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1600), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6090u;
        goto label_3d6090;
    }
    ctx->pc = 0x3D6088u;
    SET_GPR_U32(ctx, 31, 0x3D6090u);
    ctx->pc = 0x3D608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6088u;
    // 0x3d608c: 0xa2420640  sb          $v0, 0x640($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1600), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x3D6088u, 0x3D6090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6090u;
label_3d6090:
    // 0x3d6090: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d6090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d6094:
    // 0x3d6094: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d6098:
    // 0x3d6098: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d609c:
    // 0x3d609c: 0xc0a9198  jal         func_2A4660
label_3d60a0:
    if (ctx->pc == 0x3D60A0u) {
        ctx->pc = 0x3D60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D609Cu;
        // 0x3d60a0: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60A4u;
        goto label_3d60a4;
    }
    ctx->pc = 0x3D609Cu;
    SET_GPR_U32(ctx, 31, 0x3D60A4u);
    ctx->pc = 0x3D60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D609Cu;
    // 0x3d60a0: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4660u, 0x3D609Cu, 0x3D60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60A4u;
label_3d60a4:
    // 0x3d60a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d60a8:
    // 0x3d60a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d60a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d60ac:
    // 0x3d60ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d60acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d60b0:
    // 0x3d60b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d60b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d60b4:
    // 0x3d60b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d60b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d60b8:
    // 0x3d60b8: 0x3e00008  jr          $ra
label_3d60bc:
    if (ctx->pc == 0x3D60BCu) {
        ctx->pc = 0x3D60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60B8u;
        // 0x3d60bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60C0u;
        goto label_fallthrough_0x3d60b8;
    }
    ctx->pc = 0x3D60B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60B8u;
        // 0x3d60bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D60B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d60b8:
    ctx->pc = 0x3D60C0u;
}
