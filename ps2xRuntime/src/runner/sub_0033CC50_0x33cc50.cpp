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

// Function: sub_0033CC50
// Address: 0x33cc50 - 0x33ced8
void sub_0033CC50_0x33cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CC50_0x33cc50");
#endif

    switch (ctx->pc) {
        case 0x33ccc4u: goto label_33ccc4;
        case 0x33cd08u: goto label_33cd08;
        case 0x33cd3cu: goto label_33cd3c;
        case 0x33cec8u: goto label_33cec8;
        default: break;
    }

    ctx->pc = 0x33cc50u;

    // 0x33cc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33cc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33cc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33cc5c: 0x90822b01  lbu         $v0, 0x2B01($a0)
    ctx->pc = 0x33cc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11009)));
    // 0x33cc60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CC60u;
    {
        const bool branch_taken_0x33cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC60u;
        // 0x33cc64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc60) {
            ctx->pc = 0x33CC70u;
            goto label_33cc70;
        }
    }
    ctx->pc = 0x33CC68u;
    // 0x33cc68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33cc6c: 0xa2022b01  sb          $v0, 0x2B01($s0)
    ctx->pc = 0x33cc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11009), (uint8_t)GPR_U32(ctx, 2));
label_33cc70:
    // 0x33cc70: 0x92032af1  lbu         $v1, 0x2AF1($s0)
    ctx->pc = 0x33cc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10993)));
    // 0x33cc74: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x33cc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x33cc78: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CC78u;
    {
        const bool branch_taken_0x33cc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cc78) {
            ctx->pc = 0x33CC98u;
            goto label_33cc98;
        }
    }
    ctx->pc = 0x33CC80u;
    // 0x33cc80: 0xa2002af1  sb          $zero, 0x2AF1($s0)
    ctx->pc = 0x33cc80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10993), (uint8_t)GPR_U32(ctx, 0));
    // 0x33cc84: 0xa2002af2  sb          $zero, 0x2AF2($s0)
    ctx->pc = 0x33cc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10994), (uint8_t)GPR_U32(ctx, 0));
    // 0x33cc88: 0xa2002af0  sb          $zero, 0x2AF0($s0)
    ctx->pc = 0x33cc88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10992), (uint8_t)GPR_U32(ctx, 0));
    // 0x33cc8c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33CC8Cu;
    {
        const bool branch_taken_0x33cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC8Cu;
        // 0x33cc90: 0xa2000820  sb          $zero, 0x820($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2080), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc8c) {
            ctx->pc = 0x33CD40u;
            goto label_33cd40;
        }
    }
    ctx->pc = 0x33CC94u;
    // 0x33cc94: 0x0  nop
    ctx->pc = 0x33cc94u;
    // NOP
label_33cc98:
    // 0x33cc98: 0x92022af2  lbu         $v0, 0x2AF2($s0)
    ctx->pc = 0x33cc98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10994)));
    // 0x33cc9c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x33cc9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33cca0: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x33CCA0u;
    {
        const bool branch_taken_0x33cca0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCA0u;
        // 0x33cca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cca0) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCA8u;
    // 0x33cca8: 0xa2020820  sb          $v0, 0x820($s0)
    ctx->pc = 0x33cca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2080), (uint8_t)GPR_U32(ctx, 2));
    // 0x33ccac: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x33ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x33ccb0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x33ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x33ccb4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33CCB4u;
    {
        const bool branch_taken_0x33ccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCB4u;
        // 0x33ccb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccb4) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCBCu;
    // 0x33ccbc: 0xc0cf890  jal         func_33E240
    ctx->pc = 0x33CCBCu;
    SET_GPR_U32(ctx, 31, 0x33CCC4u);
    ctx->pc = 0x33E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E240u, 0x33CCBCu, 0x33CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CCC4u;
label_33ccc4:
    // 0x33ccc4: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x33ccc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x33ccc8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x33ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x33cccc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x33ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x33ccd0: 0x26040810  addiu       $a0, $s0, 0x810
    ctx->pc = 0x33ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2064));
    // 0x33ccd4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x33ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x33ccd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33ccd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ccdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ccdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cce0: 0xc60d2af8  lwc1        $f13, 0x2AF8($s0)
    ctx->pc = 0x33cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33cce4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x33cce4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33cce8: 0x0  nop
    ctx->pc = 0x33cce8u;
    // NOP
    // 0x33ccec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ccecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ccf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33ccf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33ccf4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33ccf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33ccf8: 0x0  nop
    ctx->pc = 0x33ccf8u;
    // NOP
    // 0x33ccfc: 0x0  nop
    ctx->pc = 0x33ccfcu;
    // NOP
    // 0x33cd00: 0xc0cf2ec  jal         func_33CBB0
    ctx->pc = 0x33CD00u;
    SET_GPR_U32(ctx, 31, 0x33CD08u);
    ctx->pc = 0x33CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CBB0u, 0x33CD00u, 0x33CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD08u;
