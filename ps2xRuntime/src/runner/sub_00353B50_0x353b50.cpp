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

// Function: sub_00353B50
// Address: 0x353b50 - 0x353fb0
void sub_00353B50_0x353b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353B50_0x353b50");
#endif

    switch (ctx->pc) {
        case 0x353bb8u: goto label_353bb8;
        case 0x353c0cu: goto label_353c0c;
        case 0x353c38u: goto label_353c38;
        case 0x353c60u: goto label_353c60;
        case 0x353c90u: goto label_353c90;
        case 0x353cb8u: goto label_353cb8;
        case 0x353cc4u: goto label_353cc4;
        case 0x353cd8u: goto label_353cd8;
        case 0x353d4cu: goto label_353d4c;
        case 0x353d8cu: goto label_353d8c;
        case 0x353dccu: goto label_353dcc;
        case 0x353e0cu: goto label_353e0c;
        case 0x353ec8u: goto label_353ec8;
        case 0x353f98u: goto label_353f98;
        default: break;
    }

    ctx->pc = 0x353b50u;

    // 0x353b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x353b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x353b54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x353b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353b58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x353b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x353b5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x353b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x353b60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x353b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x353b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x353b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x353b68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x353b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b6c: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x353b6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x353b70: 0x10a300df  beq         $a1, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x353B70u;
    {
        const bool branch_taken_0x353b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x353B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B70u;
        // 0x353b74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b70) {
            ctx->pc = 0x353EF0u;
            goto label_353ef0;
        }
    }
    ctx->pc = 0x353B78u;
    // 0x353b78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x353b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353b7c: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x353B7Cu;
    {
        const bool branch_taken_0x353b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x353B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B7Cu;
        // 0x353b80: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b7c) {
            ctx->pc = 0x353ED0u;
            goto label_353ed0;
        }
    }
    ctx->pc = 0x353B84u;
    // 0x353b84: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x353B84u;
    {
        const bool branch_taken_0x353b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x353b84) {
            ctx->pc = 0x353BE8u;
            goto label_353be8;
        }
    }
    ctx->pc = 0x353B8Cu;
    // 0x353b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353b90: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x353B90u;
    {
        const bool branch_taken_0x353b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x353b90) {
            ctx->pc = 0x353BC8u;
            goto label_353bc8;
        }
    }
    ctx->pc = 0x353B98u;
    // 0x353b98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353B98u;
    {
        const bool branch_taken_0x353b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b98) {
            ctx->pc = 0x353BA8u;
            goto label_353ba8;
        }
    }
    ctx->pc = 0x353BA0u;
    // 0x353ba0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x353BA0u;
    {
        const bool branch_taken_0x353ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ba0) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353BA8u;
