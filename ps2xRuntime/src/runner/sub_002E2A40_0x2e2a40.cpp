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

// Function: sub_002E2A40
// Address: 0x2e2a40 - 0x2e2bac
void sub_002E2A40_0x2e2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2A40_0x2e2a40");
#endif

    switch (ctx->pc) {
        case 0x2e2a5cu: goto label_2e2a5c;
        case 0x2e2b08u: goto label_2e2b08;
        case 0x2e2b38u: goto label_2e2b38;
        default: break;
    }

    ctx->pc = 0x2e2a40u;

    // 0x2e2a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e2a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2a4c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2e2a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2e2a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a54: 0xc0b8aec  jal         func_2E2BB0
    ctx->pc = 0x2E2A54u;
    SET_GPR_U32(ctx, 31, 0x2E2A5Cu);
    ctx->pc = 0x2E2A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A54u;
    // 0x2e2a58: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2BB0u, 0x2E2A54u, 0x2E2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A5Cu;
label_2e2a5c:
    // 0x2e2a5c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x2e2a5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2a60: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2e2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e2a64: 0x30050001  andi        $a1, $zero, 0x1
    ctx->pc = 0x2e2a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x2e2a68: 0x1a3c  dsll32      $v1, $zero, 8
    ctx->pc = 0x2e2a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 8));
    // 0x2e2a6c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2e2a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2e2a70: 0x240cfffd  addiu       $t4, $zero, -0x3
    ctx->pc = 0x2e2a70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2a74: 0x640d0002  daddiu      $t5, $zero, 0x2
    ctx->pc = 0x2e2a74u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x2e2a78: 0x240afffb  addiu       $t2, $zero, -0x5
    ctx->pc = 0x2e2a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2e2a7c: 0x640b0004  daddiu      $t3, $zero, 0x4
    ctx->pc = 0x2e2a7cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2e2a80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2e2a80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2a84: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x2e2a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2e2a88: 0x548c0  sll         $t1, $a1, 3
    ctx->pc = 0x2e2a88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2e2a8c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2e2a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e2a90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2a94: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e2a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e2a98: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2e2a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e2a9c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2e2a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2aa0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e2aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e2aa4: 0x920e0000  lbu         $t6, 0x0($s0)
    ctx->pc = 0x2e2aa4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2aa8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2e2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e2aac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2e2aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2ab0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2ab4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e2ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2abc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e2abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e2ac0: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x2e2ac0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x2e2ac4: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x2e2ac4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x2e2ac8: 0xa20c0000  sb          $t4, 0x0($s0)
    ctx->pc = 0x2e2ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x2e2acc: 0x920c0000  lbu         $t4, 0x0($s0)
    ctx->pc = 0x2e2accu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2ad0: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x2e2ad0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x2e2ad4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x2e2ad4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x2e2ad8: 0xa20a0000  sb          $t2, 0x0($s0)
    ctx->pc = 0x2e2ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e2adc: 0xa60f0004  sh          $t7, 0x4($s0)
    ctx->pc = 0x2e2adcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 15));
    // 0x2e2ae0: 0x920a0000  lbu         $t2, 0x0($s0)
    ctx->pc = 0x2e2ae0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2ae4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x2e2ae4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x2e2ae8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2e2ae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2e2aec: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x2e2aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e2af0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2e2af0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2af4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2e2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2e2af8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2e2af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2e2afc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e2b00: 0xc049590  jal         func_125640
    ctx->pc = 0x2E2B00u;
    SET_GPR_U32(ctx, 31, 0x2E2B08u);
    ctx->pc = 0x2E2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B00u;
    // 0x2e2b04: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E2B00u, 0x2E2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B08u;
label_2e2b08:
    // 0x2e2b08: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2e2b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e2b0c: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x2e2b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e2b10: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e2b10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2b14: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E2B14u;
    {
        const bool branch_taken_0x2e2b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B14u;
        // 0x2e2b18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b14) {
            ctx->pc = 0x2E2B98u;
            goto label_2e2b98;
        }
    }
    ctx->pc = 0x2E2B1Cu;
    // 0x2e2b1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e2b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e2b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2b24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2e2b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2b28: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2e2b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e2b2c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2e2b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e2b30: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x2e2b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2e2b34: 0x0  nop
    ctx->pc = 0x2e2b34u;
    // NOP
label_2e2b38:
    // 0x2e2b38: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x2e2b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e2b3c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2e2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e2b40: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2e2b40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2b44: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x2e2b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2e2b48: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E2B48u;
    {
        const bool branch_taken_0x2e2b48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b48) {
            ctx->pc = 0x2E2B80u;
            goto label_2e2b80;
        }
    }
    ctx->pc = 0x2E2B50u;
    // 0x2e2b50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2b54: 0x894004  sllv        $t0, $t1, $a0
    ctx->pc = 0x2e2b54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e2b58: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x2e2b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e2b5c: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x2e2b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x2e2b60: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2e2b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2e2b64: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2e2b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2e2b68: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x2e2b68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x2e2b6c: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x2e2b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x2e2b70: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e2b70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e2b74: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2e2b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2e2b78: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2e2b7c: 0x0  nop
    ctx->pc = 0x2e2b7cu;
    // NOP
label_2e2b80:
    // 0x2e2b80: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e2b84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e2b88: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x2e2b88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e2b8c: 0x85282b  sltu        $a1, $a0, $a1
    ctx->pc = 0x2e2b8cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e2b90: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E2B90u;
    {
        const bool branch_taken_0x2e2b90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B90u;
        // 0x2e2b94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b90) {
            ctx->pc = 0x2E2B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2b38;
        }
    }
    ctx->pc = 0x2E2B98u;
label_2e2b98:
    // 0x2e2b98: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e2b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e2b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BA4u;
        // 0x2e2ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2BACu;
}