label_33cd08:
    // 0x33cd08: 0x92022af2  lbu         $v0, 0x2AF2($s0)
    ctx->pc = 0x33cd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10994)));
    // 0x33cd0c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x33cd0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33cd10: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x33CD10u;
    {
        const bool branch_taken_0x33cd10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cd10) {
            ctx->pc = 0x33CD40u;
            goto label_33cd40;
        }
    }
    ctx->pc = 0x33CD18u;
    // 0x33cd18: 0xde020500  ld          $v0, 0x500($s0)
    ctx->pc = 0x33cd18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x33cd1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x33cd20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CD20u;
    {
        const bool branch_taken_0x33cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd20) {
            ctx->pc = 0x33CD40u;
            goto label_33cd40;
        }
    }
    ctx->pc = 0x33CD28u;
    // 0x33cd28: 0x92022b00  lbu         $v0, 0x2B00($s0)
    ctx->pc = 0x33cd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11008)));
    // 0x33cd2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CD2Cu;
    {
        const bool branch_taken_0x33cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD2Cu;
        // 0x33cd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd2c) {
            ctx->pc = 0x33CD40u;
            goto label_33cd40;
        }
    }
    ctx->pc = 0x33CD34u;
    // 0x33cd34: 0xc0cf928  jal         func_33E4A0
    ctx->pc = 0x33CD34u;
    SET_GPR_U32(ctx, 31, 0x33CD3Cu);
    ctx->pc = 0x33E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E4A0u, 0x33CD34u, 0x33CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD3Cu;
label_33cd3c:
    // 0x33cd3c: 0x0  nop
    ctx->pc = 0x33cd3cu;
    // NOP
label_33cd40:
    // 0x33cd40: 0xde020690  ld          $v0, 0x690($s0)
    ctx->pc = 0x33cd40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x33cd44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x33cd48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x33CD48u;
    {
        const bool branch_taken_0x33cd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd48) {
            ctx->pc = 0x33CDD8u;
            goto label_33cdd8;
        }
    }
    ctx->pc = 0x33CD50u;
    // 0x33cd50: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x33cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x33cd54: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x33cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x33cd58: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x33CD58u;
    {
        const bool branch_taken_0x33cd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd58) {
            ctx->pc = 0x33CDD8u;
            goto label_33cdd8;
        }
    }
    ctx->pc = 0x33CD60u;
    // 0x33cd60: 0x92022af3  lbu         $v0, 0x2AF3($s0)
    ctx->pc = 0x33cd60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10995)));
    // 0x33cd64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CD64u;
    {
        const bool branch_taken_0x33cd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd64) {
            ctx->pc = 0x33CD78u;
            goto label_33cd78;
        }
    }
    ctx->pc = 0x33CD6Cu;
    // 0x33cd6c: 0x92022af4  lbu         $v0, 0x2AF4($s0)
    ctx->pc = 0x33cd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10996)));
    // 0x33cd70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33cd74: 0xa2022af4  sb          $v0, 0x2AF4($s0)
    ctx->pc = 0x33cd74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10996), (uint8_t)GPR_U32(ctx, 2));
