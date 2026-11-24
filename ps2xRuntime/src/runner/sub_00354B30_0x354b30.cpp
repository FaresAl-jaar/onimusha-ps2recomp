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

// Function: sub_00354B30
// Address: 0x354b30 - 0x354dc8
void sub_00354B30_0x354b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354B30_0x354b30");
#endif

    switch (ctx->pc) {
        case 0x354b80u: goto label_354b80;
        case 0x354b90u: goto label_354b90;
        case 0x354be4u: goto label_354be4;
        case 0x354bf4u: goto label_354bf4;
        case 0x354c04u: goto label_354c04;
        case 0x354c20u: goto label_354c20;
        case 0x354c3cu: goto label_354c3c;
        case 0x354c4cu: goto label_354c4c;
        case 0x354c80u: goto label_354c80;
        case 0x354c98u: goto label_354c98;
        case 0x354ca4u: goto label_354ca4;
        case 0x354cb0u: goto label_354cb0;
        case 0x354cc4u: goto label_354cc4;
        case 0x354cf8u: goto label_354cf8;
        case 0x354d04u: goto label_354d04;
        case 0x354db8u: goto label_354db8;
        default: break;
    }

    ctx->pc = 0x354b30u;

    // 0x354b30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x354b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x354b34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x354b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x354b3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x354b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x354b40: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x354b40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x354b44: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x354B44u;
    {
        const bool branch_taken_0x354b44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x354B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B44u;
        // 0x354b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b44) {
            ctx->pc = 0x354BC0u;
            goto label_354bc0;
        }
    }
    ctx->pc = 0x354B4Cu;
    // 0x354b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354b50: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x354B50u;
    {
        const bool branch_taken_0x354b50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x354b50) {
            ctx->pc = 0x354BA0u;
            goto label_354ba0;
        }
    }
    ctx->pc = 0x354B58u;
    // 0x354b58: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x354B58u;
    {
        const bool branch_taken_0x354b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b58) {
            ctx->pc = 0x354B68u;
            goto label_354b68;
        }
    }
    ctx->pc = 0x354B60u;
    // 0x354b60: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x354B60u;
    {
        const bool branch_taken_0x354b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b60) {
            ctx->pc = 0x354DB8u;
            goto label_354db8;
        }
    }
    ctx->pc = 0x354B68u;
label_354b68:
    // 0x354b68: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x354B68u;
    {
        const bool branch_taken_0x354b68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b68) {
            ctx->pc = 0x354B88u;
            goto label_354b88;
        }
    }
    ctx->pc = 0x354B70u;
    // 0x354b70: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x354b70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x354b74: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x354b74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354b78: 0xc0aa780  jal         func_2A9E00
    ctx->pc = 0x354B78u;
    SET_GPR_U32(ctx, 31, 0x354B80u);
    ctx->pc = 0x354B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354B78u;
    // 0x354b7c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E00u, 0x354B78u, 0x354B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B80u;
label_354b80:
    // 0x354b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354B80u;
    {
        const bool branch_taken_0x354b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B80u;
        // 0x354b84: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b80) {
            ctx->pc = 0x354B90u;
            goto label_354b90;
        }
    }
    ctx->pc = 0x354B88u;
label_354b88:
    // 0x354b88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354B88u;
    SET_GPR_U32(ctx, 31, 0x354B90u);
    ctx->pc = 0x354B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354B88u;
    // 0x354b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354B88u, 0x354B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B90u;
label_354b90:
    // 0x354b90: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x354b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x354b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x354b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354b98: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x354B98u;
    {
        const bool branch_taken_0x354b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B98u;
        // 0x354b9c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b98) {
            ctx->pc = 0x354DB8u;
            goto label_354db8;
        }
    }
    ctx->pc = 0x354BA0u;
label_354ba0:
    // 0x354ba0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x354ba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x354ba4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x354ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x354ba8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x354ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x354bac: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x354bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x354bb0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x354bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x354bb4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x354bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x354bb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354bbc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x354bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_354bc0:
    // 0x354bc0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x354bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x354bc4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x354bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x354bc8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x354bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354bcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354bd0: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x354bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354bd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x354bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354bd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x354bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x354bdc: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x354BDCu;
    SET_GPR_U32(ctx, 31, 0x354BE4u);
    ctx->pc = 0x354BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354BDCu;
    // 0x354be0: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x354BDCu, 0x354BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BE4u;
