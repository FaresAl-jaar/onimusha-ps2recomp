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

// Function: sub_002DEC00
// Address: 0x2dec00 - 0x2deebc
void sub_002DEC00_0x2dec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEC00_0x2dec00");
#endif

    switch (ctx->pc) {
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec7cu: goto label_2dec7c;
        case 0x2decacu: goto label_2decac;
        case 0x2dedc8u: goto label_2dedc8;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee3cu: goto label_2dee3c;
        default: break;
    }

    ctx->pc = 0x2dec00u;

    // 0x2dec00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dec04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2dec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2dec08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dec0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dec10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dec10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dec18: 0x240460c0  addiu       $a0, $zero, 0x60C0
    ctx->pc = 0x2dec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24768));
    // 0x2dec1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dec20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dec20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dec28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dec28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dec30: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2dec30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec34: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x2DEC34u;
    SET_GPR_U32(ctx, 31, 0x2DEC3Cu);
    ctx->pc = 0x2DEC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC34u;
    // 0x2dec38: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DEC34u, 0x2DEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC3Cu;
label_2dec3c:
    // 0x2dec3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dec3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec40: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2DEC40u;
    {
        const bool branch_taken_0x2dec40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC40u;
        // 0x2dec44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec40) {
            ctx->pc = 0x2DEC80u;
            goto label_2dec80;
        }
    }
    ctx->pc = 0x2DEC48u;
    // 0x2dec48: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x2DEC48u;
    SET_GPR_U32(ctx, 31, 0x2DEC50u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2DEC48u, 0x2DEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC50u;
label_2dec50:
    // 0x2dec50: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dec54: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2dec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2dec58: 0x24427a30  addiu       $v0, $v0, 0x7A30
    ctx->pc = 0x2dec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31280));
    // 0x2dec5c: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2dec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2dec60: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x2dec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x2dec64: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x2dec64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
    // 0x2dec68: 0x24a5f3a0  addiu       $a1, $a1, -0xC60
    ctx->pc = 0x2dec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
    // 0x2dec6c: 0x24c6f2f0  addiu       $a2, $a2, -0xD10
    ctx->pc = 0x2dec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963952));
    // 0x2dec70: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2dec74: 0xc0400fc  jal         func_1003F0
    ctx->pc = 0x2DEC74u;
    SET_GPR_U32(ctx, 31, 0x2DEC7Cu);
    ctx->pc = 0x2DEC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC74u;
    // 0x2dec78: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x2DEC74u, 0x2DEC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC7Cu;
label_2dec7c:
    // 0x2dec7c: 0x0  nop
    ctx->pc = 0x2dec7cu;
    // NOP
label_2dec80:
    // 0x2dec80: 0x12800083  beqz        $s4, . + 4 + (0x83 << 2)
    ctx->pc = 0x2DEC80u;
    {
        const bool branch_taken_0x2dec80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC80u;
        // 0x2dec84: 0x3c0b0069  lui         $t3, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec80) {
            ctx->pc = 0x2DEE90u;
            goto label_2dee90;
        }
    }
    ctx->pc = 0x2DEC88u;
    // 0x2dec88: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2dec88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec8c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2dec8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec90: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2dec90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec98: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dec9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dec9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2deca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deca4: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x2DECA4u;
    SET_GPR_U32(ctx, 31, 0x2DECACu);
    ctx->pc = 0x2DECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECA4u;
    // 0x2deca8: 0x256b6ca0  addiu       $t3, $t3, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2DECA4u, 0x2DECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECACu;
