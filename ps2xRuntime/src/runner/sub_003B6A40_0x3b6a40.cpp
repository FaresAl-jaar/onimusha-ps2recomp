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

// Function: sub_003B6A40
// Address: 0x3b6a40 - 0x3b6c58
void sub_003B6A40_0x3b6a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6A40_0x3b6a40");
#endif

    switch (ctx->pc) {
        case 0x3b6a90u: goto label_3b6a90;
        case 0x3b6aa0u: goto label_3b6aa0;
        case 0x3b6ae0u: goto label_3b6ae0;
        case 0x3b6af4u: goto label_3b6af4;
        case 0x3b6b0cu: goto label_3b6b0c;
        case 0x3b6b20u: goto label_3b6b20;
        case 0x3b6b30u: goto label_3b6b30;
        case 0x3b6b9cu: goto label_3b6b9c;
        case 0x3b6c48u: goto label_3b6c48;
        default: break;
    }

    ctx->pc = 0x3b6a40u;

    // 0x3b6a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b6a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b6a44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b6a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b6a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b6a50: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3b6a50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3b6a54: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B6A54u;
    {
        const bool branch_taken_0x3b6a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A54u;
        // 0x3b6a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a54) {
            ctx->pc = 0x3B6AD0u;
            goto label_3b6ad0;
        }
    }
    ctx->pc = 0x3B6A5Cu;
    // 0x3b6a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6a60: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B6A60u;
    {
        const bool branch_taken_0x3b6a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b6a60) {
            ctx->pc = 0x3B6AB0u;
            goto label_3b6ab0;
        }
    }
    ctx->pc = 0x3B6A68u;
    // 0x3b6a68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6A68u;
    {
        const bool branch_taken_0x3b6a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6a68) {
            ctx->pc = 0x3B6A78u;
            goto label_3b6a78;
        }
    }
    ctx->pc = 0x3B6A70u;
    // 0x3b6a70: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x3B6A70u;
    {
        const bool branch_taken_0x3b6a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6a70) {
            ctx->pc = 0x3B6C48u;
            goto label_3b6c48;
        }
    }
    ctx->pc = 0x3B6A78u;
label_3b6a78:
    // 0x3b6a78: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6A78u;
    {
        const bool branch_taken_0x3b6a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6a78) {
            ctx->pc = 0x3B6A98u;
            goto label_3b6a98;
        }
    }
    ctx->pc = 0x3B6A80u;
    // 0x3b6a80: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3b6a80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3b6a84: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b6a84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b6a88: 0xc0aa4f4  jal         func_2A93D0
    ctx->pc = 0x3B6A88u;
    SET_GPR_U32(ctx, 31, 0x3B6A90u);
    ctx->pc = 0x3B6A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A88u;
    // 0x3b6a8c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A93D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A93D0u, 0x3B6A88u, 0x3B6A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A90u;
label_3b6a90:
    // 0x3b6a90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6A90u;
    {
        const bool branch_taken_0x3b6a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A90u;
        // 0x3b6a94: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a90) {
            ctx->pc = 0x3B6AA0u;
            goto label_3b6aa0;
        }
    }
    ctx->pc = 0x3B6A98u;
label_3b6a98:
    // 0x3b6a98: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6A98u;
    SET_GPR_U32(ctx, 31, 0x3B6AA0u);
    ctx->pc = 0x3B6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A98u;
    // 0x3b6a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6A98u, 0x3B6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AA0u;
label_3b6aa0:
    // 0x3b6aa0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b6aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b6aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b6aa8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3B6AA8u;
    {
        const bool branch_taken_0x3b6aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AA8u;
        // 0x3b6aac: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6aa8) {
            ctx->pc = 0x3B6C48u;
            goto label_3b6c48;
        }
    }
    ctx->pc = 0x3B6AB0u;
label_3b6ab0:
    // 0x3b6ab0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3b6ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3b6ab4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3b6ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6ab8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3b6ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b6abc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3b6abcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6ac0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3b6ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6ac4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3b6ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b6ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b6acc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3b6accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b6ad0:
    // 0x3b6ad0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3b6ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b6ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b6ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ad8: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3B6AD8u;
    SET_GPR_U32(ctx, 31, 0x3B6AE0u);
    ctx->pc = 0x3B6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AD8u;
    // 0x3b6adc: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3B6AD8u, 0x3B6AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AE0u;
label_3b6ae0:
    // 0x3b6ae0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b6ae4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3b6ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3b6ae8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3b6ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3b6aec: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3B6AECu;
    SET_GPR_U32(ctx, 31, 0x3B6AF4u);
    ctx->pc = 0x3B6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AECu;
    // 0x3b6af0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3B6AECu, 0x3B6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AF4u;
label_3b6af4:
    // 0x3b6af4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b6af8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3b6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x3b6afc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3b6afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3b6b00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3b6b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3b6b04: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x3B6B04u;
    SET_GPR_U32(ctx, 31, 0x3B6B0Cu);
    ctx->pc = 0x3B6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B04u;
    // 0x3b6b08: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x3B6B04u, 0x3B6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B0Cu;
label_3b6b0c:
    // 0x3b6b0c: 0xe6000554  swc1        $f0, 0x554($s0)
    ctx->pc = 0x3b6b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x3b6b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b14: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3b6b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3b6b18: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B6B18u;
    SET_GPR_U32(ctx, 31, 0x3B6B20u);
    ctx->pc = 0x3B6B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B18u;
    // 0x3b6b1c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B6B18u, 0x3B6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B20u;
