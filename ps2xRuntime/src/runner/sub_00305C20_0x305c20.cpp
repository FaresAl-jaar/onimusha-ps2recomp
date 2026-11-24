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

// Function: sub_00305C20
// Address: 0x305c20 - 0x305dc0
void sub_00305C20_0x305c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305C20_0x305c20");
#endif

    switch (ctx->pc) {
        case 0x305c88u: goto label_305c88;
        case 0x305ca4u: goto label_305ca4;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cd4u: goto label_305cd4;
        case 0x305d10u: goto label_305d10;
        default: break;
    }

    ctx->pc = 0x305c20u;

    // 0x305c20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x305c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x305c24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x305c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x305c28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x305c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x305c2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x305c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x305c30: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x305c30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x305c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x305c38: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x305c38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x305c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x305c40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x305c40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x305c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x305c48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x305c48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x305c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x305c50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x305c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x305c58: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x305c58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x305c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305c64: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x305c64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x305c68: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x305c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c6c: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x305c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x305c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x305c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305c78: 0x240705b0  addiu       $a3, $zero, 0x5B0
    ctx->pc = 0x305c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x305c7c: 0x25085bb0  addiu       $t0, $t0, 0x5BB0
    ctx->pc = 0x305c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23472));
    // 0x305c80: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x305C80u;
    SET_GPR_U32(ctx, 31, 0x305C88u);
    ctx->pc = 0x305C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C80u;
    // 0x305c84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x305C80u, 0x305C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C88u;
label_305c88:
    // 0x305c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c8c: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x305C8Cu;
    {
        const bool branch_taken_0x305c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C8Cu;
        // 0x305c90: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c8c) {
            ctx->pc = 0x305D88u;
            goto label_305d88;
        }
    }
    ctx->pc = 0x305C94u;
    // 0x305c94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x305c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x305c98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x305c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c9c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x305C9Cu;
    SET_GPR_U32(ctx, 31, 0x305CA4u);
    ctx->pc = 0x305CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C9Cu;
    // 0x305ca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x305C9Cu, 0x305CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CA4u;
label_305ca4:
    // 0x305ca4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x305ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x305ca8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x305ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x305cac: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x305CACu;
    SET_GPR_U32(ctx, 31, 0x305CB4u);
    ctx->pc = 0x305CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CACu;
    // 0x305cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x305CACu, 0x305CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CB4u;
label_305cb4:
    // 0x305cb4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x305cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cb8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x305cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cbc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x305cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cc4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x305cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x305cc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x305cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305ccc: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x305CCCu;
    SET_GPR_U32(ctx, 31, 0x305CD4u);
    ctx->pc = 0x305CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CCCu;
    // 0x305cd0: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x305CCCu, 0x305CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CD4u;
label_305cd4:
    // 0x305cd4: 0x93a600f0  lbu         $a2, 0xF0($sp)
    ctx->pc = 0x305cd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x305cd8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x305cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x305cdc: 0x24a5c7b0  addiu       $a1, $a1, -0x3850
    ctx->pc = 0x305cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952880));
    // 0x305ce0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x305ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x305ce4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x305cecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x305cf0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x305cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x305cf4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x305cf8: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x305cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x305cfc: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x305cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x305d00: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x305d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x305d04: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x305d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x305d08: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x305D08u;
    SET_GPR_U32(ctx, 31, 0x305D10u);
    ctx->pc = 0x305D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D08u;
    // 0x305d0c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x305D08u, 0x305D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D10u;
label_305d10:
    // 0x305d10: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x305d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x305d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x305d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x305d18: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x305d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
    // 0x305d1c: 0xa21705ac  sb          $s7, 0x5AC($s0)
    ctx->pc = 0x305d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1452), (uint8_t)GPR_U32(ctx, 23));
    // 0x305d20: 0xae0205a8  sw          $v0, 0x5A8($s0)
    ctx->pc = 0x305d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1448), GPR_U32(ctx, 2));
    // 0x305d24: 0xa21e05ad  sb          $fp, 0x5AD($s0)
    ctx->pc = 0x305d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1453), (uint8_t)GPR_U32(ctx, 30));
    // 0x305d28: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x305d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x305d2c: 0xa20205ae  sb          $v0, 0x5AE($s0)
    ctx->pc = 0x305d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1454), (uint8_t)GPR_U32(ctx, 2));
    // 0x305d30: 0xa21205af  sb          $s2, 0x5AF($s0)
    ctx->pc = 0x305d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1455), (uint8_t)GPR_U32(ctx, 18));
    // 0x305d34: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x305D34u;
    {
        const bool branch_taken_0x305d34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D34u;
        // 0x305d38: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d34) {
            ctx->pc = 0x305D48u;
            goto label_305d48;
        }
    }
    ctx->pc = 0x305D3Cu;
    // 0x305d3c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x305d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x305d40: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x305d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x305d44: 0x0  nop
    ctx->pc = 0x305d44u;
    // NOP
label_305d48:
    // 0x305d48: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x305d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x305d4c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305d50: 0x7e020590  sq          $v0, 0x590($s0)
    ctx->pc = 0x305d50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), GPR_VEC(ctx, 2));
    // 0x305d54: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x305d54u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x305d58: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x305d58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x305d5c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305d60: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x305d60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x305d64: 0x7e020560  sq          $v0, 0x560($s0)
    ctx->pc = 0x305d64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1376), GPR_VEC(ctx, 2));
    // 0x305d68: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305d6c: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x305d6cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x305d70: 0x7e020570  sq          $v0, 0x570($s0)
    ctx->pc = 0x305d70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1392), GPR_VEC(ctx, 2));
    // 0x305d74: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305d78: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x305d78u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x305d7c: 0x7e020580  sq          $v0, 0x580($s0)
    ctx->pc = 0x305d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), GPR_VEC(ctx, 2));
    // 0x305d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305D80u;
    {
        const bool branch_taken_0x305d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D80u;
        // 0x305d84: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d80) {
            ctx->pc = 0x305D90u;
            goto label_305d90;
        }
    }
    ctx->pc = 0x305D88u;
label_305d88:
    // 0x305d88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x305d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d8c: 0x0  nop
    ctx->pc = 0x305d8cu;
    // NOP
label_305d90:
    // 0x305d90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x305d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305d94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x305d94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305d98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x305d98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305d9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x305d9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305da0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x305da0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305da4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x305da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305da8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x305da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x305dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305db8: 0x3e00008  jr          $ra
    ctx->pc = 0x305DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DB8u;
        // 0x305dbc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305DC0u;
}