label_353ba8:
    // 0x353ba8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353BA8u;
    {
        const bool branch_taken_0x353ba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x353BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BA8u;
        // 0x353bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ba8) {
            ctx->pc = 0x353BB8u;
            goto label_353bb8;
        }
    }
    ctx->pc = 0x353BB0u;
    // 0x353bb0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353BB0u;
    SET_GPR_U32(ctx, 31, 0x353BB8u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353BB0u, 0x353BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353BB8u;
label_353bb8:
    // 0x353bb8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x353bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x353bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x353bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x353bc0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x353BC0u;
    {
        const bool branch_taken_0x353bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BC0u;
        // 0x353bc4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bc0) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353BC8u;
label_353bc8:
    // 0x353bc8: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x353bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x353bcc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x353bccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x353bd0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x353bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x353bd4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x353bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x353bd8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x353bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x353bdc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x353bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x353be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x353be4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x353be4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_353be8:
    // 0x353be8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x353be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x353bec: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x353becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x353bf0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x353bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353bf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x353bf8: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x353bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x353bfc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x353bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353c00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x353c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x353c04: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x353C04u;
    SET_GPR_U32(ctx, 31, 0x353C0Cu);
    ctx->pc = 0x353C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C04u;
    // 0x353c08: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x353C04u, 0x353C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C0Cu;
label_353c0c:
    // 0x353c0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x353c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x353c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c14: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x353c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x353c18: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x353c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353c1c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x353c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x353c20: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x353c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353c24: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x353c28: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x353c28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353c2c: 0x27aa00cc  addiu       $t2, $sp, 0xCC
    ctx->pc = 0x353c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x353c30: 0xc0c0980  jal         func_302600
    ctx->pc = 0x353C30u;
    SET_GPR_U32(ctx, 31, 0x353C38u);
    ctx->pc = 0x353C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C30u;
    // 0x353c34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x353C30u, 0x353C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C38u;
label_353c38:
    // 0x353c38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353C38u;
    {
        const bool branch_taken_0x353c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c38) {
            ctx->pc = 0x353C48u;
            goto label_353c48;
        }
    }
    ctx->pc = 0x353C40u;
    // 0x353c40: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x353c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353c44: 0x0  nop
    ctx->pc = 0x353c44u;
    // NOP
label_353c48:
    // 0x353c48: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x353c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x353c4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x353c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x353c50: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x353c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x353c54: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x353c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x353c58: 0xc097384  jal         func_25CE10
    ctx->pc = 0x353C58u;
    SET_GPR_U32(ctx, 31, 0x353C60u);
    ctx->pc = 0x353C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C58u;
    // 0x353c5c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x353C58u, 0x353C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C60u;
label_353c60:
    // 0x353c60: 0x92270558  lbu         $a3, 0x558($s1)
    ctx->pc = 0x353c60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x353c64: 0xc62e0554  lwc1        $f14, 0x554($s1)
    ctx->pc = 0x353c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x353c68: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x353c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x353c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x353c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353c74: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x353c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353c78: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x353c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x353c7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x353c80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x353c84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c88: 0xc0c0928  jal         func_3024A0
    ctx->pc = 0x353C88u;
    SET_GPR_U32(ctx, 31, 0x353C90u);
    ctx->pc = 0x353C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C88u;
    // 0x353c8c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x353C88u, 0x353C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C90u;
label_353c90:
    // 0x353c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353C90u;
    {
        const bool branch_taken_0x353c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c90) {
            ctx->pc = 0x353CA8u;
            goto label_353ca8;
        }
    }
    ctx->pc = 0x353C98u;
    // 0x353c98: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x353c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x353c9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x353c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x353ca0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x353CA0u;
    {
        const bool branch_taken_0x353ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CA0u;
        // 0x353ca4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ca0) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353CA8u;
label_353ca8:
    // 0x353ca8: 0x1240005d  beqz        $s2, . + 4 + (0x5D << 2)
    ctx->pc = 0x353CA8u;
    {
        const bool branch_taken_0x353ca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CA8u;
        // 0x353cac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ca8) {
            ctx->pc = 0x353E20u;
            goto label_353e20;
        }
    }
    ctx->pc = 0x353CB0u;
    // 0x353cb0: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x353CB0u;
    SET_GPR_U32(ctx, 31, 0x353CB8u);
    ctx->pc = 0x353CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CB0u;
    // 0x353cb4: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x353CB0u, 0x353CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CB8u;
label_353cb8:
    // 0x353cb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x353cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353cbc: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x353CBCu;
    SET_GPR_U32(ctx, 31, 0x353CC4u);
    ctx->pc = 0x353CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CBCu;
    // 0x353cc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x353CBCu, 0x353CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CC4u;
label_353cc4:
    // 0x353cc4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x353cc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x353cc8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x353cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353ccc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x353cccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x353cd0: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x353CD0u;
    SET_GPR_U32(ctx, 31, 0x353CD8u);
    ctx->pc = 0x353CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CD0u;
    // 0x353cd4: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x353CD0u, 0x353CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CD8u;
