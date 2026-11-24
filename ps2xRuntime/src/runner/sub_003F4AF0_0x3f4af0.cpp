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

// Function: sub_003F4AF0
// Address: 0x3f4af0 - 0x3f51cc
void sub_003F4AF0_0x3f4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4AF0_0x3f4af0");
#endif

    switch (ctx->pc) {
        case 0x3f4b48u: goto label_3f4b48;
        case 0x3f4b80u: goto label_3f4b80;
        case 0x3f4b90u: goto label_3f4b90;
        case 0x3f4bd0u: goto label_3f4bd0;
        case 0x3f4c14u: goto label_3f4c14;
        case 0x3f4c40u: goto label_3f4c40;
        case 0x3f4c50u: goto label_3f4c50;
        case 0x3f4c70u: goto label_3f4c70;
        case 0x3f4c80u: goto label_3f4c80;
        case 0x3f4d60u: goto label_3f4d60;
        case 0x3f4dd8u: goto label_3f4dd8;
        case 0x3f4de8u: goto label_3f4de8;
        case 0x3f4e20u: goto label_3f4e20;
        case 0x3f4e34u: goto label_3f4e34;
        case 0x3f4e70u: goto label_3f4e70;
        case 0x3f4f08u: goto label_3f4f08;
        case 0x3f4f18u: goto label_3f4f18;
        case 0x3f4f28u: goto label_3f4f28;
        case 0x3f5050u: goto label_3f5050;
        case 0x3f5060u: goto label_3f5060;
        case 0x3f50e0u: goto label_3f50e0;
        case 0x3f50f0u: goto label_3f50f0;
        case 0x3f5100u: goto label_3f5100;
        case 0x3f5110u: goto label_3f5110;
        case 0x3f51b8u: goto label_3f51b8;
        default: break;
    }

    ctx->pc = 0x3f4af0u;

    // 0x3f4af0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3f4af4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f4af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f4af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f4afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f4b00: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x3f4b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3f4b04: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3f4b04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3f4b08: 0x102001ab  beqz        $at, . + 4 + (0x1AB << 2)
    ctx->pc = 0x3F4B08u;
    {
        const bool branch_taken_0x3f4b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B08u;
        // 0x3f4b0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b08) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4B10u;
    // 0x3f4b10: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3f4b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3f4b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f4b18: 0x24c65a60  addiu       $a2, $a2, 0x5A60
    ctx->pc = 0x3f4b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23136));
    // 0x3f4b1c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3f4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3f4b20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f4b24: 0x600008  jr          $v1
    ctx->pc = 0x3F4B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F4B30u: goto label_3f4b30;
            case 0x3F4BA0u: goto label_3f4ba0;
            case 0x3F4BC0u: goto label_3f4bc0;
            case 0x3F4D30u: goto label_3f4d30;
            case 0x3F4D50u: goto label_3f4d50;
            case 0x3F4FD8u: goto label_3f4fd8;
            case 0x3F4FF8u: goto label_3f4ff8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4B24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F4B2Cu;
    // 0x3f4b2c: 0x0  nop
    ctx->pc = 0x3f4b2cu;
    // NOP
label_3f4b30:
    // 0x3f4b30: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F4B30u;
    {
        const bool branch_taken_0x3f4b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4b30) {
            ctx->pc = 0x3F4B88u;
            goto label_3f4b88;
        }
    }
    ctx->pc = 0x3F4B38u;
    // 0x3f4b38: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3f4b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3f4b3c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3f4b3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3f4b40: 0xc0aad10  jal         func_2AB440
    ctx->pc = 0x3F4B40u;
    SET_GPR_U32(ctx, 31, 0x3F4B48u);
    ctx->pc = 0x3F4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B40u;
    // 0x3f4b44: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB440u, 0x3F4B40u, 0x3F4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B48u;
