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

// Function: sub_00158A20
// Address: 0x158a20 - 0x158da4
void sub_00158A20_0x158a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158A20_0x158a20");
#endif

    switch (ctx->pc) {
        case 0x158a80u: goto label_158a80;
        case 0x158a88u: goto label_158a88;
        case 0x158a94u: goto label_158a94;
        case 0x158ab8u: goto label_158ab8;
        case 0x158ac8u: goto label_158ac8;
        case 0x158ae0u: goto label_158ae0;
        case 0x158aecu: goto label_158aec;
        case 0x158af8u: goto label_158af8;
        case 0x158b08u: goto label_158b08;
        case 0x158b18u: goto label_158b18;
        case 0x158b24u: goto label_158b24;
        case 0x158b34u: goto label_158b34;
        case 0x158b44u: goto label_158b44;
        case 0x158b54u: goto label_158b54;
        case 0x158b74u: goto label_158b74;
        case 0x158b84u: goto label_158b84;
        case 0x158b98u: goto label_158b98;
        case 0x158ba8u: goto label_158ba8;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bd8u: goto label_158bd8;
        case 0x158be8u: goto label_158be8;
        case 0x158bf4u: goto label_158bf4;
        case 0x158c40u: goto label_158c40;
        case 0x158c54u: goto label_158c54;
        case 0x158c74u: goto label_158c74;
        case 0x158c88u: goto label_158c88;
        case 0x158c98u: goto label_158c98;
        case 0x158ca0u: goto label_158ca0;
        case 0x158cc4u: goto label_158cc4;
        case 0x158cfcu: goto label_158cfc;
        case 0x158d20u: goto label_158d20;
        case 0x158d8cu: goto label_158d8c;
        default: break;
    }

    ctx->pc = 0x158a20u;

    // 0x158a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158a24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a38: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x158a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x158a3c: 0x10830090  beq         $a0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x158A3Cu;
    {
        const bool branch_taken_0x158a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x158A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A3Cu;
        // 0x158a40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a3c) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158A44u;
    // 0x158a44: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x158A44u;
    {
        const bool branch_taken_0x158a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158a44) {
            ctx->pc = 0x158C38u;
            goto label_158c38;
        }
    }
    ctx->pc = 0x158A4Cu;
    // 0x158a4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158A4Cu;
    {
        const bool branch_taken_0x158a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a4c) {
            ctx->pc = 0x158A60u;
            goto label_158a60;
        }
    }
    ctx->pc = 0x158A54u;
    // 0x158a54: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x158A54u;
    {
        const bool branch_taken_0x158a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a54) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158A5Cu;
    // 0x158a5c: 0x0  nop
    ctx->pc = 0x158a5cu;
    // NOP
label_158a60:
    // 0x158a60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x158a64: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x158a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x158a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a78: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x158A78u;
    SET_GPR_U32(ctx, 31, 0x158A80u);
    ctx->pc = 0x158A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A78u;
    // 0x158a7c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x158A78u, 0x158A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A80u;
label_158a80:
    // 0x158a80: 0xc056260  jal         func_158980
    ctx->pc = 0x158A80u;
    SET_GPR_U32(ctx, 31, 0x158A88u);
    ctx->pc = 0x158A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A80u;
    // 0x158a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158980u, 0x158A80u, 0x158A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A88u;
label_158a88:
    // 0x158a88: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x158a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x158a8c: 0xc0bcd6c  jal         func_2F35B0
    ctx->pc = 0x158A8Cu;
    SET_GPR_U32(ctx, 31, 0x158A94u);
    ctx->pc = 0x158A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A8Cu;
    // 0x158a90: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35B0u, 0x158A8Cu, 0x158A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A94u;
label_158a94:
    // 0x158a94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158a98: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x158a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x158a9c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x158a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158aa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x158aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x158aa4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x158aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x158aac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158ab0: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x158ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x158ab4: 0x0  nop
    ctx->pc = 0x158ab4u;
    // NOP
label_158ab8:
    // 0x158ab8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x158ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x158abc: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x158abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x158ac0: 0xc051020  jal         func_144080
    ctx->pc = 0x158AC0u;
    SET_GPR_U32(ctx, 31, 0x158AC8u);
    ctx->pc = 0x158AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AC0u;
    // 0x158ac4: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144080u, 0x158AC0u, 0x158AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AC8u;