label_33cd78:
    // 0x33cd78: 0x8e0229cc  lw          $v0, 0x29CC($s0)
    ctx->pc = 0x33cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10700)));
    // 0x33cd7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CD7Cu;
    {
        const bool branch_taken_0x33cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd7c) {
            ctx->pc = 0x33CD8Cu;
            goto label_33cd8c;
        }
    }
    ctx->pc = 0x33CD84u;
    // 0x33cd84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33CD84u;
    {
        const bool branch_taken_0x33cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD84u;
        // 0x33cd88: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd84) {
            ctx->pc = 0x33CD90u;
            goto label_33cd90;
        }
    }
    ctx->pc = 0x33CD8Cu;
label_33cd8c:
    // 0x33cd8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33cd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cd90:
    // 0x33cd90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33cd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33cd94: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33cd98: 0x2442efe8  addiu       $v0, $v0, -0x1018
    ctx->pc = 0x33cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963176));
    // 0x33cd9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cda0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33cda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cda4: 0xa2022af3  sb          $v0, 0x2AF3($s0)
    ctx->pc = 0x33cda4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10995), (uint8_t)GPR_U32(ctx, 2));
    // 0x33cda8: 0x8e0229cc  lw          $v0, 0x29CC($s0)
    ctx->pc = 0x33cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10700)));
    // 0x33cdac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CDACu;
    {
        const bool branch_taken_0x33cdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cdac) {
            ctx->pc = 0x33CDBCu;
            goto label_33cdbc;
        }
    }
    ctx->pc = 0x33CDB4u;
    // 0x33cdb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33CDB4u;
    {
        const bool branch_taken_0x33cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDB4u;
        // 0x33cdb8: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdb4) {
            ctx->pc = 0x33CDC0u;
            goto label_33cdc0;
        }
    }
    ctx->pc = 0x33CDBCu;
label_33cdbc:
    // 0x33cdbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33cdbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cdc0:
    // 0x33cdc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33cdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33cdc4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33cdc8: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x33cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x33cdcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cdd0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33cdd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cdd4: 0xa2022b00  sb          $v0, 0x2B00($s0)
    ctx->pc = 0x33cdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11008), (uint8_t)GPR_U32(ctx, 2));
label_33cdd8:
    // 0x33cdd8: 0x92022af4  lbu         $v0, 0x2AF4($s0)
    ctx->pc = 0x33cdd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10996)));
    // 0x33cddc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x33cddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33cde0: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x33CDE0u;
    {
        const bool branch_taken_0x33cde0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cde0) {
            ctx->pc = 0x33CE50u;
            goto label_33ce50;
        }
    }
    ctx->pc = 0x33CDE8u;
    // 0x33cde8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cdec: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x33cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x33cdf0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33cdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33cdf4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x33cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x33cdf8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x33cdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x33cdfc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33ce00: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33ce00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33ce04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33ce04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ce08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ce0c: 0x0  nop
    ctx->pc = 0x33ce0cu;
    // NOP
    // 0x33ce10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33ce10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33ce14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33ce14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ce18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33CE18u;
    {
        const bool branch_taken_0x33ce18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ce18) {
            ctx->pc = 0x33CE30u;
            goto label_33ce30;
        }
    }
    ctx->pc = 0x33CE20u;
    // 0x33ce20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33ce20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33ce24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x33ce24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33ce28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CE28u;
    {
        const bool branch_taken_0x33ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE28u;
        // 0x33ce2c: 0xa2032b00  sb          $v1, 0x2B00($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11008), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce28) {
            ctx->pc = 0x33CE4Cu;
            goto label_33ce4c;
        }
    }
    ctx->pc = 0x33CE30u;
label_33ce30:
    // 0x33ce30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33ce30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33ce34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33ce38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33ce38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33ce3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x33ce3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33ce40: 0x0  nop
    ctx->pc = 0x33ce40u;
    // NOP
    // 0x33ce44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33ce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33ce48: 0xa2032b00  sb          $v1, 0x2B00($s0)
    ctx->pc = 0x33ce48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11008), (uint8_t)GPR_U32(ctx, 3));