label_3f4b48:
    // 0x3f4b48: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3f4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x3f4b4c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f4b50: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3f4b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3f4b54: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x3f4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x3f4b58: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f4b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f4b5c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3f4b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3f4b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f4b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b64: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3f4b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f4b68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f4b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f4b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f4b70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3f4b74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4b78: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F4B78u;
    SET_GPR_U32(ctx, 31, 0x3F4B80u);
    ctx->pc = 0x3F4B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B78u;
    // 0x3f4b7c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F4B78u, 0x3F4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B80u;
label_3f4b80:
    // 0x3f4b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4B80u;
    {
        const bool branch_taken_0x3f4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4b80) {
            ctx->pc = 0x3F4B90u;
            goto label_3f4b90;
        }
    }
    ctx->pc = 0x3F4B88u;
label_3f4b88:
    // 0x3f4b88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F4B88u;
    SET_GPR_U32(ctx, 31, 0x3F4B90u);
    ctx->pc = 0x3F4B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4B88u;
    // 0x3f4b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F4B88u, 0x3F4B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4B90u;
label_3f4b90:
    // 0x3f4b90: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3f4b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4b98: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x3F4B98u;
    {
        const bool branch_taken_0x3f4b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4B98u;
        // 0x3f4b9c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4b98) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4BA0u;
label_3f4ba0:
    // 0x3f4ba0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3f4ba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3f4ba4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3f4ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f4ba8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3f4ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3f4bac: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3f4bacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4bb0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3f4bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4bb4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3f4bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4bb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f4bbc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3f4bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3f4bc0:
    // 0x3f4bc0: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x3f4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x3f4bc4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f4bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f4bc8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3F4BC8u;
    SET_GPR_U32(ctx, 31, 0x3F4BD0u);
    ctx->pc = 0x3F4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BC8u;
    // 0x3f4bcc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3F4BC8u, 0x3F4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4BD0u;
label_3f4bd0:
    // 0x3f4bd0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F4BD0u;
    {
        const bool branch_taken_0x3f4bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4bd0) {
            ctx->pc = 0x3F4C20u;
            goto label_3f4c20;
        }
    }
    ctx->pc = 0x3F4BD8u;
    // 0x3f4bd8: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x3f4bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3f4bdc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f4be0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3f4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3f4be4: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3f4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x3f4be8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x3f4be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3f4bec: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f4becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f4bf0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3f4bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3f4bf4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3f4bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3f4bf8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3f4bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3f4bfc: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x3f4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x3f4c00: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x3f4c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3f4c04: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x3f4c04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x3f4c08: 0xc62c056c  lwc1        $f12, 0x56C($s1)
    ctx->pc = 0x3f4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f4c0c: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3F4C0Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C14u);
    ctx->pc = 0x3F4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C0Cu;
    // 0x3f4c10: 0x26260550  addiu       $a2, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3F4C0Cu, 0x3F4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C14u;
label_3f4c14:
    // 0x3f4c14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3F4C14u;
    {
        const bool branch_taken_0x3f4c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4c14) {
            ctx->pc = 0x3F4C50u;
            goto label_3f4c50;
        }
    }
    ctx->pc = 0x3F4C1Cu;
    // 0x3f4c1c: 0x0  nop
    ctx->pc = 0x3f4c1cu;
    // NOP
label_3f4c20:
    // 0x3f4c20: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f4c24: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f4c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4c28: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3f4c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3f4c2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f4c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f4c30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3f4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f4c34: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3f4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3f4c38: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3F4C38u;
    SET_GPR_U32(ctx, 31, 0x3F4C40u);
    ctx->pc = 0x3F4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C38u;
    // 0x3f4c3c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3F4C38u, 0x3F4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C40u;
label_3f4c40:
    // 0x3f4c40: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f4c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f4c44: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f4c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f4c48: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3F4C48u;
    SET_GPR_U32(ctx, 31, 0x3F4C50u);
    ctx->pc = 0x3F4C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C48u;
    // 0x3f4c4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3F4C48u, 0x3F4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C50u;