label_158ac8:
    // 0x158ac8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158acc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x158accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x158ad0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x158AD0u;
    {
        const bool branch_taken_0x158ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AD0u;
        // 0x158ad4: 0x27848548  addiu       $a0, $gp, -0x7AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ad0) {
            ctx->pc = 0x158AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158ab8;
        }
    }
    ctx->pc = 0x158AD8u;
    // 0x158ad8: 0xc050d68  jal         func_1435A0
    ctx->pc = 0x158AD8u;
    SET_GPR_U32(ctx, 31, 0x158AE0u);
    ctx->pc = 0x1435A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1435A0u, 0x158AD8u, 0x158AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AE0u;
label_158ae0:
    // 0x158ae0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158ae4: 0xc0ce574  jal         func_3395D0
    ctx->pc = 0x158AE4u;
    SET_GPR_U32(ctx, 31, 0x158AECu);
    ctx->pc = 0x158AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AE4u;
    // 0x158ae8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395D0u, 0x158AE4u, 0x158AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AECu;
label_158aec:
    // 0x158aec: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158af0: 0xc0ce514  jal         func_339450
    ctx->pc = 0x158AF0u;
    SET_GPR_U32(ctx, 31, 0x158AF8u);
    ctx->pc = 0x158AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AF0u;
    // 0x158af4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339450u, 0x158AF0u, 0x158AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AF8u;
label_158af8:
    // 0x158af8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x158af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x158afc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158b00: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x158B00u;
    SET_GPR_U32(ctx, 31, 0x158B08u);
    ctx->pc = 0x158B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B00u;
    // 0x158b04: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x158B00u, 0x158B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B08u;
label_158b08:
    // 0x158b08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x158b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x158b0c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x158b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x158b10: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x158B10u;
    SET_GPR_U32(ctx, 31, 0x158B18u);
    ctx->pc = 0x158B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B10u;
    // 0x158b14: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x158B10u, 0x158B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B18u;
label_158b18:
    // 0x158b18: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158b1c: 0xc0ceaf0  jal         func_33ABC0
    ctx->pc = 0x158B1Cu;
    SET_GPR_U32(ctx, 31, 0x158B24u);
    ctx->pc = 0x158B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B1Cu;
    // 0x158b20: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABC0u, 0x158B1Cu, 0x158B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B24u;
label_158b24:
    // 0x158b24: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b2c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x158B2Cu;
    SET_GPR_U32(ctx, 31, 0x158B34u);
    ctx->pc = 0x158B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B2Cu;
    // 0x158b30: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x158B2Cu, 0x158B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B34u;
label_158b34:
    // 0x158b34: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b3c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x158B3Cu;
    SET_GPR_U32(ctx, 31, 0x158B44u);
    ctx->pc = 0x158B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B3Cu;
    // 0x158b40: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x158B3Cu, 0x158B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B44u;
label_158b44:
    // 0x158b44: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158b48: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158b4c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x158B4Cu;
    SET_GPR_U32(ctx, 31, 0x158B54u);
    ctx->pc = 0x158B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B4Cu;
    // 0x158b50: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x158B4Cu, 0x158B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B54u;
label_158b54:
    // 0x158b54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158b58: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x158b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158b5c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x158b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x158b60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158B60u;
    {
        const bool branch_taken_0x158b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B60u;
        // 0x158b64: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b60) {
            ctx->pc = 0x158B88u;
            goto label_158b88;
        }
    }
    ctx->pc = 0x158B68u;
    // 0x158b68: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x158b6c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x158B6Cu;
    SET_GPR_U32(ctx, 31, 0x158B74u);
    ctx->pc = 0x158B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B6Cu;
    // 0x158b70: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x158B6Cu, 0x158B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B74u;
label_158b74:
    // 0x158b74: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158b78: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x158b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x158b7c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x158B7Cu;
    SET_GPR_U32(ctx, 31, 0x158B84u);
    ctx->pc = 0x158B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B7Cu;
    // 0x158b80: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x158B7Cu, 0x158B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B84u;
label_158b84:
    // 0x158b84: 0x0  nop
    ctx->pc = 0x158b84u;
    // NOP
label_158b88:
    // 0x158b88: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158b8c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x158b90: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x158B90u;
    SET_GPR_U32(ctx, 31, 0x158B98u);
    ctx->pc = 0x158B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B90u;
    // 0x158b94: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x158B90u, 0x158B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B98u;
label_158b98:
    // 0x158b98: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158b9c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x158b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x158ba0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x158BA0u;
    SET_GPR_U32(ctx, 31, 0x158BA8u);
    ctx->pc = 0x158BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BA0u;
    // 0x158ba4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x158BA0u, 0x158BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BA8u;
