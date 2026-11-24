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

// Function: sub_00256A10
// Address: 0x256a10 - 0x256b74
void sub_00256A10_0x256a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256A10_0x256a10");
#endif

    switch (ctx->pc) {
        case 0x256a3cu: goto label_256a3c;
        case 0x256a5cu: goto label_256a5c;
        case 0x256a84u: goto label_256a84;
        case 0x256ae8u: goto label_256ae8;
        case 0x256b08u: goto label_256b08;
        case 0x256b34u: goto label_256b34;
        default: break;
    }

    ctx->pc = 0x256a10u;

    // 0x256a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256a1c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256a20: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x256a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256a24: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x256a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x256a28: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x256A28u;
    {
        const bool branch_taken_0x256a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A28u;
        // 0x256a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a28) {
            ctx->pc = 0x256B40u;
            goto label_256b40;
        }
    }
    ctx->pc = 0x256A30u;
    // 0x256a30: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x256a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x256a34: 0xc0ca5c0  jal         func_329700
    ctx->pc = 0x256A34u;
    SET_GPR_U32(ctx, 31, 0x256A3Cu);
    ctx->pc = 0x256A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A34u;
    // 0x256a38: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329700u, 0x256A34u, 0x256A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A3Cu;
label_256a3c:
    // 0x256a3c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a44: 0x94490024  lhu         $t1, 0x24($v0)
    ctx->pc = 0x256a44u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x256a48: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x256a48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x256a4c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x256a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256a50: 0x8448001a  lh          $t0, 0x1A($v0)
    ctx->pc = 0x256a50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x256a54: 0xc095e0c  jal         func_257830
    ctx->pc = 0x256A54u;
    SET_GPR_U32(ctx, 31, 0x256A5Cu);
    ctx->pc = 0x256A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A54u;
    // 0x256a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x256A54u, 0x256A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A5Cu;
label_256a5c:
    // 0x256a5c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a64: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x256a64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x256a68: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256a6c: 0x94490028  lhu         $t1, 0x28($v0)
    ctx->pc = 0x256a6cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x256a70: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x256a70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x256a74: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x256a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256a78: 0x8448001c  lh          $t0, 0x1C($v0)
    ctx->pc = 0x256a78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x256a7c: 0xc095e30  jal         func_2578C0
    ctx->pc = 0x256A7Cu;
    SET_GPR_U32(ctx, 31, 0x256A84u);
    ctx->pc = 0x256A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A7Cu;
    // 0x256a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578C0u, 0x256A7Cu, 0x256A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A84u;
label_256a84:
    // 0x256a84: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256a88: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x256a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x256a8c: 0x24840b80  addiu       $a0, $a0, 0xB80
    ctx->pc = 0x256a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    // 0x256a90: 0x2403128e  addiu       $v1, $zero, 0x128E
    ctx->pc = 0x256a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4750));
    // 0x256a94: 0xa4a20020  sh          $v0, 0x20($a1)
    ctx->pc = 0x256a94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x256a98: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x256a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256a9c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x256a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x256aa0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256aa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x256aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x256aa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x256aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256aac: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x256aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256ab0: 0xa4a2009c  sh          $v0, 0x9C($a1)
    ctx->pc = 0x256ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x256ab4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256ab8: 0x9444009c  lhu         $a0, 0x9C($v0)
    ctx->pc = 0x256ab8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x256abc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x256ABCu;
    {
        const bool branch_taken_0x256abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x256abc) {
            ctx->pc = 0x256B00u;
            goto label_256b00;
        }
    }
    ctx->pc = 0x256AC4u;
    // 0x256ac4: 0x2402128b  addiu       $v0, $zero, 0x128B
    ctx->pc = 0x256ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4747));
    // 0x256ac8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256AC8u;
    {
        const bool branch_taken_0x256ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x256ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AC8u;
        // 0x256acc: 0x24021282  addiu       $v0, $zero, 0x1282 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4738));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ac8) {
            ctx->pc = 0x256AE0u;
            goto label_256ae0;
        }
    }
    ctx->pc = 0x256AD0u;
    // 0x256ad0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256AD0u;
    {
        const bool branch_taken_0x256ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x256ad0) {
            ctx->pc = 0x256AE0u;
            goto label_256ae0;
        }
    }
    ctx->pc = 0x256AD8u;
    // 0x256ad8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x256AD8u;
    {
        const bool branch_taken_0x256ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ad8) {
            ctx->pc = 0x256B20u;
            goto label_256b20;
        }
    }
    ctx->pc = 0x256AE0u;