label_3f4c50:
    // 0x3f4c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c54: 0xc621056c  lwc1        $f1, 0x56C($s1)
    ctx->pc = 0x3f4c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f4c58: 0xc6200574  lwc1        $f0, 0x574($s1)
    ctx->pc = 0x3f4c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4c5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f4c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3f4c60: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f4c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x3f4c64: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3f4c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3f4c68: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3F4C68u;
    SET_GPR_U32(ctx, 31, 0x3F4C70u);
    ctx->pc = 0x3F4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C68u;
    // 0x3f4c6c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3F4C68u, 0x3F4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C70u;
label_3f4c70:
    // 0x3f4c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4C70u;
    {
        const bool branch_taken_0x3f4c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C70u;
        // 0x3f4c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c70) {
            ctx->pc = 0x3F4C80u;
            goto label_3f4c80;
        }
    }
    ctx->pc = 0x3F4C78u;
    // 0x3f4c78: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F4C78u;
    SET_GPR_U32(ctx, 31, 0x3F4C80u);
    ctx->pc = 0x3F4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C78u;
    // 0x3f4c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F4C78u, 0x3F4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C80u;
label_3f4c80:
    // 0x3f4c80: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3f4c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3f4c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4C84u;
    {
        const bool branch_taken_0x3f4c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C84u;
        // 0x3f4c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c84) {
            ctx->pc = 0x3F4C98u;
            goto label_3f4c98;
        }
    }
    ctx->pc = 0x3F4C8Cu;
    // 0x3f4c8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3F4C8Cu;
    {
        const bool branch_taken_0x3f4c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4c8c) {
            ctx->pc = 0x3F4D18u;
            goto label_3f4d18;
        }
    }
    ctx->pc = 0x3F4C94u;
    // 0x3f4c94: 0x0  nop
    ctx->pc = 0x3f4c94u;
    // NOP
label_3f4c98:
    // 0x3f4c98: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3f4c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4c9c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3f4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3f4ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f4ca4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f4ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f4ca8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3f4ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3f4cac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3F4CACu;
    {
        const bool branch_taken_0x3f4cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f4cac) {
            ctx->pc = 0x3F4CE8u;
            goto label_3f4ce8;
        }
    }
    ctx->pc = 0x3F4CB4u;
    // 0x3f4cb4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3f4cb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4cb8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3f4cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3f4cbc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F4CBCu;
    {
        const bool branch_taken_0x3f4cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4CBCu;
        // 0x3f4cc0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4cbc) {
            ctx->pc = 0x3F4D10u;
            goto label_3f4d10;
        }
    }
    ctx->pc = 0x3F4CC4u;
    // 0x3f4cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4cc8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3f4cc8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f4ccc: 0x0  nop
    ctx->pc = 0x3f4cccu;
    // NOP
    // 0x3f4cd0: 0x0  nop
    ctx->pc = 0x3f4cd0u;
    // NOP
    // 0x3f4cd4: 0x2010  mfhi        $a0
    ctx->pc = 0x3f4cd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3f4cd8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f4cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f4cdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F4CDCu;
    {
        const bool branch_taken_0x3f4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4CDCu;
        // 0x3f4ce0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4cdc) {
            ctx->pc = 0x3F4D10u;
            goto label_3f4d10;
        }
    }
    ctx->pc = 0x3F4CE4u;
    // 0x3f4ce4: 0x0  nop
    ctx->pc = 0x3f4ce4u;
    // NOP
label_3f4ce8:
    // 0x3f4ce8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3f4ce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4cec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3f4cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3f4cf0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4CF0u;
    {
        const bool branch_taken_0x3f4cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4cf0) {
            ctx->pc = 0x3F4D10u;
            goto label_3f4d10;
        }
    }
    ctx->pc = 0x3F4CF8u;
    // 0x3f4cf8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f4cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f4cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4d00: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3f4d00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f4d04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4D04u;
    {
        const bool branch_taken_0x3f4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D04u;
        // 0x3f4d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d04) {
            ctx->pc = 0x3F4D18u;
            goto label_3f4d18;
        }
    }
    ctx->pc = 0x3F4D0Cu;
    // 0x3f4d0c: 0x0  nop
    ctx->pc = 0x3f4d0cu;
    // NOP
label_3f4d10:
    // 0x3f4d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4d14: 0x0  nop
    ctx->pc = 0x3f4d14u;
    // NOP