label_158ba8:
    // 0x158ba8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158bac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x158bb0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x158BB0u;
    SET_GPR_U32(ctx, 31, 0x158BB8u);
    ctx->pc = 0x158BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BB0u;
    // 0x158bb4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x158BB0u, 0x158BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BB8u;
label_158bb8:
    // 0x158bb8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158bbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x158bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x158bc0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x158BC0u;
    SET_GPR_U32(ctx, 31, 0x158BC8u);
    ctx->pc = 0x158BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BC0u;
    // 0x158bc4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x158BC0u, 0x158BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BC8u;
label_158bc8:
    // 0x158bc8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158bcc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x158bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158bd0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x158BD0u;
    SET_GPR_U32(ctx, 31, 0x158BD8u);
    ctx->pc = 0x158BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BD0u;
    // 0x158bd4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x158BD0u, 0x158BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BD8u;
label_158bd8:
    // 0x158bd8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158bdc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158be0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x158BE0u;
    SET_GPR_U32(ctx, 31, 0x158BE8u);
    ctx->pc = 0x158BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BE0u;
    // 0x158be4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x158BE0u, 0x158BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BE8u;
label_158be8:
    // 0x158be8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x158bec: 0xc051d00  jal         func_147400
    ctx->pc = 0x158BECu;
    SET_GPR_U32(ctx, 31, 0x158BF4u);
    ctx->pc = 0x158BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BECu;
    // 0x158bf0: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147400u, 0x158BECu, 0x158BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BF4u;
label_158bf4:
    // 0x158bf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158bf8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x158bfc: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x158c00: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x158c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x158c04: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x158c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x158c08: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x158c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x158c0c: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x158c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967018)));
    // 0x158c10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158c14: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x158c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x158c18: 0xac24ceb8  sw          $a0, -0x3148($at)
    ctx->pc = 0x158c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x158c1c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x158c20: 0xa023feea  sb          $v1, -0x116($at)
    ctx->pc = 0x158c20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x158c24: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x158c28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158c2c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x158C2Cu;
    {
        const bool branch_taken_0x158c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c2c) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158C34u;
    // 0x158c34: 0x0  nop
    ctx->pc = 0x158c34u;
    // NOP
label_158c38:
    // 0x158c38: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x158C38u;
    SET_GPR_U32(ctx, 31, 0x158C40u);
    ctx->pc = 0x158C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C38u;
    // 0x158c3c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x158C38u, 0x158C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C40u;
label_158c40:
    // 0x158c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158c44: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x158C44u;
    {
        const bool branch_taken_0x158c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C44u;
        // 0x158c48: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c44) {
            ctx->pc = 0x158C60u;
            goto label_158c60;
        }
    }
    ctx->pc = 0x158C4Cu;
    // 0x158c4c: 0xc0554e4  jal         func_155390
    ctx->pc = 0x158C4Cu;
    SET_GPR_U32(ctx, 31, 0x158C54u);
    ctx->pc = 0x155390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155390u, 0x158C4Cu, 0x158C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C54u;
label_158c54:
    // 0x158c54: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158C5Cu;
    // 0x158c5c: 0x0  nop
    ctx->pc = 0x158c5cu;
    // NOP
label_158c60:
    // 0x158c60: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x158c64: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x158c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x158c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158c6c: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x158C6Cu;
    SET_GPR_U32(ctx, 31, 0x158C74u);
    ctx->pc = 0x158C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C6Cu;
    // 0x158c70: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x158C6Cu, 0x158C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C74u;
label_158c74:
    // 0x158c74: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x158C74u;
    {
        const bool branch_taken_0x158c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c74) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158C7Cu;
    // 0x158c7c: 0x0  nop
    ctx->pc = 0x158c7cu;
    // NOP
label_158c80:
    // 0x158c80: 0xc05551c  jal         func_155470
    ctx->pc = 0x158C80u;
    SET_GPR_U32(ctx, 31, 0x158C88u);
    ctx->pc = 0x158C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C80u;
    // 0x158c84: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x158C80u, 0x158C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C88u;