label_354be4:
    // 0x354be4: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x354be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x354be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bec: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x354BECu;
    SET_GPR_U32(ctx, 31, 0x354BF4u);
    ctx->pc = 0x354BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354BECu;
    // 0x354bf0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x354BECu, 0x354BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BF4u;
label_354bf4:
    // 0x354bf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354BF4u;
    {
        const bool branch_taken_0x354bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BF4u;
        // 0x354bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354bf4) {
            ctx->pc = 0x354C08u;
            goto label_354c08;
        }
    }
    ctx->pc = 0x354BFCu;
    // 0x354bfc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354BFCu;
    SET_GPR_U32(ctx, 31, 0x354C04u);
    ctx->pc = 0x354C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354BFCu;
    // 0x354c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354BFCu, 0x354C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C04u;
label_354c04:
    // 0x354c04: 0x0  nop
    ctx->pc = 0x354c04u;
    // NOP
label_354c08:
    // 0x354c08: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x354c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x354c0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x354c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x354c10: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x354c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x354c14: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x354c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354c18: 0xc097384  jal         func_25CE10
    ctx->pc = 0x354C18u;
    SET_GPR_U32(ctx, 31, 0x354C20u);
    ctx->pc = 0x354C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C18u;
    // 0x354c1c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x354C18u, 0x354C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C20u;
label_354c20:
    // 0x354c20: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x354c20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x354c24: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x354c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x354c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x354c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x354c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x354c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c34: 0xc0c0900  jal         func_302400
    ctx->pc = 0x354C34u;
    SET_GPR_U32(ctx, 31, 0x354C3Cu);
    ctx->pc = 0x354C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C34u;
    // 0x354c38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x354C34u, 0x354C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C3Cu;
label_354c3c:
    // 0x354c3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x354C3Cu;
    {
        const bool branch_taken_0x354c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C3Cu;
        // 0x354c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c3c) {
            ctx->pc = 0x354C58u;
            goto label_354c58;
        }
    }
    ctx->pc = 0x354C44u;
    // 0x354c44: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354C44u;
    SET_GPR_U32(ctx, 31, 0x354C4Cu);
    ctx->pc = 0x354C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C44u;
    // 0x354c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354C44u, 0x354C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C4Cu;
label_354c4c:
    // 0x354c4c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x354C4Cu;
    {
        const bool branch_taken_0x354c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c4c) {
            ctx->pc = 0x354DB8u;
            goto label_354db8;
        }
    }
    ctx->pc = 0x354C54u;
    // 0x354c54: 0x0  nop
    ctx->pc = 0x354c54u;
    // NOP
label_354c58:
    // 0x354c58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x354c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x354c5c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x354c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x354c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c64: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x354c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354c68: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x354c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x354c6c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x354c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x354c70: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x354c74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x354c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354c78: 0xc0c0980  jal         func_302600
    ctx->pc = 0x354C78u;
    SET_GPR_U32(ctx, 31, 0x354C80u);
    ctx->pc = 0x354C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C78u;
    // 0x354c7c: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x354C78u, 0x354C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C80u;
label_354c80:
    // 0x354c80: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x354C80u;
    {
        const bool branch_taken_0x354c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c80) {
            ctx->pc = 0x354D10u;
            goto label_354d10;
        }
    }
    ctx->pc = 0x354C88u;
    // 0x354c88: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x354c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x354c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c90: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x354C90u;
    SET_GPR_U32(ctx, 31, 0x354C98u);
    ctx->pc = 0x354C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C90u;
    // 0x354c94: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x354C90u, 0x354C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C98u;
label_354c98:
    // 0x354c98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x354c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354c9c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x354C9Cu;
    SET_GPR_U32(ctx, 31, 0x354CA4u);
    ctx->pc = 0x354CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C9Cu;
    // 0x354ca0: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x354C9Cu, 0x354CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354CA4u;
label_354ca4:
    // 0x354ca4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x354ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354ca8: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x354CA8u;
    SET_GPR_U32(ctx, 31, 0x354CB0u);
    ctx->pc = 0x354CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354CA8u;
    // 0x354cac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x354CA8u, 0x354CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354CB0u;
label_354cb0:
    // 0x354cb0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x354cb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x354cb4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x354cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354cb8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x354cb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354cbc: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x354CBCu;
    SET_GPR_U32(ctx, 31, 0x354CC4u);
    ctx->pc = 0x354CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354CBCu;
    // 0x354cc0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x354CBCu, 0x354CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354CC4u;