label_3f4d18:
    // 0x3f4d18: 0x14600127  bnez        $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x3F4D18u;
    {
        const bool branch_taken_0x3f4d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4d18) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4D20u;
    // 0x3f4d20: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3f4d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4d28: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x3F4D28u;
    {
        const bool branch_taken_0x3f4d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D28u;
        // 0x3f4d2c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d28) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4D30u;
label_3f4d30:
    // 0x3f4d30: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3f4d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3f4d34: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3f4d34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f4d38: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3f4d38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3f4d3c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3f4d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4d40: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3f4d40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4d44: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3f4d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f4d4c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3f4d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3f4d50:
    // 0x3f4d50: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x3f4d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x3f4d54: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f4d58: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3F4D58u;
    SET_GPR_U32(ctx, 31, 0x3F4D60u);
    ctx->pc = 0x3F4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4D58u;
    // 0x3f4d5c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3F4D58u, 0x3F4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4D60u;
label_3f4d60:
    // 0x3f4d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f4d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d64: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4D64u;
    {
        const bool branch_taken_0x3f4d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4d64) {
            ctx->pc = 0x3F4D80u;
            goto label_3f4d80;
        }
    }
    ctx->pc = 0x3F4D6Cu;
    // 0x3f4d6c: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3f4d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4d70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4d74: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x3F4D74u;
    {
        const bool branch_taken_0x3f4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4D74u;
        // 0x3f4d78: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d74) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4D7Cu;
    // 0x3f4d7c: 0x0  nop
    ctx->pc = 0x3f4d7cu;
    // NOP
label_3f4d80:
    // 0x3f4d80: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f4d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f4d84: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3f4d84u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3f4d88: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3f4d88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3f4d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3f4d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f4d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f4d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4d98: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f4d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f4d9c: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3f4d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3f4da0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3f4da0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3f4da4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f4da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f4da8: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3f4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3f4dac: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3f4dacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3f4db0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f4db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f4db4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3f4db8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3f4db8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3f4dbc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3f4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3f4dc0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3f4dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3f4dc4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3f4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3f4dc8: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x3f4dc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3f4dcc: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x3f4dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f4dd0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3F4DD0u;
    SET_GPR_U32(ctx, 31, 0x3F4DD8u);
    ctx->pc = 0x3F4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4DD0u;
    // 0x3f4dd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3F4DD0u, 0x3F4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4DD8u;
label_3f4dd8:
    // 0x3f4dd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4DD8u;
    {
        const bool branch_taken_0x3f4dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4DD8u;
        // 0x3f4ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4dd8) {
            ctx->pc = 0x3F4DF0u;
            goto label_3f4df0;
        }
    }
    ctx->pc = 0x3F4DE0u;
    // 0x3f4de0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F4DE0u;
    SET_GPR_U32(ctx, 31, 0x3F4DE8u);
    ctx->pc = 0x3F4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4DE0u;
    // 0x3f4de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F4DE0u, 0x3F4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4DE8u;
label_3f4de8:
    // 0x3f4de8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3F4DE8u;
    {
        const bool branch_taken_0x3f4de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4de8) {
            ctx->pc = 0x3F4F28u;
            goto label_3f4f28;
        }
    }
    ctx->pc = 0x3F4DF0u;
label_3f4df0:
    // 0x3f4df0: 0x86220510  lh          $v0, 0x510($s1)
    ctx->pc = 0x3f4df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4df4: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x3f4df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3f4df8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4DF8u;
    {
        const bool branch_taken_0x3f4df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4df8) {
            ctx->pc = 0x3F4E10u;
            goto label_3f4e10;
        }
    }
    ctx->pc = 0x3F4E00u;
    // 0x3f4e00: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3f4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3f4e04: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3f4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3f4e08: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x3f4e08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3f4e0c: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x3f4e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
label_3f4e10:
    // 0x3f4e10: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3f4e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4e18: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3F4E18u;
    SET_GPR_U32(ctx, 31, 0x3F4E20u);
    ctx->pc = 0x3F4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E18u;
    // 0x3f4e1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3F4E18u, 0x3F4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4E20u;