label_256ae0:
    // 0x256ae0: 0xc0d8fa0  jal         func_363E80
    ctx->pc = 0x256AE0u;
    SET_GPR_U32(ctx, 31, 0x256AE8u);
    ctx->pc = 0x363E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E80u, 0x256AE0u, 0x256AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AE8u;
label_256ae8:
    // 0x256ae8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256AE8u;
    {
        const bool branch_taken_0x256ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256ae8) {
            ctx->pc = 0x256B20u;
            goto label_256b20;
        }
    }
    ctx->pc = 0x256AF0u;
    // 0x256af0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256af4: 0x2403128e  addiu       $v1, $zero, 0x128E
    ctx->pc = 0x256af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4750));
    // 0x256af8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256AF8u;
    {
        const bool branch_taken_0x256af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AF8u;
        // 0x256afc: 0xa443009c  sh          $v1, 0x9C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 156), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256af8) {
            ctx->pc = 0x256B20u;
            goto label_256b20;
        }
    }
    ctx->pc = 0x256B00u;
label_256b00:
    // 0x256b00: 0xc0d8fa0  jal         func_363E80
    ctx->pc = 0x256B00u;
    SET_GPR_U32(ctx, 31, 0x256B08u);
    ctx->pc = 0x363E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E80u, 0x256B00u, 0x256B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B08u;
label_256b08:
    // 0x256b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256B08u;
    {
        const bool branch_taken_0x256b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b08) {
            ctx->pc = 0x256B20u;
            goto label_256b20;
        }
    }
    ctx->pc = 0x256B10u;
    // 0x256b10: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256b14: 0x24031282  addiu       $v1, $zero, 0x1282
    ctx->pc = 0x256b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4738));
    // 0x256b18: 0xa443009c  sh          $v1, 0x9C($v0)
    ctx->pc = 0x256b18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 156), (uint16_t)GPR_U32(ctx, 3));
    // 0x256b1c: 0x0  nop
    ctx->pc = 0x256b1cu;
    // NOP
label_256b20:
    // 0x256b20: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256b24: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x256b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x256b28: 0x9445009c  lhu         $a1, 0x9C($v0)
    ctx->pc = 0x256b28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x256b2c: 0xc0ca68c  jal         func_329A30
    ctx->pc = 0x256B2Cu;
    SET_GPR_U32(ctx, 31, 0x256B34u);
    ctx->pc = 0x256B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B2Cu;
    // 0x256b30: 0x24840e70  addiu       $a0, $a0, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A30u, 0x256B2Cu, 0x256B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B34u;
label_256b34:
    // 0x256b34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x256B34u;
    {
        const bool branch_taken_0x256b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b34) {
            ctx->pc = 0x256B60u;
            goto label_256b60;
        }
    }
    ctx->pc = 0x256B3Cu;
    // 0x256b3c: 0x0  nop
    ctx->pc = 0x256b3cu;
    // NOP
label_256b40:
    // 0x256b40: 0x3062fff7  andi        $v0, $v1, 0xFFF7
    ctx->pc = 0x256b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x256b44: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x256b44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256b48: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256b4c: 0xa440009c  sh          $zero, 0x9C($v0)
    ctx->pc = 0x256b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 156), (uint16_t)GPR_U32(ctx, 0));
    // 0x256b50: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256b54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x256b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x256b58: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x256b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x256b5c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x256b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_256b60:
    // 0x256b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x256B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B6Cu;
        // 0x256b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256B74u;
}