label_354cc4:
    // 0x354cc4: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x354cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354cc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x354cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x354ccc: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x354cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x354cd0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x354cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x354cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cd8: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x354cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x354cdc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x354cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354ce0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354ce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x354ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ce8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x354ce8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x354cecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cf0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x354CF0u;
    SET_GPR_U32(ctx, 31, 0x354CF8u);
    ctx->pc = 0x354CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354CF0u;
    // 0x354cf4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x354CF0u, 0x354CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354CF8u;
label_354cf8:
    // 0x354cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cfc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354CFCu;
    SET_GPR_U32(ctx, 31, 0x354D04u);
    ctx->pc = 0x354D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354CFCu;
    // 0x354d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354CFCu, 0x354D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D04u;
label_354d04:
    // 0x354d04: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x354D04u;
    {
        const bool branch_taken_0x354d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d04) {
            ctx->pc = 0x354DB8u;
            goto label_354db8;
        }
    }
    ctx->pc = 0x354D0Cu;
    // 0x354d0c: 0x0  nop
    ctx->pc = 0x354d0cu;
    // NOP
label_354d10:
    // 0x354d10: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x354d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x354d14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x354D14u;
    {
        const bool branch_taken_0x354d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D14u;
        // 0x354d18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d14) {
            ctx->pc = 0x354D28u;
            goto label_354d28;
        }
    }
    ctx->pc = 0x354D1Cu;
    // 0x354d1c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x354D1Cu;
    {
        const bool branch_taken_0x354d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d1c) {
            ctx->pc = 0x354DA8u;
            goto label_354da8;
        }
    }
    ctx->pc = 0x354D24u;
    // 0x354d24: 0x0  nop
    ctx->pc = 0x354d24u;
    // NOP
label_354d28:
    // 0x354d28: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x354d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x354d2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x354d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x354d30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x354d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x354d34: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x354d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x354d38: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x354d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x354d3c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x354D3Cu;
    {
        const bool branch_taken_0x354d3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x354d3c) {
            ctx->pc = 0x354D78u;
            goto label_354d78;
        }
    }
    ctx->pc = 0x354D44u;
    // 0x354d44: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x354d44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x354d48: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x354d48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x354d4c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x354D4Cu;
    {
        const bool branch_taken_0x354d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x354D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D4Cu;
        // 0x354d50: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d4c) {
            ctx->pc = 0x354DA0u;
            goto label_354da0;
        }
    }
    ctx->pc = 0x354D54u;
    // 0x354d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354d58: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x354d58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x354d5c: 0x0  nop
    ctx->pc = 0x354d5cu;
    // NOP
    // 0x354d60: 0x0  nop
    ctx->pc = 0x354d60u;
    // NOP
    // 0x354d64: 0x2010  mfhi        $a0
    ctx->pc = 0x354d64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x354d68: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x354d68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x354d6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x354D6Cu;
    {
        const bool branch_taken_0x354d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D6Cu;
        // 0x354d70: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d6c) {
            ctx->pc = 0x354DA0u;
            goto label_354da0;
        }
    }
    ctx->pc = 0x354D74u;
    // 0x354d74: 0x0  nop
    ctx->pc = 0x354d74u;
    // NOP
label_354d78:
    // 0x354d78: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x354d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x354d7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x354d7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x354d80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x354D80u;
    {
        const bool branch_taken_0x354d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354d80) {
            ctx->pc = 0x354DA0u;
            goto label_354da0;
        }
    }
    ctx->pc = 0x354D88u;
    // 0x354d88: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x354d88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x354d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354d90: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x354d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x354d94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354D94u;
    {
        const bool branch_taken_0x354d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D94u;
        // 0x354d98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d94) {
            ctx->pc = 0x354DA8u;
            goto label_354da8;
        }
    }
    ctx->pc = 0x354D9Cu;
    // 0x354d9c: 0x0  nop
    ctx->pc = 0x354d9cu;
    // NOP
label_354da0:
    // 0x354da0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354da4: 0x0  nop
    ctx->pc = 0x354da4u;
    // NOP
label_354da8:
    // 0x354da8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354DA8u;
    {
        const bool branch_taken_0x354da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x354DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DA8u;
        // 0x354dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354da8) {
            ctx->pc = 0x354DB8u;
            goto label_354db8;
        }
    }
    ctx->pc = 0x354DB0u;
    // 0x354db0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354DB0u;
    SET_GPR_U32(ctx, 31, 0x354DB8u);
    ctx->pc = 0x354DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354DB0u;
    // 0x354db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354DB0u, 0x354DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DB8u;
label_354db8:
    // 0x354db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x354db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354dbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x354dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x354DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DC0u;
        // 0x354dc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354DC8u;
}