label_3f4e20:
    // 0x3f4e20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3f4e24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3f4e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3f4e28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3f4e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3f4e2c: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3F4E2Cu;
    SET_GPR_U32(ctx, 31, 0x3F4E34u);
    ctx->pc = 0x3F4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E2Cu;
    // 0x3f4e30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3F4E2Cu, 0x3F4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4E34u;
label_3f4e34:
    // 0x3f4e34: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3f4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x3f4e38: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3f4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x3f4e3c: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x3f4e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3f4e40: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3f4e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3f4e44: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3f4e44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f4e48: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f4e4c: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3f4e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3f4e50: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x3f4e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3f4e54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3f4e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3f4e58: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f4e5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f4e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f4e60: 0xc62c056c  lwc1        $f12, 0x56C($s1)
    ctx->pc = 0x3f4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f4e64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3f4e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3f4e68: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3F4E68u;
    SET_GPR_U32(ctx, 31, 0x3F4E70u);
    ctx->pc = 0x3F4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4E68u;
    // 0x3f4e6c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3F4E68u, 0x3F4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4E70u;
label_3f4e70:
    // 0x3f4e70: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x3f4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x3f4e74: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3f4e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3f4e78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f4e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f4e7c: 0x0  nop
    ctx->pc = 0x3f4e7cu;
    // NOP
    // 0x3f4e80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f4e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f4e84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4E84u;
    {
        const bool branch_taken_0x3f4e84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f4e84) {
            ctx->pc = 0x3F4EA0u;
            goto label_3f4ea0;
        }
    }
    ctx->pc = 0x3F4E8Cu;
    // 0x3f4e8c: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3f4e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4e90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4e94: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3F4E94u;
    {
        const bool branch_taken_0x3f4e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4E94u;
        // 0x3f4e98: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e94) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4E9Cu;
    // 0x3f4e9c: 0x0  nop
    ctx->pc = 0x3f4e9cu;
    // NOP
label_3f4ea0:
    // 0x3f4ea0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f4ea4: 0xc6210570  lwc1        $f1, 0x570($s1)
    ctx->pc = 0x3f4ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f4ea8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3f4ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3f4eac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f4eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f4eb0: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f4eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4eb4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3f4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3f4eb8: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x3f4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x3f4ebc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f4ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f4ec0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f4ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3f4ec4: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f4ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x3f4ec8: 0x92240569  lbu         $a0, 0x569($s1)
    ctx->pc = 0x3f4ec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x3f4ecc: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f4eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4ed0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3f4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3f4ed4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f4ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f4edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f4ee0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3f4ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f4ee4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f4ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f4ee8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4EE8u;
    {
        const bool branch_taken_0x3f4ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f4ee8) {
            ctx->pc = 0x3F4EF8u;
            goto label_3f4ef8;
        }
    }
    ctx->pc = 0x3F4EF0u;
    // 0x3f4ef0: 0xe621056c  swc1        $f1, 0x56C($s1)
    ctx->pc = 0x3f4ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x3f4ef4: 0x0  nop
    ctx->pc = 0x3f4ef4u;
    // NOP
label_3f4ef8:
    // 0x3f4ef8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f4ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f4efc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f4efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f00: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3F4F00u;
    SET_GPR_U32(ctx, 31, 0x3F4F08u);
    ctx->pc = 0x3F4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F00u;
    // 0x3f4f04: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3F4F00u, 0x3F4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F08u;
label_3f4f08:
    // 0x3f4f08: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3f4f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3f4f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4f10: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3F4F10u;
    SET_GPR_U32(ctx, 31, 0x3F4F18u);
    ctx->pc = 0x3F4F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F10u;
    // 0x3f4f14: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3F4F10u, 0x3F4F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F18u;
label_3f4f18:
    // 0x3f4f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4F18u;
    {
        const bool branch_taken_0x3f4f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F18u;
        // 0x3f4f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f18) {
            ctx->pc = 0x3F4F28u;
            goto label_3f4f28;
        }
    }
    ctx->pc = 0x3F4F20u;
    // 0x3f4f20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F4F20u;
    SET_GPR_U32(ctx, 31, 0x3F4F28u);
    ctx->pc = 0x3F4F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4F20u;
    // 0x3f4f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F4F20u, 0x3F4F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4F28u;