label_3b6b20:
    // 0x3b6b20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6B20u;
    {
        const bool branch_taken_0x3b6b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B20u;
        // 0x3b6b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b20) {
            ctx->pc = 0x3B6B30u;
            goto label_3b6b30;
        }
    }
    ctx->pc = 0x3B6B28u;
    // 0x3b6b28: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6B28u;
    SET_GPR_U32(ctx, 31, 0x3B6B30u);
    ctx->pc = 0x3B6B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B28u;
    // 0x3b6b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6B28u, 0x3B6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B30u;
label_3b6b30:
    // 0x3b6b30: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b6b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b6b34: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B6B34u;
    {
        const bool branch_taken_0x3b6b34 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3B6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B34u;
        // 0x3b6b38: 0x28610105  slti        $at, $v1, 0x105 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)261) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b34) {
            ctx->pc = 0x3B6BA0u;
            goto label_3b6ba0;
        }
    }
    ctx->pc = 0x3B6B3Cu;
    // 0x3b6b3c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B6B3Cu;
    {
        const bool branch_taken_0x3b6b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6b3c) {
            ctx->pc = 0x3B6BA0u;
            goto label_3b6ba0;
        }
    }
    ctx->pc = 0x3B6B44u;
    // 0x3b6b44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b6b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b6b48: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3b6b48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b6b4c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3b6b4cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3b6b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b54: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b6b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b6b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b5c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b6b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b6b60: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3b6b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3b6b64: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b6b64u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3b6b68: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b6b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b6b6c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3b6b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3b6b70: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b6b70u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3b6b74: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b6b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b6b78: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3b6b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3b6b7c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b6b7cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b6b80: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b6b80u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b6b84: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b6b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b6b88: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b6b8c: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3b6b8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3b6b90: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3b6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b6b94: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B6B94u;
    SET_GPR_U32(ctx, 31, 0x3B6B9Cu);
    ctx->pc = 0x3B6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B94u;
    // 0x3b6b98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B6B94u, 0x3B6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B9Cu;
label_3b6b9c:
    // 0x3b6b9c: 0x0  nop
    ctx->pc = 0x3b6b9cu;
    // NOP
label_3b6ba0:
    // 0x3b6ba0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3b6ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3b6ba4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6BA4u;
    {
        const bool branch_taken_0x3b6ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BA4u;
        // 0x3b6ba8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ba4) {
            ctx->pc = 0x3B6BB8u;
            goto label_3b6bb8;
        }
    }
    ctx->pc = 0x3B6BACu;
    // 0x3b6bac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B6BACu;
    {
        const bool branch_taken_0x3b6bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6bac) {
            ctx->pc = 0x3B6C38u;
            goto label_3b6c38;
        }
    }
    ctx->pc = 0x3B6BB4u;
    // 0x3b6bb4: 0x0  nop
    ctx->pc = 0x3b6bb4u;
    // NOP
label_3b6bb8:
    // 0x3b6bb8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3b6bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b6bbc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b6bc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b6bc4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b6bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b6bc8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3b6bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3b6bcc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B6BCCu;
    {
        const bool branch_taken_0x3b6bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b6bcc) {
            ctx->pc = 0x3B6C08u;
            goto label_3b6c08;
        }
    }
    ctx->pc = 0x3B6BD4u;
    // 0x3b6bd4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3b6bd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b6bd8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b6bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b6bdc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B6BDCu;
    {
        const bool branch_taken_0x3b6bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BDCu;
        // 0x3b6be0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bdc) {
            ctx->pc = 0x3B6C30u;
            goto label_3b6c30;
        }
    }
    ctx->pc = 0x3B6BE4u;
    // 0x3b6be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6be8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b6be8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b6bec: 0x0  nop
    ctx->pc = 0x3b6becu;
    // NOP
    // 0x3b6bf0: 0x0  nop
    ctx->pc = 0x3b6bf0u;
    // NOP
    // 0x3b6bf4: 0x2010  mfhi        $a0
    ctx->pc = 0x3b6bf4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b6bf8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b6bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b6bfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B6BFCu;
    {
        const bool branch_taken_0x3b6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BFCu;
        // 0x3b6c00: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bfc) {
            ctx->pc = 0x3B6C30u;
            goto label_3b6c30;
        }
    }
    ctx->pc = 0x3B6C04u;
    // 0x3b6c04: 0x0  nop
    ctx->pc = 0x3b6c04u;
    // NOP
label_3b6c08:
    // 0x3b6c08: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b6c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b6c0c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b6c0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b6c10: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6C10u;
    {
        const bool branch_taken_0x3b6c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6c10) {
            ctx->pc = 0x3B6C30u;
            goto label_3b6c30;
        }
    }
    ctx->pc = 0x3B6C18u;
    // 0x3b6c18: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b6c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b6c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6c20: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3b6c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b6c24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6C24u;
    {
        const bool branch_taken_0x3b6c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C24u;
        // 0x3b6c28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c24) {
            ctx->pc = 0x3B6C38u;
            goto label_3b6c38;
        }
    }
    ctx->pc = 0x3B6C2Cu;
    // 0x3b6c2c: 0x0  nop
    ctx->pc = 0x3b6c2cu;
    // NOP
label_3b6c30:
    // 0x3b6c30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6c34: 0x0  nop
    ctx->pc = 0x3b6c34u;
    // NOP
label_3b6c38:
    // 0x3b6c38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6C38u;
    {
        const bool branch_taken_0x3b6c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C38u;
        // 0x3b6c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c38) {
            ctx->pc = 0x3B6C48u;
            goto label_3b6c48;
        }
    }
    ctx->pc = 0x3B6C40u;
    // 0x3b6c40: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6C40u;
    SET_GPR_U32(ctx, 31, 0x3B6C48u);
    ctx->pc = 0x3B6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6C40u;
    // 0x3b6c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6C40u, 0x3B6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6C48u;
label_3b6c48:
    // 0x3b6c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6c50: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C50u;
        // 0x3b6c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6C58u;
}
