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

// Function: sub_00253F40
// Address: 0x253f40 - 0x25405c
void sub_00253F40_0x253f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F40_0x253f40");
#endif

    switch (ctx->pc) {
        case 0x253f54u: goto label_253f54;
        case 0x253f80u: goto label_253f80;
        case 0x253facu: goto label_253fac;
        case 0x253fbcu: goto label_253fbc;
        case 0x253fe4u: goto label_253fe4;
        case 0x254038u: goto label_254038;
        case 0x254048u: goto label_254048;
        default: break;
    }

    ctx->pc = 0x253f40u;

    // 0x253f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253f4c: 0xc09547c  jal         func_2551F0
    ctx->pc = 0x253F4Cu;
    SET_GPR_U32(ctx, 31, 0x253F54u);
    ctx->pc = 0x253F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F4Cu;
    // 0x253f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2551F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2551F0u, 0x253F4Cu, 0x253F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F54u;
label_253f54:
    // 0x253f54: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x253f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x253f58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x253f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x253f5c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x253f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x253f60: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x253f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x253f64: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x253f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x253f68: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x253f6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253f70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253F70u;
    {
        const bool branch_taken_0x253f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F70u;
        // 0x253f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f70) {
            ctx->pc = 0x253FB0u;
            goto label_253fb0;
        }
    }
    ctx->pc = 0x253F78u;
    // 0x253f78: 0xc097984  jal         func_25E610
    ctx->pc = 0x253F78u;
    SET_GPR_U32(ctx, 31, 0x253F80u);
    ctx->pc = 0x25E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E610u, 0x253F78u, 0x253F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F80u;
label_253f80:
    // 0x253f80: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x253f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x253f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253F88u;
    {
        const bool branch_taken_0x253f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253f88) {
            ctx->pc = 0x253FA0u;
            goto label_253fa0;
        }
    }
    ctx->pc = 0x253F90u;
    // 0x253f90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x253F90u;
    {
        const bool branch_taken_0x253f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253f90) {
            ctx->pc = 0x253FB0u;
            goto label_253fb0;
        }
    }
    ctx->pc = 0x253F98u;
    // 0x253f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253F98u;
    {
        const bool branch_taken_0x253f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253f98) {
            ctx->pc = 0x253FB0u;
            goto label_253fb0;
        }
    }
    ctx->pc = 0x253FA0u;
label_253fa0:
    // 0x253fa0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x253fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x253fa4: 0xc095840  jal         func_256100
    ctx->pc = 0x253FA4u;
    SET_GPR_U32(ctx, 31, 0x253FACu);
    ctx->pc = 0x253FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FA4u;
    // 0x253fa8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256100u, 0x253FA4u, 0x253FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FACu;
label_253fac:
    // 0x253fac: 0x0  nop
    ctx->pc = 0x253facu;
    // NOP
label_253fb0:
    // 0x253fb0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x253fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x253fb4: 0xc0ca5f8  jal         func_3297E0
    ctx->pc = 0x253FB4u;
    SET_GPR_U32(ctx, 31, 0x253FBCu);
    ctx->pc = 0x253FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FB4u;
    // 0x253fb8: 0x24840e70  addiu       $a0, $a0, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297E0u, 0x253FB4u, 0x253FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FBCu;
label_253fbc:
    // 0x253fbc: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x253fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x253fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253fc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253FC4u;
    {
        const bool branch_taken_0x253fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x253fc4) {
            ctx->pc = 0x253FE8u;
            goto label_253fe8;
        }
    }
    ctx->pc = 0x253FCCu;
    // 0x253fcc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253fd0: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x253fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253FD4u;
    {
        const bool branch_taken_0x253fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FD4u;
        // 0x253fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fd4) {
            ctx->pc = 0x253FE8u;
            goto label_253fe8;
        }
    }
    ctx->pc = 0x253FDCu;
    // 0x253fdc: 0xc095414  jal         func_255050
    ctx->pc = 0x253FDCu;
    SET_GPR_U32(ctx, 31, 0x253FE4u);
    ctx->pc = 0x255050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255050u, 0x253FDCu, 0x253FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FE4u;
label_253fe4:
    // 0x253fe4: 0x0  nop
    ctx->pc = 0x253fe4u;
    // NOP
label_253fe8:
    // 0x253fe8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x253fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x253fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253ff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253FF0u;
    {
        const bool branch_taken_0x253ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FF0u;
        // 0x253ff4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ff0) {
            ctx->pc = 0x254000u;
            goto label_254000;
        }
    }
    ctx->pc = 0x253FF8u;
    // 0x253ff8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x253ff8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x253ffc: 0x0  nop
    ctx->pc = 0x253ffcu;
    // NOP
label_254000:
    // 0x254000: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x254000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x254004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x254004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254008: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x254008u;
    {
        const bool branch_taken_0x254008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x254008) {
            ctx->pc = 0x254028u;
            goto label_254028;
        }
    }
    ctx->pc = 0x254010u;
    // 0x254010: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x254010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x254014: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x254014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254018: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x254018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x25401c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25401Cu;
    {
        const bool branch_taken_0x25401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25401c) {
            ctx->pc = 0x254028u;
            goto label_254028;
        }
    }
    ctx->pc = 0x254024u;
    // 0x254024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x254024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_254028:
    // 0x254028: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254028u;
    {
        const bool branch_taken_0x254028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x254028) {
            ctx->pc = 0x254038u;
            goto label_254038;
        }
    }
    ctx->pc = 0x254030u;
    // 0x254030: 0xc0979b4  jal         func_25E6D0
    ctx->pc = 0x254030u;
    SET_GPR_U32(ctx, 31, 0x254038u);
    ctx->pc = 0x254034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254030u;
    // 0x254034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E6D0u, 0x254030u, 0x254038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254038u;
label_254038:
    // 0x254038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25403c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254040: 0xc095130  jal         func_2544C0
    ctx->pc = 0x254040u;
    SET_GPR_U32(ctx, 31, 0x254048u);
    ctx->pc = 0x254044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254040u;
    // 0x254044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x254040u, 0x254048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254048u;
label_254048:
    // 0x254048: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x254048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x25404c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254054: 0x3e00008  jr          $ra
    ctx->pc = 0x254054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254054u;
        // 0x254058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25405Cu;
}