label_3f4f28:
    // 0x3f4f28: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3f4f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3f4f2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4F2Cu;
    {
        const bool branch_taken_0x3f4f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F2Cu;
        // 0x3f4f30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f2c) {
            ctx->pc = 0x3F4F40u;
            goto label_3f4f40;
        }
    }
    ctx->pc = 0x3F4F34u;
    // 0x3f4f34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3F4F34u;
    {
        const bool branch_taken_0x3f4f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f34) {
            ctx->pc = 0x3F4FC0u;
            goto label_3f4fc0;
        }
    }
    ctx->pc = 0x3F4F3Cu;
    // 0x3f4f3c: 0x0  nop
    ctx->pc = 0x3f4f3cu;
    // NOP
label_3f4f40:
    // 0x3f4f40: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3f4f40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4f44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3f4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3f4f48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f4f4c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f4f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f4f50: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3f4f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3f4f54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3F4F54u;
    {
        const bool branch_taken_0x3f4f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f4f54) {
            ctx->pc = 0x3F4F90u;
            goto label_3f4f90;
        }
    }
    ctx->pc = 0x3F4F5Cu;
    // 0x3f4f5c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3f4f5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4f60: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3f4f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3f4f64: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F4F64u;
    {
        const bool branch_taken_0x3f4f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F64u;
        // 0x3f4f68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f64) {
            ctx->pc = 0x3F4FB8u;
            goto label_3f4fb8;
        }
    }
    ctx->pc = 0x3F4F6Cu;
    // 0x3f4f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4f70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3f4f70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f4f74: 0x0  nop
    ctx->pc = 0x3f4f74u;
    // NOP
    // 0x3f4f78: 0x0  nop
    ctx->pc = 0x3f4f78u;
    // NOP
    // 0x3f4f7c: 0x2010  mfhi        $a0
    ctx->pc = 0x3f4f7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3f4f80: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f4f80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f4f84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F4F84u;
    {
        const bool branch_taken_0x3f4f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4F84u;
        // 0x3f4f88: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f84) {
            ctx->pc = 0x3F4FB8u;
            goto label_3f4fb8;
        }
    }
    ctx->pc = 0x3F4F8Cu;
    // 0x3f4f8c: 0x0  nop
    ctx->pc = 0x3f4f8cu;
    // NOP
label_3f4f90:
    // 0x3f4f90: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3f4f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f4f94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3f4f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3f4f98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4F98u;
    {
        const bool branch_taken_0x3f4f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f98) {
            ctx->pc = 0x3F4FB8u;
            goto label_3f4fb8;
        }
    }
    ctx->pc = 0x3F4FA0u;
    // 0x3f4fa0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f4fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f4fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4fa8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3f4fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f4fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4FACu;
    {
        const bool branch_taken_0x3f4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FACu;
        // 0x3f4fb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fac) {
            ctx->pc = 0x3F4FC0u;
            goto label_3f4fc0;
        }
    }
    ctx->pc = 0x3F4FB4u;
    // 0x3f4fb4: 0x0  nop
    ctx->pc = 0x3f4fb4u;
    // NOP
label_3f4fb8:
    // 0x3f4fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4fbc: 0x0  nop
    ctx->pc = 0x3f4fbcu;
    // NOP