label_2decac:
    // 0x2decac: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x2decacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2decb0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2decb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2decb4: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x2decb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2decb8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2decb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2decbc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2decbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2decc0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2decc4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2decc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2decc8: 0x24a57aa8  addiu       $a1, $a1, 0x7AA8
    ctx->pc = 0x2decc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31400));
    // 0x2deccc: 0x24427aa4  addiu       $v0, $v0, 0x7AA4
    ctx->pc = 0x2decccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31396));
    // 0x2decd0: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2decd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2decd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2decd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2decd8: 0xaf8480e0  sw          $a0, -0x7F20($gp)
    ctx->pc = 0x2decd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
    // 0x2decdc: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2decdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dece0: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x2dece0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x2dece4: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x2dece4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x2dece8: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2dece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2decec: 0xa6840056  sh          $a0, 0x56($s4)
    ctx->pc = 0x2dececu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 4));
    // 0x2decf0: 0xa680005a  sh          $zero, 0x5A($s4)
    ctx->pc = 0x2decf0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2decf4: 0xa6800058  sh          $zero, 0x58($s4)
    ctx->pc = 0x2decf4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2decf8: 0xa2800051  sb          $zero, 0x51($s4)
    ctx->pc = 0x2decf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x2decfc: 0xa29060b2  sb          $s0, 0x60B2($s4)
    ctx->pc = 0x2decfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24754), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ded00: 0xa29160b3  sb          $s1, 0x60B3($s4)
    ctx->pc = 0x2ded00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24755), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ded04: 0xa68360b0  sh          $v1, 0x60B0($s4)
    ctx->pc = 0x2ded04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 24752), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ded08: 0xc4206ca0  lwc1        $f0, 0x6CA0($at)
    ctx->pc = 0x2ded08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded0c: 0x928460b3  lbu         $a0, 0x60B3($s4)
    ctx->pc = 0x2ded0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24755)));
    // 0x2ded10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ded10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ded14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2ded14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ded18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ded18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ded1c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2ded1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2ded20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ded20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ded24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ded24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ded28: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ded28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ded2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ded30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ded30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ded34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ded34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ded38: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ded38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ded3c: 0x0  nop
    ctx->pc = 0x2ded3cu;
    // NOP
    // 0x2ded40: 0xae8360a8  sw          $v1, 0x60A8($s4)
    ctx->pc = 0x2ded40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24744), GPR_U32(ctx, 3));
    // 0x2ded44: 0xc4206ca8  lwc1        $f0, 0x6CA8($at)
    ctx->pc = 0x2ded44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded48: 0x928460b3  lbu         $a0, 0x60B3($s4)
    ctx->pc = 0x2ded48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24755)));
    // 0x2ded4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ded4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ded50: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2ded50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ded54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ded54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ded58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ded58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ded5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ded5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ded60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ded60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ded64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ded68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ded68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ded6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ded6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ded70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ded70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ded74: 0x0  nop
    ctx->pc = 0x2ded74u;
    // NOP
    // 0x2ded78: 0xae8360ac  sw          $v1, 0x60AC($s4)
    ctx->pc = 0x2ded78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24748), GPR_U32(ctx, 3));
    // 0x2ded7c: 0x8e8360a8  lw          $v1, 0x60A8($s4)
    ctx->pc = 0x2ded7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24744)));
    // 0x2ded80: 0xae8360a0  sw          $v1, 0x60A0($s4)
    ctx->pc = 0x2ded80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24736), GPR_U32(ctx, 3));
    // 0x2ded84: 0x8e8360ac  lw          $v1, 0x60AC($s4)
    ctx->pc = 0x2ded84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24748)));
    // 0x2ded88: 0xae8360a4  sw          $v1, 0x60A4($s4)
    ctx->pc = 0x2ded88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24740), GPR_U32(ctx, 3));
    // 0x2ded8c: 0x928560b3  lbu         $a1, 0x60B3($s4)
    ctx->pc = 0x2ded8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24755)));
    // 0x2ded90: 0x8e8360ac  lw          $v1, 0x60AC($s4)
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24748)));
    // 0x2ded94: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2ded94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ded98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ded98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ded9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ded9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2deda0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2deda4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2deda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2deda8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEDA8u;
    {
        const bool branch_taken_0x2deda8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2DEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDA8u;
        // 0x2dedac: 0x41043  sra         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deda8) {
            ctx->pc = 0x2DEDB8u;
            goto label_2dedb8;
        }
    }
    ctx->pc = 0x2DEDB0u;
    // 0x2dedb0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2dedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dedb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2dedb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2dedb8:
    // 0x2dedb8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2dedb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dedbc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x2dedbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dedc0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x2DEDC0u;
    {
        const bool branch_taken_0x2dedc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDC0u;
        // 0x2dedc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dedc0) {
            ctx->pc = 0x2DEE88u;
            goto label_2dee88;
        }
    }
    ctx->pc = 0x2DEDC8u;