label_353cd8:
    // 0x353cd8: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x353CD8u;
    {
        const bool branch_taken_0x353cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x353cd8) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353CE0u;
    // 0x353ce0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x353ce0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x353ce4: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x353ce8: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x353CE8u;
    {
        const bool branch_taken_0x353ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x353CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CE8u;
        // 0x353cec: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ce8) {
            ctx->pc = 0x353DD8u;
            goto label_353dd8;
        }
    }
    ctx->pc = 0x353CF0u;
    // 0x353cf0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x353CF0u;
    {
        const bool branch_taken_0x353cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x353cf0) {
            ctx->pc = 0x353D98u;
            goto label_353d98;
        }
    }
    ctx->pc = 0x353CF8u;
    // 0x353cf8: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x353cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x353cfc: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x353CFCu;
    {
        const bool branch_taken_0x353cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x353D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CFCu;
        // 0x353d00: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cfc) {
            ctx->pc = 0x353D58u;
            goto label_353d58;
        }
    }
    ctx->pc = 0x353D04u;
    // 0x353d04: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353D04u;
    {
        const bool branch_taken_0x353d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x353d04) {
            ctx->pc = 0x353D18u;
            goto label_353d18;
        }
    }
    ctx->pc = 0x353D0Cu;
    // 0x353d0c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x353D0Cu;
    {
        const bool branch_taken_0x353d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d0c) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353D14u;
    // 0x353d14: 0x0  nop
    ctx->pc = 0x353d14u;
    // NOP
label_353d18:
    // 0x353d18: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x353d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x353d1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x353d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x353d20: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x353d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x353d24: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x353d28: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x353d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x353d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d30: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x353d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353d3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x353d40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d44: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x353D44u;
    SET_GPR_U32(ctx, 31, 0x353D4Cu);
    ctx->pc = 0x353D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D44u;
    // 0x353d48: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x353D44u, 0x353D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D4Cu;
label_353d4c:
    // 0x353d4c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x353D4Cu;
    {
        const bool branch_taken_0x353d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d4c) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353D54u;
    // 0x353d54: 0x0  nop
    ctx->pc = 0x353d54u;
    // NOP
label_353d58:
    // 0x353d58: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x353d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x353d5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x353d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x353d60: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x353d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x353d64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x353d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x353d68: 0x34455b02  ori         $a1, $v0, 0x5B02
    ctx->pc = 0x353d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23298);
    // 0x353d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d70: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x353d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353d7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x353d80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d84: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x353D84u;
    SET_GPR_U32(ctx, 31, 0x353D8Cu);
    ctx->pc = 0x353D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D84u;
    // 0x353d88: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x353D84u, 0x353D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D8Cu;
label_353d8c:
    // 0x353d8c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x353D8Cu;
    {
        const bool branch_taken_0x353d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d8c) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353D94u;
    // 0x353d94: 0x0  nop
    ctx->pc = 0x353d94u;
    // NOP
label_353d98:
    // 0x353d98: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x353d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x353d9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x353d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x353da0: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x353da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x353da4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x353da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x353da8: 0x34454702  ori         $a1, $v0, 0x4702
    ctx->pc = 0x353da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18178);
    // 0x353dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353db0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x353db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353db4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353db8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353dbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x353dc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dc4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x353DC4u;
    SET_GPR_U32(ctx, 31, 0x353DCCu);
    ctx->pc = 0x353DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353DC4u;
    // 0x353dc8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x353DC4u, 0x353DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DCCu;
label_353dcc:
    // 0x353dcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x353DCCu;
    {
        const bool branch_taken_0x353dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353dcc) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353DD4u;
    // 0x353dd4: 0x0  nop
    ctx->pc = 0x353dd4u;
    // NOP