label_3f4fc0:
    // 0x3f4fc0: 0x1460007d  bnez        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x3F4FC0u;
    {
        const bool branch_taken_0x3f4fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4fc0) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4FC8u;
    // 0x3f4fc8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3f4fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4fcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4fd0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x3F4FD0u;
    {
        const bool branch_taken_0x3f4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4FD0u;
        // 0x3f4fd4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fd0) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F4FD8u;
label_3f4fd8:
    // 0x3f4fd8: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3f4fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3f4fdc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3f4fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f4fe0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3f4fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3f4fe4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3f4fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4fe8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3f4fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f4fec: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3f4fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3f4ff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f4ff4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3f4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3f4ff8:
    // 0x3f4ff8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f4ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f4ffc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3f4ffcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3f5000: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3f5000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3f5004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5008: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3f5008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f500c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f500cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5010: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f5010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f5014: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3f5014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3f5018: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3f5018u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3f501c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f501cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f5020: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3f5020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3f5024: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3f5024u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3f5028: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f5028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f502c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3f5030: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3f5030u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3f5034: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3f5034u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3f5038: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3f5038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3f503c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3f503cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3f5040: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x3f5040u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3f5044: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x3f5044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f5048: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3F5048u;
    SET_GPR_U32(ctx, 31, 0x3F5050u);
    ctx->pc = 0x3F504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5048u;
    // 0x3f504c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3F5048u, 0x3F5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5050u;
label_3f5050:
    // 0x3f5050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5050u;
    {
        const bool branch_taken_0x3f5050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5050u;
        // 0x3f5054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5050) {
            ctx->pc = 0x3F5068u;
            goto label_3f5068;
        }
    }
    ctx->pc = 0x3F5058u;
    // 0x3f5058: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F5058u;
    SET_GPR_U32(ctx, 31, 0x3F5060u);
    ctx->pc = 0x3F505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5058u;
    // 0x3f505c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F5058u, 0x3F5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5060u;
label_3f5060:
    // 0x3f5060: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3F5060u;
    {
        const bool branch_taken_0x3f5060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5060) {
            ctx->pc = 0x3F5110u;
            goto label_3f5110;
        }
    }
    ctx->pc = 0x3F5068u;
label_3f5068:
    // 0x3f5068: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f5068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f506c: 0xc6210570  lwc1        $f1, 0x570($s1)
    ctx->pc = 0x3f506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f5070: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3f5070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3f5074: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f5074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f5078: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f507c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3f507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3f5080: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x3f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x3f5084: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f5084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f5088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f5088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3f508c: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f508cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x3f5090: 0x92240569  lbu         $a0, 0x569($s1)
    ctx->pc = 0x3f5090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x3f5094: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f5094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f5098: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3f5098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3f509c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f50a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f50a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f50a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3f50a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f50ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f50acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f50b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3F50B0u;
    {
        const bool branch_taken_0x3f50b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f50b0) {
            ctx->pc = 0x3F50C0u;
            goto label_3f50c0;
        }
    }
    ctx->pc = 0x3F50B8u;
    // 0x3f50b8: 0xe621056c  swc1        $f1, 0x56C($s1)
    ctx->pc = 0x3f50b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x3f50bc: 0x0  nop
    ctx->pc = 0x3f50bcu;
    // NOP
label_3f50c0:
    // 0x3f50c0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f50c4: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3f50c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f50c8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3f50c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3f50cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f50ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f50d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3f50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f50d4: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3f50d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3f50d8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3F50D8u;
    SET_GPR_U32(ctx, 31, 0x3F50E0u);
    ctx->pc = 0x3F50DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F50D8u;
    // 0x3f50dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3F50D8u, 0x3F50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F50E0u;
label_3f50e0:
    // 0x3f50e0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3f50e4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f50e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f50e8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3F50E8u;
    SET_GPR_U32(ctx, 31, 0x3F50F0u);
    ctx->pc = 0x3F50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F50E8u;
    // 0x3f50ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3F50E8u, 0x3F50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F50F0u;
label_3f50f0:
    // 0x3f50f0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3f50f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3f50f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f50f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f50f8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3F50F8u;
    SET_GPR_U32(ctx, 31, 0x3F5100u);
    ctx->pc = 0x3F50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F50F8u;
    // 0x3f50fc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3F50F8u, 0x3F5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5100u;
label_3f5100:
    // 0x3f5100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5100u;
    {
        const bool branch_taken_0x3f5100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5100u;
        // 0x3f5104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5100) {
            ctx->pc = 0x3F5110u;
            goto label_3f5110;
        }
    }
    ctx->pc = 0x3F5108u;
    // 0x3f5108: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F5108u;
    SET_GPR_U32(ctx, 31, 0x3F5110u);
    ctx->pc = 0x3F510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5108u;
    // 0x3f510c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F5108u, 0x3F5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5110u;