label_2dedc8:
    // 0x2dedc8: 0x928560b3  lbu         $a1, 0x60B3($s4)
    ctx->pc = 0x2dedc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24755)));
    // 0x2dedcc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2dedccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2dedd0: 0x8e8360a8  lw          $v1, 0x60A8($s4)
    ctx->pc = 0x2dedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24744)));
    // 0x2dedd4: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2dedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2dedd8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2dedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2deddc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2deddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dede0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2dede0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2dede4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2dede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dede8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2dede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dedec: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEDECu;
    {
        const bool branch_taken_0x2dedec = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2DEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDECu;
        // 0x2dedf0: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dedec) {
            ctx->pc = 0x2DEDFCu;
            goto label_2dedfc;
        }
    }
    ctx->pc = 0x2DEDF4u;
    // 0x2dedf4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2dedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dedf8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2dedf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2dedfc:
    // 0x2dedfc: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x2dedfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dee00: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x2dee00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dee04: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DEE04u;
    {
        const bool branch_taken_0x2dee04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE04u;
        // 0x2dee08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee04) {
            ctx->pc = 0x2DEE70u;
            goto label_2dee70;
        }
    }
    ctx->pc = 0x2DEE0Cu;
    // 0x2dee0c: 0x0  nop
    ctx->pc = 0x2dee0cu;
    // NOP
label_2dee10:
    // 0x2dee10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee14: 0x2651018  mult        $v0, $s3, $a1
    ctx->pc = 0x2dee14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dee18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dee18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dee1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee20: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2dee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2dee24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2dee24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2dee28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dee2c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2dee30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2dee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2dee34: 0xc0b7bb0  jal         func_2DEEC0
    ctx->pc = 0x2DEE34u;
    SET_GPR_U32(ctx, 31, 0x2DEE3Cu);
    ctx->pc = 0x2DEE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE34u;
    // 0x2dee38: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEEC0u, 0x2DEE34u, 0x2DEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE3Cu;
label_2dee3c:
    // 0x2dee3c: 0x928460b3  lbu         $a0, 0x60B3($s4)
    ctx->pc = 0x2dee3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24755)));
    // 0x2dee40: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2dee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2dee44: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2dee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2dee48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dee48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dee4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2dee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dee50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dee54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dee54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dee58: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2dee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dee5c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2dee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dee60: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x2dee60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dee64: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DEE64u;
    {
        const bool branch_taken_0x2dee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE64u;
        // 0x2dee68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee64) {
            ctx->pc = 0x2DEE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dee10;
        }
    }
    ctx->pc = 0x2DEE6Cu;
    // 0x2dee6c: 0x0  nop
    ctx->pc = 0x2dee6cu;
    // NOP
label_2dee70:
    // 0x2dee70: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2dee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2dee74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dee74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2dee78: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2dee78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dee7c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2DEE7Cu;
    {
        const bool branch_taken_0x2dee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE7Cu;
        // 0x2dee80: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee7c) {
            ctx->pc = 0x2DEDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dedc8;
        }
    }
    ctx->pc = 0x2DEE84u;
    // 0x2dee84: 0x0  nop
    ctx->pc = 0x2dee84u;
    // NOP
label_2dee88:
    // 0x2dee88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEE88u;
    {
        const bool branch_taken_0x2dee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE88u;
        // 0x2dee8c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee88) {
            ctx->pc = 0x2DEE98u;
            goto label_2dee98;
        }
    }
    ctx->pc = 0x2DEE90u;
label_2dee90:
    // 0x2dee90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dee90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee94: 0x0  nop
    ctx->pc = 0x2dee94u;
    // NOP
label_2dee98:
    // 0x2dee98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2dee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dee9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dee9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2deea0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2deea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2deea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2deea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2deea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2deea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deeac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2deeacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deeb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2deeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2deeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEB4u;
        // 0x2deeb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEEBCu;
}