label_158c88:
    // 0x158c88: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x158C88u;
    {
        const bool branch_taken_0x158c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C88u;
        // 0x158c8c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c88) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158C90u;
    // 0x158c90: 0xc054c88  jal         func_153220
    ctx->pc = 0x158C90u;
    SET_GPR_U32(ctx, 31, 0x158C98u);
    ctx->pc = 0x153220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153220u, 0x158C90u, 0x158C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C98u;
label_158c98:
    // 0x158c98: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x158C98u;
    SET_GPR_U32(ctx, 31, 0x158CA0u);
    ctx->pc = 0x158C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C98u;
    // 0x158c9c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x158C98u, 0x158CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CA0u;
label_158ca0:
    // 0x158ca0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158ca4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158ca8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158cac: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x158cb0: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x158cb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x158cb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158cbc: 0xc0ceb08  jal         func_33AC20
    ctx->pc = 0x158CBCu;
    SET_GPR_U32(ctx, 31, 0x158CC4u);
    ctx->pc = 0x158CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CBCu;
    // 0x158cc0: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC20u, 0x158CBCu, 0x158CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CC4u;
label_158cc4:
    // 0x158cc4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x158cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x158cc8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x158cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x158ccc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x158CCCu;
    {
        const bool branch_taken_0x158ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CCCu;
        // 0x158cd0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ccc) {
            ctx->pc = 0x158D08u;
            goto label_158d08;
        }
    }
    ctx->pc = 0x158CD4u;
    // 0x158cd4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158cd8: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x158cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x158cdc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x158cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x158ce0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x158ce4: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x158ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x158ce8: 0x24a589a0  addiu       $a1, $a1, -0x7660
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
    // 0x158cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x158cf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158cf4: 0xc04c910  jal         func_132440
    ctx->pc = 0x158CF4u;
    SET_GPR_U32(ctx, 31, 0x158CFCu);
    ctx->pc = 0x158CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CF4u;
    // 0x158cf8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132440u, 0x158CF4u, 0x158CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CFCu;
label_158cfc:
    // 0x158cfc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x158CFCu;
    {
        const bool branch_taken_0x158cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cfc) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158D04u;
    // 0x158d04: 0x0  nop
    ctx->pc = 0x158d04u;
    // NOP
label_158d08:
    // 0x158d08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x158d0c: 0x90230e70  lbu         $v1, 0xE70($at)
    ctx->pc = 0x158d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B0E70u));
    // 0x158d10: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x158D10u;
    {
        const bool branch_taken_0x158d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d10) {
            ctx->pc = 0x158D40u;
            goto label_158d40;
        }
    }
    ctx->pc = 0x158D18u;
    // 0x158d18: 0xc0d9044  jal         func_364110
    ctx->pc = 0x158D18u;
    SET_GPR_U32(ctx, 31, 0x158D20u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x158D18u, 0x158D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D20u;
label_158d20:
    // 0x158d20: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x158d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158d28: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158D28u;
    {
        const bool branch_taken_0x158d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158d28) {
            ctx->pc = 0x158D40u;
            goto label_158d40;
        }
    }
    ctx->pc = 0x158D30u;
    // 0x158d30: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x158d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158d34: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158d38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x158D38u;
    {
        const bool branch_taken_0x158d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D38u;
        // 0x158d3c: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d38) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158D40u;
label_158d40:
    // 0x158d40: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x158d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x158d44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x158D44u;
    {
        const bool branch_taken_0x158d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d44) {
            ctx->pc = 0x158D60u;
            goto label_158d60;
        }
    }
    ctx->pc = 0x158D4Cu;
    // 0x158d4c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x158d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x158d50: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158d54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x158D54u;
    {
        const bool branch_taken_0x158d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D54u;
        // 0x158d58: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d54) {
            ctx->pc = 0x158D90u;
            goto label_158d90;
        }
    }
    ctx->pc = 0x158D5Cu;
    // 0x158d5c: 0x0  nop
    ctx->pc = 0x158d5cu;
    // NOP
label_158d60:
    // 0x158d60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158d64: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x158d64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x158d68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x158d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x158d6c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158d70: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x158d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x158d74: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x158d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x158d78: 0x24a589a0  addiu       $a1, $a1, -0x7660
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
    // 0x158d7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x158d80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158d84: 0xc04c910  jal         func_132440
    ctx->pc = 0x158D84u;
    SET_GPR_U32(ctx, 31, 0x158D8Cu);
    ctx->pc = 0x158D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D84u;
    // 0x158d88: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132440u, 0x158D84u, 0x158D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D8Cu;
label_158d8c:
    // 0x158d8c: 0x0  nop
    ctx->pc = 0x158d8cu;
    // NOP
label_158d90:
    // 0x158d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x158D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D9Cu;
        // 0x158da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158DA4u;
}