label_353dd8:
    // 0x353dd8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x353dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x353ddc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x353ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x353de0: 0x3c021900  lui         $v0, 0x1900
    ctx->pc = 0x353de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6400 << 16));
    // 0x353de4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x353de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x353de8: 0x34459702  ori         $a1, $v0, 0x9702
    ctx->pc = 0x353de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38658);
    // 0x353dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353df0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x353df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353df4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353df8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353df8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x353e00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e04: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x353E04u;
    SET_GPR_U32(ctx, 31, 0x353E0Cu);
    ctx->pc = 0x353E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353E04u;
    // 0x353e08: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x353E04u, 0x353E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353E0Cu;
label_353e0c:
    // 0x353e0c: 0x0  nop
    ctx->pc = 0x353e0cu;
    // NOP
label_353e10:
    // 0x353e10: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x353e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x353e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x353e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x353e18: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x353E18u;
    {
        const bool branch_taken_0x353e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E18u;
        // 0x353e1c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e18) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353E20u;
label_353e20:
    // 0x353e20: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x353e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x353e24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353E24u;
    {
        const bool branch_taken_0x353e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E24u;
        // 0x353e28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e24) {
            ctx->pc = 0x353E38u;
            goto label_353e38;
        }
    }
    ctx->pc = 0x353E2Cu;
    // 0x353e2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x353E2Cu;
    {
        const bool branch_taken_0x353e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e2c) {
            ctx->pc = 0x353EB8u;
            goto label_353eb8;
        }
    }
    ctx->pc = 0x353E34u;
    // 0x353e34: 0x0  nop
    ctx->pc = 0x353e34u;
    // NOP
label_353e38:
    // 0x353e38: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x353e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353e3c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x353e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x353e40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x353e44: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353e44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353e48: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x353e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x353e4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353E4Cu;
    {
        const bool branch_taken_0x353e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x353e4c) {
            ctx->pc = 0x353E88u;
            goto label_353e88;
        }
    }
    ctx->pc = 0x353E54u;
    // 0x353e54: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x353e54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353e58: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x353e58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x353e5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x353E5Cu;
    {
        const bool branch_taken_0x353e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E5Cu;
        // 0x353e60: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e5c) {
            ctx->pc = 0x353EB0u;
            goto label_353eb0;
        }
    }
    ctx->pc = 0x353E64u;
    // 0x353e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353e68: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x353e68u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x353e6c: 0x0  nop
    ctx->pc = 0x353e6cu;
    // NOP
    // 0x353e70: 0x0  nop
    ctx->pc = 0x353e70u;
    // NOP
    // 0x353e74: 0x2010  mfhi        $a0
    ctx->pc = 0x353e74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x353e78: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x353E7Cu;
    {
        const bool branch_taken_0x353e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E7Cu;
        // 0x353e80: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e7c) {
            ctx->pc = 0x353EB0u;
            goto label_353eb0;
        }
    }
    ctx->pc = 0x353E84u;
    // 0x353e84: 0x0  nop
    ctx->pc = 0x353e84u;
    // NOP
label_353e88:
    // 0x353e88: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x353e88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353e8c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x353e8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x353e90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353E90u;
    {
        const bool branch_taken_0x353e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353e90) {
            ctx->pc = 0x353EB0u;
            goto label_353eb0;
        }
    }
    ctx->pc = 0x353E98u;
    // 0x353e98: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353e98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353e9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353ea0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x353ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x353ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353EA4u;
    {
        const bool branch_taken_0x353ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EA4u;
        // 0x353ea8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ea4) {
            ctx->pc = 0x353EB8u;
            goto label_353eb8;
        }
    }
    ctx->pc = 0x353EACu;
    // 0x353eac: 0x0  nop
    ctx->pc = 0x353eacu;
    // NOP
label_353eb0:
    // 0x353eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353eb4: 0x0  nop
    ctx->pc = 0x353eb4u;
    // NOP