label_33ce4c:
    // 0x33ce4c: 0xa2002af4  sb          $zero, 0x2AF4($s0)
    ctx->pc = 0x33ce4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10996), (uint8_t)GPR_U32(ctx, 0));
label_33ce50:
    // 0x33ce50: 0x92022af3  lbu         $v0, 0x2AF3($s0)
    ctx->pc = 0x33ce50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10995)));
    // 0x33ce54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CE54u;
    {
        const bool branch_taken_0x33ce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ce54) {
            ctx->pc = 0x33CE68u;
            goto label_33ce68;
        }
    }
    ctx->pc = 0x33CE5Cu;
    // 0x33ce5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33ce60: 0xa2022af3  sb          $v0, 0x2AF3($s0)
    ctx->pc = 0x33ce60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10995), (uint8_t)GPR_U32(ctx, 2));
    // 0x33ce64: 0x0  nop
    ctx->pc = 0x33ce64u;
    // NOP
label_33ce68:
    // 0x33ce68: 0x92022b00  lbu         $v0, 0x2B00($s0)
    ctx->pc = 0x33ce68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11008)));
    // 0x33ce6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CE6Cu;
    {
        const bool branch_taken_0x33ce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ce6c) {
            ctx->pc = 0x33CE80u;
            goto label_33ce80;
        }
    }
    ctx->pc = 0x33CE74u;
    // 0x33ce74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33ce78: 0xa2022b00  sb          $v0, 0x2B00($s0)
    ctx->pc = 0x33ce78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11008), (uint8_t)GPR_U32(ctx, 2));
    // 0x33ce7c: 0x0  nop
    ctx->pc = 0x33ce7cu;
    // NOP
label_33ce80:
    // 0x33ce80: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x33ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x33ce84: 0xc6012afc  lwc1        $f1, 0x2AFC($s0)
    ctx->pc = 0x33ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ce88: 0x3442fa36  ori         $v0, $v0, 0xFA36
    ctx->pc = 0x33ce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64054);
    // 0x33ce8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ce8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ce90: 0x0  nop
    ctx->pc = 0x33ce90u;
    // NOP
    // 0x33ce94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33ce94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ce98: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x33CE98u;
    {
        const bool branch_taken_0x33ce98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE98u;
        // 0x33ce9c: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce98) {
            ctx->pc = 0x33CEB8u;
            goto label_33ceb8;
        }
    }
    ctx->pc = 0x33CEA0u;
    // 0x33cea0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x33cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x33cea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cea8: 0x0  nop
    ctx->pc = 0x33cea8u;
    // NOP
    // 0x33ceac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33ceacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ceb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33CEB0u;
    {
        const bool branch_taken_0x33ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEB0u;
        // 0x33ceb4: 0xe6002afc  swc1        $f0, 0x2AFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11004), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ceb0) {
            ctx->pc = 0x33CEC0u;
            goto label_33cec0;
        }
    }
    ctx->pc = 0x33CEB8u;
label_33ceb8:
    // 0x33ceb8: 0xae002afc  sw          $zero, 0x2AFC($s0)
    ctx->pc = 0x33ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11004), GPR_U32(ctx, 0));
    // 0x33cebc: 0x0  nop
    ctx->pc = 0x33cebcu;
    // NOP
label_33cec0:
    // 0x33cec0: 0xc098770  jal         func_261DC0
    ctx->pc = 0x33CEC0u;
    SET_GPR_U32(ctx, 31, 0x33CEC8u);
    ctx->pc = 0x33CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEC0u;
    // 0x33cec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x33CEC0u, 0x33CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEC8u;
label_33cec8:
    // 0x33cec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33cec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ceccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ced0: 0x3e00008  jr          $ra
    ctx->pc = 0x33CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CED0u;
        // 0x33ced4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CED8u;
}