label_3f5110:
    // 0x3f5110: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3f5110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3f5114: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F5114u;
    {
        const bool branch_taken_0x3f5114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5114u;
        // 0x3f5118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5114) {
            ctx->pc = 0x3F5128u;
            goto label_3f5128;
        }
    }
    ctx->pc = 0x3F511Cu;
    // 0x3f511c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3F511Cu;
    {
        const bool branch_taken_0x3f511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f511c) {
            ctx->pc = 0x3F51A8u;
            goto label_3f51a8;
        }
    }
    ctx->pc = 0x3F5124u;
    // 0x3f5124: 0x0  nop
    ctx->pc = 0x3f5124u;
    // NOP
label_3f5128:
    // 0x3f5128: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3f5128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f512c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3f512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3f5130: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f5130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f5134: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f5134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f5138: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3f5138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3f513c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3F513Cu;
    {
        const bool branch_taken_0x3f513c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f513c) {
            ctx->pc = 0x3F5178u;
            goto label_3f5178;
        }
    }
    ctx->pc = 0x3F5144u;
    // 0x3f5144: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3f5144u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f5148: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3f5148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3f514c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F514Cu;
    {
        const bool branch_taken_0x3f514c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F514Cu;
        // 0x3f5150: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f514c) {
            ctx->pc = 0x3F51A0u;
            goto label_3f51a0;
        }
    }
    ctx->pc = 0x3F5154u;
    // 0x3f5154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f5154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5158: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3f5158u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f515c: 0x0  nop
    ctx->pc = 0x3f515cu;
    // NOP
    // 0x3f5160: 0x0  nop
    ctx->pc = 0x3f5160u;
    // NOP
    // 0x3f5164: 0x2010  mfhi        $a0
    ctx->pc = 0x3f5164u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3f5168: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f5168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f516c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F516Cu;
    {
        const bool branch_taken_0x3f516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F516Cu;
        // 0x3f5170: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f516c) {
            ctx->pc = 0x3F51A0u;
            goto label_3f51a0;
        }
    }
    ctx->pc = 0x3F5174u;
    // 0x3f5174: 0x0  nop
    ctx->pc = 0x3f5174u;
    // NOP
label_3f5178:
    // 0x3f5178: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3f5178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3f517c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3f517cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3f5180: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5180u;
    {
        const bool branch_taken_0x3f5180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5180) {
            ctx->pc = 0x3F51A0u;
            goto label_3f51a0;
        }
    }
    ctx->pc = 0x3F5188u;
    // 0x3f5188: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3f5188u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f518c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5190: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3f5190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f5194: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F5194u;
    {
        const bool branch_taken_0x3f5194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5194u;
        // 0x3f5198: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5194) {
            ctx->pc = 0x3F51A8u;
            goto label_3f51a8;
        }
    }
    ctx->pc = 0x3F519Cu;
    // 0x3f519c: 0x0  nop
    ctx->pc = 0x3f519cu;
    // NOP
label_3f51a0:
    // 0x3f51a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f51a4: 0x0  nop
    ctx->pc = 0x3f51a4u;
    // NOP
label_3f51a8:
    // 0x3f51a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F51A8u;
    {
        const bool branch_taken_0x3f51a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51A8u;
        // 0x3f51ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f51a8) {
            ctx->pc = 0x3F51B8u;
            goto label_3f51b8;
        }
    }
    ctx->pc = 0x3F51B0u;
    // 0x3f51b0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3F51B0u;
    SET_GPR_U32(ctx, 31, 0x3F51B8u);
    ctx->pc = 0x3F51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F51B0u;
    // 0x3f51b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3F51B0u, 0x3F51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F51B8u;
label_3f51b8:
    // 0x3f51b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f51b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f51bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f51bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f51c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f51c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f51c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F51C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51C4u;
        // 0x3f51c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F51C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F51CCu;
}