label_353eb8:
    // 0x353eb8: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x353EB8u;
    {
        const bool branch_taken_0x353eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EB8u;
        // 0x353ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353eb8) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353EC0u;
    // 0x353ec0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353EC0u;
    SET_GPR_U32(ctx, 31, 0x353EC8u);
    ctx->pc = 0x353EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353EC0u;
    // 0x353ec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353EC0u, 0x353EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353EC8u;
label_353ec8:
    // 0x353ec8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x353EC8u;
    {
        const bool branch_taken_0x353ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ec8) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353ED0u;
label_353ed0:
    // 0x353ed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353ed4: 0xa6230512  sh          $v1, 0x512($s1)
    ctx->pc = 0x353ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x353ed8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x353ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x353edc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x353edcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x353ee0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x353ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x353ee4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x353ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x353ee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x353ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x353eec: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x353eecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
label_353ef0:
    // 0x353ef0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x353ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x353ef4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353EF4u;
    {
        const bool branch_taken_0x353ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EF4u;
        // 0x353ef8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ef4) {
            ctx->pc = 0x353F08u;
            goto label_353f08;
        }
    }
    ctx->pc = 0x353EFCu;
    // 0x353efc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x353EFCu;
    {
        const bool branch_taken_0x353efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353efc) {
            ctx->pc = 0x353F88u;
            goto label_353f88;
        }
    }
    ctx->pc = 0x353F04u;
    // 0x353f04: 0x0  nop
    ctx->pc = 0x353f04u;
    // NOP
label_353f08:
    // 0x353f08: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x353f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353f0c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x353f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x353f10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x353f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x353f14: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353f14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353f18: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x353f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x353f1c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353F1Cu;
    {
        const bool branch_taken_0x353f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x353f1c) {
            ctx->pc = 0x353F58u;
            goto label_353f58;
        }
    }
    ctx->pc = 0x353F24u;
    // 0x353f24: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x353f24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353f28: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x353f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x353f2c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x353F2Cu;
    {
        const bool branch_taken_0x353f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F2Cu;
        // 0x353f30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f2c) {
            ctx->pc = 0x353F80u;
            goto label_353f80;
        }
    }
    ctx->pc = 0x353F34u;
    // 0x353f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353f38: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x353f38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x353f3c: 0x0  nop
    ctx->pc = 0x353f3cu;
    // NOP
    // 0x353f40: 0x0  nop
    ctx->pc = 0x353f40u;
    // NOP
    // 0x353f44: 0x2010  mfhi        $a0
    ctx->pc = 0x353f44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x353f48: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353f48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353f4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x353F4Cu;
    {
        const bool branch_taken_0x353f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F4Cu;
        // 0x353f50: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f4c) {
            ctx->pc = 0x353F80u;
            goto label_353f80;
        }
    }
    ctx->pc = 0x353F54u;
    // 0x353f54: 0x0  nop
    ctx->pc = 0x353f54u;
    // NOP
label_353f58:
    // 0x353f58: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x353f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353f5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x353f5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x353f60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353F60u;
    {
        const bool branch_taken_0x353f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353f60) {
            ctx->pc = 0x353F80u;
            goto label_353f80;
        }
    }
    ctx->pc = 0x353F68u;
    // 0x353f68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353f68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353f70: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x353f70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x353f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353F74u;
    {
        const bool branch_taken_0x353f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F74u;
        // 0x353f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f74) {
            ctx->pc = 0x353F88u;
            goto label_353f88;
        }
    }
    ctx->pc = 0x353F7Cu;
    // 0x353f7c: 0x0  nop
    ctx->pc = 0x353f7cu;
    // NOP
label_353f80:
    // 0x353f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353f84: 0x0  nop
    ctx->pc = 0x353f84u;
    // NOP
label_353f88:
    // 0x353f88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353F88u;
    {
        const bool branch_taken_0x353f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F88u;
        // 0x353f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f88) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353F90u;
    // 0x353f90: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353F90u;
    SET_GPR_U32(ctx, 31, 0x353F98u);
    ctx->pc = 0x353F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F90u;
    // 0x353f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353F90u, 0x353F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F98u;
label_353f98:
    // 0x353f98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x353f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353f9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x353f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353fa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x353fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353fa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x353fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x353FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FA8u;
        // 0x353fac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353FB0u;
}
