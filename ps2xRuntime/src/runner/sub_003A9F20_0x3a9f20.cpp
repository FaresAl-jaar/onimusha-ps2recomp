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

// Function: sub_003A9F20
// Address: 0x3a9f20 - 0x3aa078
void sub_003A9F20_0x3a9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9F20_0x3a9f20");
#endif

    switch (ctx->pc) {
        case 0x3a9f74u: goto label_3a9f74;
        case 0x3a9f88u: goto label_3a9f88;
        case 0x3a9fdcu: goto label_3a9fdc;
        case 0x3a9ffcu: goto label_3a9ffc;
        case 0x3aa054u: goto label_3aa054;
        case 0x3aa068u: goto label_3aa068;
        default: break;
    }

    ctx->pc = 0x3a9f20u;

    // 0x3a9f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a9f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a9f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a9f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a9f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a9f30: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x3a9f30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a9f34: 0x10a70016  beq         $a1, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A9F34u;
    {
        const bool branch_taken_0x3a9f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3A9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F34u;
        // 0x3a9f38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f34) {
            ctx->pc = 0x3A9F90u;
            goto label_3a9f90;
        }
    }
    ctx->pc = 0x3A9F3Cu;
    // 0x3a9f3c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9F3Cu;
    {
        const bool branch_taken_0x3a9f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9f3c) {
            ctx->pc = 0x3A9F50u;
            goto label_3a9f50;
        }
    }
    ctx->pc = 0x3A9F44u;
    // 0x3a9f44: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3A9F44u;
    {
        const bool branch_taken_0x3a9f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9f44) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3A9F4Cu;
    // 0x3a9f4c: 0x0  nop
    ctx->pc = 0x3a9f4cu;
    // NOP
label_3a9f50:
    // 0x3a9f50: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a9f54: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3A9F54u;
    {
        const bool branch_taken_0x3a9f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9f54) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3A9F5Cu;
    // 0x3a9f5c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a9f60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9f64: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3a9f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9f68: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a9f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a9f6c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9F6Cu;
    SET_GPR_U32(ctx, 31, 0x3A9F74u);
    ctx->pc = 0x3A9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F6Cu;
    // 0x3a9f70: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9F6Cu, 0x3A9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F74u;
label_3a9f74:
    // 0x3a9f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f78: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x3a9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3a9f7c: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x3a9f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x3a9f80: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9F80u;
    SET_GPR_U32(ctx, 31, 0x3A9F88u);
    ctx->pc = 0x3A9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F80u;
    // 0x3a9f84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9F80u, 0x3A9F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F88u;
label_3a9f88:
    // 0x3a9f88: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3A9F88u;
    {
        const bool branch_taken_0x3a9f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9f88) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3A9F90u;
label_3a9f90:
    // 0x3a9f90: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x3a9f90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9f94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a9f98: 0x24638e98  addiu       $v1, $v1, -0x7168
    ctx->pc = 0x3a9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938264));
    // 0x3a9f9c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3a9f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3a9fa0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3a9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a9fa4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a9fa8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a9fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a9fac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a9facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a9fb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a9fb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9fb8: 0x1467000b  bne         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3A9FB8u;
    {
        const bool branch_taken_0x3a9fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3a9fb8) {
            ctx->pc = 0x3A9FE8u;
            goto label_3a9fe8;
        }
    }
    ctx->pc = 0x3A9FC0u;
    // 0x3a9fc0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9fc4: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9fc8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9fcc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9fd0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a9fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9fd4: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A9FD4u;
    SET_GPR_U32(ctx, 31, 0x3A9FDCu);
    ctx->pc = 0x3A9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FD4u;
    // 0x3a9fd8: 0x82050007  lb          $a1, 0x7($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A9FD4u, 0x3A9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FDCu;
label_3a9fdc:
    // 0x3a9fdc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A9FDCu;
    {
        const bool branch_taken_0x3a9fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9fdc) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3A9FE4u;
    // 0x3a9fe4: 0x0  nop
    ctx->pc = 0x3a9fe4u;
    // NOP
label_3a9fe8:
    // 0x3a9fe8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a9fec: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A9FECu;
    {
        const bool branch_taken_0x3a9fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9FECu;
        // 0x3a9ff0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9fec) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3A9FF4u;
    // 0x3a9ff4: 0xc095150  jal         func_254540
    ctx->pc = 0x3A9FF4u;
    SET_GPR_U32(ctx, 31, 0x3A9FFCu);
    ctx->pc = 0x3A9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FF4u;
    // 0x3a9ff8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A9FF4u, 0x3A9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9FFCu;
label_3a9ffc:
    // 0x3a9ffc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A9FFCu;
    {
        const bool branch_taken_0x3a9ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ffc) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3AA004u;
    // 0x3aa004: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3aa004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3aa008: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA008u;
    {
        const bool branch_taken_0x3aa008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa008) {
            ctx->pc = 0x3AA030u;
            goto label_3aa030;
        }
    }
    ctx->pc = 0x3AA010u;
    // 0x3aa010: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa014: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aa014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa018: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3aa018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aa01c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa020: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa024: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA024u;
    {
        const bool branch_taken_0x3aa024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA024u;
        // 0x3aa028: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa024) {
            ctx->pc = 0x3AA068u;
            goto label_3aa068;
        }
    }
    ctx->pc = 0x3AA02Cu;
    // 0x3aa02c: 0x0  nop
    ctx->pc = 0x3aa02cu;
    // NOP
label_3aa030:
    // 0x3aa030: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa034: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aa034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aa038: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3aa038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3aa03c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3aa03cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa040: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3aa040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3aa044: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa048: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa04c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3AA04Cu;
    SET_GPR_U32(ctx, 31, 0x3AA054u);
    ctx->pc = 0x3AA050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA04Cu;
    // 0x3aa050: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3AA04Cu, 0x3AA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA054u;
label_3aa054:
    // 0x3aa054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa058: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x3aa058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3aa05c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa060: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA060u;
    SET_GPR_U32(ctx, 31, 0x3AA068u);
    ctx->pc = 0x3AA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA060u;
    // 0x3aa064: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA060u, 0x3AA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA068u;
label_3aa068:
    // 0x3aa068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aa068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aa06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa070: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA070u;
        // 0x3aa074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA078u;
}
