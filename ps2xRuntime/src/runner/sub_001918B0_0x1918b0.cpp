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

// Function: sub_001918B0
// Address: 0x1918b0 - 0x19312c
void sub_001918B0_0x1918b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001918B0_0x1918b0");
#endif

    switch (ctx->pc) {
        case 0x191a84u: goto label_191a84;
        case 0x191aa0u: goto label_191aa0;
        case 0x191b94u: goto label_191b94;
        case 0x191bc8u: goto label_191bc8;
        case 0x191bd8u: goto label_191bd8;
        case 0x191be0u: goto label_191be0;
        case 0x191bf4u: goto label_191bf4;
        case 0x191c08u: goto label_191c08;
        case 0x191c18u: goto label_191c18;
        case 0x191c90u: goto label_191c90;
        case 0x191c9cu: goto label_191c9c;
        case 0x191d60u: goto label_191d60;
        case 0x191df8u: goto label_191df8;
        case 0x191e60u: goto label_191e60;
        case 0x191eccu: goto label_191ecc;
        case 0x191f44u: goto label_191f44;
        case 0x1920b0u: goto label_1920b0;
        case 0x192118u: goto label_192118;
        case 0x1922d0u: goto label_1922d0;
        case 0x1925b4u: goto label_1925b4;
        case 0x1925ecu: goto label_1925ec;
        case 0x192620u: goto label_192620;
        case 0x19264cu: goto label_19264c;
        case 0x192678u: goto label_192678;
        case 0x1926c4u: goto label_1926c4;
        case 0x192748u: goto label_192748;
        case 0x192784u: goto label_192784;
        case 0x1927bcu: goto label_1927bc;
        case 0x1927ecu: goto label_1927ec;
        case 0x192870u: goto label_192870;
        case 0x192888u: goto label_192888;
        case 0x192910u: goto label_192910;
        case 0x19294cu: goto label_19294c;
        case 0x192988u: goto label_192988;
        case 0x1929b8u: goto label_1929b8;
        case 0x1929e4u: goto label_1929e4;
        case 0x192a14u: goto label_192a14;
        case 0x192a88u: goto label_192a88;
        case 0x192ae4u: goto label_192ae4;
        case 0x192b34u: goto label_192b34;
        case 0x192b40u: goto label_192b40;
        case 0x192b48u: goto label_192b48;
        case 0x192d40u: goto label_192d40;
        case 0x192d6cu: goto label_192d6c;
        case 0x192dc0u: goto label_192dc0;
        case 0x192ddcu: goto label_192ddc;
        case 0x192e08u: goto label_192e08;
        case 0x192e20u: goto label_192e20;
        case 0x192e8cu: goto label_192e8c;
        case 0x192e9cu: goto label_192e9c;
        case 0x192ea8u: goto label_192ea8;
        case 0x192ec0u: goto label_192ec0;
        case 0x192eecu: goto label_192eec;
        case 0x192f30u: goto label_192f30;
        case 0x192f58u: goto label_192f58;
        case 0x192fb0u: goto label_192fb0;
        case 0x192fdcu: goto label_192fdc;
        case 0x193014u: goto label_193014;
        case 0x19306cu: goto label_19306c;
        case 0x193094u: goto label_193094;
        case 0x1930a4u: goto label_1930a4;
        case 0x1930e0u: goto label_1930e0;
        case 0x1930e8u: goto label_1930e8;
        case 0x1930f4u: goto label_1930f4;
        default: break;
    }

    ctx->pc = 0x1918b0u;

label_1918b0:
    // 0x1918b0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1918b4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x1918b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1918b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1918bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1918bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1918c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1918c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1918c4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1918c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1918c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1918c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1918cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1918ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1918d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1918d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1918d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1918d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1918d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1918dc: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1918e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1918e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1918e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1918e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1918e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1918e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1918ec: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x1918ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x1918f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1918f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1918f4: 0xa38586d0  sb          $a1, -0x7930($gp)
    ctx->pc = 0x1918f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936272), (uint8_t)GPR_U32(ctx, 5));
    // 0x1918f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1918fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1918fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191900: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x191900u;
    {
        const bool branch_taken_0x191900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x191904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191900u;
        // 0x191904: 0x38a30001  xori        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191900) {
            ctx->pc = 0x191920u;
            goto label_191920;
        }
    }
    ctx->pc = 0x191908u;
    // 0x191908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19190c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x191910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191914: 0x106005f8  beqz        $v1, . + 4 + (0x5F8 << 2)
    ctx->pc = 0x191914u;
    {
        const bool branch_taken_0x191914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191914) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x19191Cu;
    // 0x19191c: 0x0  nop
    ctx->pc = 0x19191cu;
    // NOP
label_191920:
    // 0x191920: 0x8f838728  lw          $v1, -0x78D8($gp)
    ctx->pc = 0x191920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
    // 0x191924: 0x8f828724  lw          $v0, -0x78DC($gp)
    ctx->pc = 0x191924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x191928: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191928u;
    {
        const bool branch_taken_0x191928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191928) {
            ctx->pc = 0x191980u;
            goto label_191980;
        }
    }
    ctx->pc = 0x191930u;
    // 0x191930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191930u;
    {
        const bool branch_taken_0x191930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191930) {
            ctx->pc = 0x191948u;
            goto label_191948;
        }
    }
    ctx->pc = 0x191938u;
    // 0x191938: 0x9383872c  lbu         $v1, -0x78D4($gp)
    ctx->pc = 0x191938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x19193c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191940: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191940u;
    {
        const bool branch_taken_0x191940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191940) {
            ctx->pc = 0x191950u;
            goto label_191950;
        }
    }
    ctx->pc = 0x191948u;
label_191948:
    // 0x191948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19194c: 0xaf82870c  sw          $v0, -0x78F4($gp)
    ctx->pc = 0x19194cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 2));
label_191950:
    // 0x191950: 0x8f828724  lw          $v0, -0x78DC($gp)
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x191954: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191954u;
    {
        const bool branch_taken_0x191954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191954) {
            ctx->pc = 0x191978u;
            goto label_191978;
        }
    }
    ctx->pc = 0x19195Cu;
    // 0x19195c: 0x9383872c  lbu         $v1, -0x78D4($gp)
    ctx->pc = 0x19195cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x191960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191964: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191964u;
    {
        const bool branch_taken_0x191964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191964u;
        // 0x191968: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191964) {
            ctx->pc = 0x191978u;
            goto label_191978;
        }
    }
    ctx->pc = 0x19196Cu;
    // 0x19196c: 0xc42030b4  lwc1        $f0, 0x30B4($at)
    ctx->pc = 0x19196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191970: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x191974: 0xe42030c4  swc1        $f0, 0x30C4($at)
    ctx->pc = 0x191974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8430C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C4u, _value); } while (0); }
label_191978:
    // 0x191978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19197c: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x19197cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
label_191980:
    // 0x191980: 0x97838740  lhu         $v1, -0x78C0($gp)
    ctx->pc = 0x191980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x191984: 0x9782873c  lhu         $v0, -0x78C4($gp)
    ctx->pc = 0x191984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x191988: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191988u;
    {
        const bool branch_taken_0x191988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191988u;
        // 0x19198c: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191988) {
            ctx->pc = 0x1919A8u;
            goto label_1919a8;
        }
    }
    ctx->pc = 0x191990u;
    // 0x191990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191994: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x191994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966916)));
    // 0x191998: 0xaf83870c  sw          $v1, -0x78F4($gp)
    ctx->pc = 0x191998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
    // 0x19199c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1919a0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1919a4: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x1919a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
label_1919a8:
    // 0x1919a8: 0x8f848724  lw          $a0, -0x78DC($gp)
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x1919ac: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1919ACu;
    {
        const bool branch_taken_0x1919ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919ac) {
            ctx->pc = 0x191A18u;
            goto label_191a18;
        }
    }
    ctx->pc = 0x1919B4u;
    // 0x1919b4: 0x9383872c  lbu         $v1, -0x78D4($gp)
    ctx->pc = 0x1919b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x1919b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1919b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1919bc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1919BCu;
    {
        const bool branch_taken_0x1919bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1919C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919BCu;
        // 0x1919c0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919bc) {
            ctx->pc = 0x191A18u;
            goto label_191a18;
        }
    }
    ctx->pc = 0x1919C4u;
    // 0x1919c4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1919c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1919c8: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1919c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1919cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1919ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1919d0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1919d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1919d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1919d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1919d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1919D8u;
    {
        const bool branch_taken_0x1919d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D8u;
        // 0x1919dc: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d8) {
            ctx->pc = 0x1919F0u;
            goto label_1919f0;
        }
    }
    ctx->pc = 0x1919E0u;
    // 0x1919e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1919e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1919e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1919E4u;
    {
        const bool branch_taken_0x1919e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1919e4) {
            ctx->pc = 0x1919F0u;
            goto label_1919f0;
        }
    }
    ctx->pc = 0x1919ECu;
    // 0x1919ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1919ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1919f0:
    // 0x1919f0: 0x10a0006d  beqz        $a1, . + 4 + (0x6D << 2)
    ctx->pc = 0x1919F0u;
    {
        const bool branch_taken_0x1919f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919f0) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x1919F8u;
    // 0x1919f8: 0x8f838724  lw          $v1, -0x78DC($gp)
    ctx->pc = 0x1919f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x1919fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1919fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191a00: 0x906308e8  lbu         $v1, 0x8E8($v1)
    ctx->pc = 0x191a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2280)));
    // 0x191a04: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x191A04u;
    {
        const bool branch_taken_0x191a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191a04) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x191A0Cu;
    // 0x191a0c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x191A0Cu;
    {
        const bool branch_taken_0x191a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A0Cu;
        // 0x191a10: 0xa38386d0  sb          $v1, -0x7930($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a0c) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x191A14u;
    // 0x191a14: 0x0  nop
    ctx->pc = 0x191a14u;
    // NOP
label_191a18:
    // 0x191a18: 0x9383872c  lbu         $v1, -0x78D4($gp)
    ctx->pc = 0x191a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x191a1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191a20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191A20u;
    {
        const bool branch_taken_0x191a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A20u;
        // 0x191a24: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a20) {
            ctx->pc = 0x191A38u;
            goto label_191a38;
        }
    }
    ctx->pc = 0x191A28u;
    // 0x191a28: 0x782230f0  lq          $v0, 0x30F0($at)
    ctx->pc = 0x191a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 12528)));
    // 0x191a2c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x191A2Cu;
    {
        const bool branch_taken_0x191a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A2Cu;
        // 0x191a30: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a2c) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x191A34u;
    // 0x191a34: 0x0  nop
    ctx->pc = 0x191a34u;
    // NOP
label_191a38:
    // 0x191a38: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x191a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x191a3c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x191a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x191a40: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x191a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x191a44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191a48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x191a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x191a4c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x191a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x191a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191a54: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x191a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x191a58: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x191A58u;
    {
        const bool branch_taken_0x191a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A58u;
        // 0x191a5c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a58) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191A60u;
    // 0x191a60: 0x8f908060  lw          $s0, -0x7FA0($gp)
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x191a64: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x191A64u;
    {
        const bool branch_taken_0x191a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a64) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191A6Cu;
    // 0x191a6c: 0x8f828064  lw          $v0, -0x7F9C($gp)
    ctx->pc = 0x191a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x191a70: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x191A70u;
    {
        const bool branch_taken_0x191a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A70u;
        // 0x191a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a70) {
            ctx->pc = 0x191B60u;
            goto label_191b60;
        }
    }
    ctx->pc = 0x191A78u;
    // 0x191a78: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x191a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x191a7c: 0xc06434c  jal         func_190D30
    ctx->pc = 0x191A7Cu;
    SET_GPR_U32(ctx, 31, 0x191A84u);
    ctx->pc = 0x191A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A7Cu;
    // 0x191a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190D30u, 0x191A7Cu, 0x191A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A84u;
label_191a84:
    // 0x191a84: 0xa2022ac1  sb          $v0, 0x2AC1($s0)
    ctx->pc = 0x191a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10945), (uint8_t)GPR_U32(ctx, 2));
    // 0x191a88: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x191a88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191a8c: 0x8f908064  lw          $s0, -0x7F9C($gp)
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x191a90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x191a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x191a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a98: 0xc06434c  jal         func_190D30
    ctx->pc = 0x191A98u;
    SET_GPR_U32(ctx, 31, 0x191AA0u);
    ctx->pc = 0x191A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A98u;
    // 0x191a9c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190D30u, 0x191A98u, 0x191AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AA0u;
label_191aa0:
    // 0x191aa0: 0xa2022ac1  sb          $v0, 0x2AC1($s0)
    ctx->pc = 0x191aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10945), (uint8_t)GPR_U32(ctx, 2));
    // 0x191aa4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x191AA4u;
    {
        const bool branch_taken_0x191aa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x191AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA4u;
        // 0x191aa8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191aa4) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x191AACu;
    // 0x191aac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x191AACu;
    {
        const bool branch_taken_0x191aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191aac) {
            ctx->pc = 0x191B38u;
            goto label_191b38;
        }
    }
    ctx->pc = 0x191AB4u;
    // 0x191ab4: 0x0  nop
    ctx->pc = 0x191ab4u;
    // NOP
label_191ab8:
    // 0x191ab8: 0x93828754  lbu         $v0, -0x78AC($gp)
    ctx->pc = 0x191ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x191abc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x191ABCu;
    {
        const bool branch_taken_0x191abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ABCu;
        // 0x191ac0: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191abc) {
            ctx->pc = 0x191B00u;
            goto label_191b00;
        }
    }
    ctx->pc = 0x191AC4u;
    // 0x191ac4: 0x8c225f10  lw          $v0, 0x5F10($at)
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24336)));
    // 0x191ac8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x191ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x191acc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191ACCu;
    {
        const bool branch_taken_0x191acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191acc) {
            ctx->pc = 0x191B38u;
            goto label_191b38;
        }
    }
    ctx->pc = 0x191AD4u;
    // 0x191ad4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191adc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x191ae0: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x191ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
    // 0x191ae4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x191ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x191ae8: 0xa3808754  sb          $zero, -0x78AC($gp)
    ctx->pc = 0x191ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936404), (uint8_t)GPR_U32(ctx, 0));
    // 0x191aec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191af0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191af4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x191AF4u;
    {
        const bool branch_taken_0x191af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AF4u;
        // 0x191af8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191af4) {
            ctx->pc = 0x191B38u;
            goto label_191b38;
        }
    }
    ctx->pc = 0x191AFCu;
    // 0x191afc: 0x0  nop
    ctx->pc = 0x191afcu;
    // NOP
label_191b00:
    // 0x191b00: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x191b04: 0x8c225fc8  lw          $v0, 0x5FC8($at)
    ctx->pc = 0x191b04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FC8u));
    // 0x191b08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x191b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x191b0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x191B0Cu;
    {
        const bool branch_taken_0x191b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B0Cu;
        // 0x191b10: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b0c) {
            ctx->pc = 0x191B38u;
            goto label_191b38;
        }
    }
    ctx->pc = 0x191B14u;
    // 0x191b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x191b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191b18: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x191b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x191b1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x191b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x191b20: 0xa3848754  sb          $a0, -0x78AC($gp)
    ctx->pc = 0x191b20u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936404), (uint8_t)GPR_U32(ctx, 4));
    // 0x191b24: 0xa3848c88  sb          $a0, -0x7378($gp)
    ctx->pc = 0x191b24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 4));
    // 0x191b28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191b2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191b30: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x191b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x191b34: 0x0  nop
    ctx->pc = 0x191b34u;
    // NOP
label_191b38:
    // 0x191b38: 0x93828754  lbu         $v0, -0x78AC($gp)
    ctx->pc = 0x191b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x191b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191B3Cu;
    {
        const bool branch_taken_0x191b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b3c) {
            ctx->pc = 0x191B50u;
            goto label_191b50;
        }
    }
    ctx->pc = 0x191B44u;
    // 0x191b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191B44u;
    {
        const bool branch_taken_0x191b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B44u;
        // 0x191b48: 0x8f838064  lw          $v1, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b44) {
            ctx->pc = 0x191B58u;
            goto label_191b58;
        }
    }
    ctx->pc = 0x191B4Cu;
    // 0x191b4c: 0x0  nop
    ctx->pc = 0x191b4cu;
    // NOP
label_191b50:
    // 0x191b50: 0x8f838060  lw          $v1, -0x7FA0($gp)
    ctx->pc = 0x191b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x191b54: 0x0  nop
    ctx->pc = 0x191b54u;
    // NOP
label_191b58:
    // 0x191b58: 0x93828754  lbu         $v0, -0x78AC($gp)
    ctx->pc = 0x191b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x191b5c: 0xa38286d0  sb          $v0, -0x7930($gp)
    ctx->pc = 0x191b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936272), (uint8_t)GPR_U32(ctx, 2));
label_191b60:
    // 0x191b60: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x191B60u;
    {
        const bool branch_taken_0x191b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b60) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x191B68u;
    // 0x191b68: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x191b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x191b6c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x191b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x191b70: 0x8c6206ac  lw          $v0, 0x6AC($v1)
    ctx->pc = 0x191b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
    // 0x191b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191b78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x191B78u;
    {
        const bool branch_taken_0x191b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B78u;
        // 0x191b7c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b78) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x191B80u;
    // 0x191b80: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x191b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x191b84: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x191b88: 0x27a601bc  addiu       $a2, $sp, 0x1BC
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x191b8c: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x191B8Cu;
    SET_GPR_U32(ctx, 31, 0x191B94u);
    ctx->pc = 0x191B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B8Cu;
    // 0x191b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x191B8Cu, 0x191B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B94u;
label_191b94:
    // 0x191b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191B94u;
    {
        const bool branch_taken_0x191b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b94) {
            ctx->pc = 0x191BA8u;
            goto label_191ba8;
        }
    }
    ctx->pc = 0x191B9Cu;
    // 0x191b9c: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x191b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ba0: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x191ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x191ba4: 0x0  nop
    ctx->pc = 0x191ba4u;
    // NOP
label_191ba8:
    // 0x191ba8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191bac: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x191bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x191bb0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x191bb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x191bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x191bb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191BB8u;
    {
        const bool branch_taken_0x191bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB8u;
        // 0x191bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bb8) {
            ctx->pc = 0x191BD0u;
            goto label_191bd0;
        }
    }
    ctx->pc = 0x191BC0u;
    // 0x191bc0: 0xc063db4  jal         func_18F6D0
    ctx->pc = 0x191BC0u;
    SET_GPR_U32(ctx, 31, 0x191BC8u);
    ctx->pc = 0x18F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F6D0u, 0x191BC0u, 0x191BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BC8u;
label_191bc8:
    // 0x191bc8: 0x1000054b  b           . + 4 + (0x54B << 2)
    ctx->pc = 0x191BC8u;
    {
        const bool branch_taken_0x191bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bc8) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x191BD0u;
label_191bd0:
    // 0x191bd0: 0xc0ec6e4  jal         func_3B1B90
    ctx->pc = 0x191BD0u;
    SET_GPR_U32(ctx, 31, 0x191BD8u);
    ctx->pc = 0x3B1B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B90u, 0x191BD0u, 0x191BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BD8u;
label_191bd8:
    // 0x191bd8: 0xc063db4  jal         func_18F6D0
    ctx->pc = 0x191BD8u;
    SET_GPR_U32(ctx, 31, 0x191BE0u);
    ctx->pc = 0x191BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BD8u;
    // 0x191bdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F6D0u, 0x191BD8u, 0x191BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BE0u;
label_191be0:
    // 0x191be0: 0x8f8286e4  lw          $v0, -0x791C($gp)
    ctx->pc = 0x191be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x191be4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x191BE4u;
    {
        const bool branch_taken_0x191be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BE4u;
        // 0x191be8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191be4) {
            ctx->pc = 0x191C10u;
            goto label_191c10;
        }
    }
    ctx->pc = 0x191BECu;
    // 0x191bec: 0xc063f14  jal         func_18FC50
    ctx->pc = 0x191BECu;
    SET_GPR_U32(ctx, 31, 0x191BF4u);
    ctx->pc = 0x18FC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC50u, 0x191BECu, 0x191BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BF4u;
label_191bf4:
    // 0x191bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191bf8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x191bfc: 0x2484fd60  addiu       $a0, $a0, -0x2A0
    ctx->pc = 0x191bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    // 0x191c00: 0xc0ecb04  jal         func_3B2C10
    ctx->pc = 0x191C00u;
    SET_GPR_U32(ctx, 31, 0x191C08u);
    ctx->pc = 0x191C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C00u;
    // 0x191c04: 0xaf82870c  sw          $v0, -0x78F4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x191C00u, 0x191C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C08u;
label_191c08:
    // 0x191c08: 0x1000053b  b           . + 4 + (0x53B << 2)
    ctx->pc = 0x191C08u;
    {
        const bool branch_taken_0x191c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c08) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x191C10u;
label_191c10:
    // 0x191c10: 0xc063f14  jal         func_18FC50
    ctx->pc = 0x191C10u;
    SET_GPR_U32(ctx, 31, 0x191C18u);
    ctx->pc = 0x191C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C10u;
    // 0x191c14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC50u, 0x191C10u, 0x191C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C18u;
label_191c18:
    // 0x191c18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191c1c: 0x8c23ceec  lw          $v1, -0x3114($at)
    ctx->pc = 0x191c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEECu));
    // 0x191c20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x191c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x191c24: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x191C24u;
    {
        const bool branch_taken_0x191c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x191C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C24u;
        // 0x191c28: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c24) {
            ctx->pc = 0x191C58u;
            goto label_191c58;
        }
    }
    ctx->pc = 0x191C2Cu;
    // 0x191c2c: 0x24030182  addiu       $v1, $zero, 0x182
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x191c30: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x191c30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x191c34: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x191C34u;
    {
        const bool branch_taken_0x191c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191c34) {
            ctx->pc = 0x191C58u;
            goto label_191c58;
        }
    }
    ctx->pc = 0x191C3Cu;
    // 0x191c3c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x191c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x191c40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191C40u;
    {
        const bool branch_taken_0x191c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191c40) {
            ctx->pc = 0x191C58u;
            goto label_191c58;
        }
    }
    ctx->pc = 0x191C48u;
    // 0x191c48: 0x9783873c  lhu         $v1, -0x78C4($gp)
    ctx->pc = 0x191c48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x191c4c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x191c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x191c50: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x191C50u;
    {
        const bool branch_taken_0x191c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c50) {
            ctx->pc = 0x191CA8u;
            goto label_191ca8;
        }
    }
    ctx->pc = 0x191C58u;
label_191c58:
    // 0x191c58: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x191c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191c5c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x191c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x191c60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191c64: 0x2484fd60  addiu       $a0, $a0, -0x2A0
    ctx->pc = 0x191c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    // 0x191c68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x191c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c6c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x191c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x191c70: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191c74: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x191c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c78: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x191c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x191c7c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x191c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191c80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x191c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c84: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x191c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x191c88: 0xc0ecba4  jal         func_3B2E90
    ctx->pc = 0x191C88u;
    SET_GPR_U32(ctx, 31, 0x191C90u);
    ctx->pc = 0x191C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C88u;
    // 0x191c8c: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2E90u, 0x191C88u, 0x191C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C90u;
label_191c90:
    // 0x191c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c94: 0xc064120  jal         func_190480
    ctx->pc = 0x191C94u;
    SET_GPR_U32(ctx, 31, 0x191C9Cu);
    ctx->pc = 0x191C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C94u;
    // 0x191c98: 0xa3838c88  sb          $v1, -0x7378($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190480u, 0x191C94u, 0x191C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C9Cu;
label_191c9c:
    // 0x191c9c: 0x10000516  b           . + 4 + (0x516 << 2)
    ctx->pc = 0x191C9Cu;
    {
        const bool branch_taken_0x191c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c9c) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x191CA4u;
    // 0x191ca4: 0x0  nop
    ctx->pc = 0x191ca4u;
    // NOP
label_191ca8:
    // 0x191ca8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x191cac: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x191cacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x191cb0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x191cb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x191cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x191cb8: 0x1460050f  bnez        $v1, . + 4 + (0x50F << 2)
    ctx->pc = 0x191CB8u;
    {
        const bool branch_taken_0x191cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191cb8) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x191CC0u;
    // 0x191cc0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x191cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191cc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191cc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x191cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ccc: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x191cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x191cd0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x191cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191cd4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x191cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191cd8: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x191cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x191cdc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x191cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191ce0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x191ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ce4: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x191ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x191ce8: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x191ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x191cec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x191cf0: 0x10400389  beqz        $v0, . + 4 + (0x389 << 2)
    ctx->pc = 0x191CF0u;
    {
        const bool branch_taken_0x191cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cf0) {
            ctx->pc = 0x192B18u;
            goto label_192b18;
        }
    }
    ctx->pc = 0x191CF8u;
    // 0x191cf8: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x191cfc: 0x12600386  beqz        $s3, . + 4 + (0x386 << 2)
    ctx->pc = 0x191CFCu;
    {
        const bool branch_taken_0x191cfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cfc) {
            ctx->pc = 0x192B18u;
            goto label_192b18;
        }
    }
    ctx->pc = 0x191D04u;
    // 0x191d04: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x191d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x191d08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x191D08u;
    {
        const bool branch_taken_0x191d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D08u;
        // 0x191d0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d08) {
            ctx->pc = 0x191D38u;
            goto label_191d38;
        }
    }
    ctx->pc = 0x191D10u;
    // 0x191d10: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x191d10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x191d14: 0xae8200a4  sw          $v0, 0xA4($s4)
    ctx->pc = 0x191d14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
    // 0x191d18: 0xae8000b8  sw          $zero, 0xB8($s4)
    ctx->pc = 0x191d18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 0));
    // 0x191d1c: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x191d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
    // 0x191d20: 0xae8000c0  sw          $zero, 0xC0($s4)
    ctx->pc = 0x191d20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 0));
    // 0x191d24: 0xae8000bc  sw          $zero, 0xBC($s4)
    ctx->pc = 0x191d24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 0));
    // 0x191d28: 0xae8000b0  sw          $zero, 0xB0($s4)
    ctx->pc = 0x191d28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 0));
    // 0x191d2c: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x191d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
    // 0x191d30: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x191d30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x191d34: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x191d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_191d38:
    // 0x191d38: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x191d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x191d3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x191d40: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x191d40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191d44: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x191d44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x191d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d4c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x191d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x191d50: 0xafbe00b0  sw          $fp, 0xB0($sp)
    ctx->pc = 0x191d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 30));
    // 0x191d54: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x191D54u;
    {
        const bool branch_taken_0x191d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D54u;
        // 0x191d58: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d54) {
            ctx->pc = 0x1921C0u;
            goto label_1921c0;
        }
    }
    ctx->pc = 0x191D5Cu;
    // 0x191d5c: 0x0  nop
    ctx->pc = 0x191d5cu;
    // NOP
label_191d60:
    // 0x191d60: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x191d64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x191d68: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x191d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x191d6c: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x191d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x191d70: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x191D70u;
    {
        const bool branch_taken_0x191d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191d70) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191D78u;
    // 0x191d78: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x191d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191d7c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x191d7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x191d80: 0x102000f5  beqz        $at, . + 4 + (0xF5 << 2)
    ctx->pc = 0x191D80u;
    {
        const bool branch_taken_0x191d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D80u;
        // 0x191d84: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d80) {
            ctx->pc = 0x192158u;
            goto label_192158;
        }
    }
    ctx->pc = 0x191D88u;
    // 0x191d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191d8c: 0x24635780  addiu       $v1, $v1, 0x5780
    ctx->pc = 0x191d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22400));
    // 0x191d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191d98: 0x400008  jr          $v0
    ctx->pc = 0x191D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191DA0u: goto label_191da0;
            case 0x191E08u: goto label_191e08;
            case 0x191E70u: goto label_191e70;
            case 0x191F88u: goto label_191f88;
            case 0x192040u: goto label_192040;
            case 0x1921B8u: goto label_1921b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x191DA0u;
label_191da0:
    // 0x191da0: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x191da4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191dac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191db0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191db4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191DB4u;
    {
        const bool branch_taken_0x191db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191db4) {
            ctx->pc = 0x191DCCu;
            goto label_191dcc;
        }
    }
    ctx->pc = 0x191DBCu;
    // 0x191dbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191dc0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191DC4u;
    {
        const bool branch_taken_0x191dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC4u;
        // 0x191dc8: 0x92460008  lbu         $a2, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191dc4) {
            ctx->pc = 0x191DE8u;
            goto label_191de8;
        }
    }
    ctx->pc = 0x191DCCu;
label_191dcc:
    // 0x191dcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191dccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191dd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191dd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191dd8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191ddc: 0x0  nop
    ctx->pc = 0x191ddcu;
    // NOP
    // 0x191de0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191de4: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x191de4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_191de8:
    // 0x191de8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191dec: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x191decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191df0: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191DF0u;
    SET_GPR_U32(ctx, 31, 0x191DF8u);
    ctx->pc = 0x191DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DF0u;
    // 0x191df4: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191DF0u, 0x191DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DF8u;
label_191df8:
    // 0x191df8: 0x44000ef  bltz        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x191DF8u;
    {
        const bool branch_taken_0x191df8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x191DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DF8u;
        // 0x191dfc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191df8) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191E00u;
    // 0x191e00: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x191E00u;
    {
        const bool branch_taken_0x191e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e00) {
            ctx->pc = 0x192158u;
            goto label_192158;
        }
    }
    ctx->pc = 0x191E08u;
label_191e08:
    // 0x191e08: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x191e08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x191e0c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191e14: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191e1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191E1Cu;
    {
        const bool branch_taken_0x191e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191e1c) {
            ctx->pc = 0x191E34u;
            goto label_191e34;
        }
    }
    ctx->pc = 0x191E24u;
    // 0x191e24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191e28: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191e2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191E2Cu;
    {
        const bool branch_taken_0x191e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E2Cu;
        // 0x191e30: 0x92460008  lbu         $a2, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e2c) {
            ctx->pc = 0x191E50u;
            goto label_191e50;
        }
    }
    ctx->pc = 0x191E34u;
label_191e34:
    // 0x191e34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191e34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191e38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191e3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191e3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191e40: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191e44: 0x0  nop
    ctx->pc = 0x191e44u;
    // NOP
    // 0x191e48: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191e4c: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x191e4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_191e50:
    // 0x191e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e54: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191e58: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191E58u;
    SET_GPR_U32(ctx, 31, 0x191E60u);
    ctx->pc = 0x191E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E58u;
    // 0x191e5c: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191E58u, 0x191E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E60u;
label_191e60:
    // 0x191e60: 0x44000d5  bltz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x191E60u;
    {
        const bool branch_taken_0x191e60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x191E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E60u;
        // 0x191e64: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e60) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191E68u;
    // 0x191e68: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x191E68u;
    {
        const bool branch_taken_0x191e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e68) {
            ctx->pc = 0x192158u;
            goto label_192158;
        }
    }
    ctx->pc = 0x191E70u;
label_191e70:
    // 0x191e70: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x191e74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191e7c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191e84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191E84u;
    {
        const bool branch_taken_0x191e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191e84) {
            ctx->pc = 0x191E9Cu;
            goto label_191e9c;
        }
    }
    ctx->pc = 0x191E8Cu;
    // 0x191e8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191e90: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191E94u;
    {
        const bool branch_taken_0x191e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E94u;
        // 0x191e98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e94) {
            ctx->pc = 0x191EB8u;
            goto label_191eb8;
        }
    }
    ctx->pc = 0x191E9Cu;
label_191e9c:
    // 0x191e9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191e9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191ea0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191ea4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191ea8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191eac: 0x0  nop
    ctx->pc = 0x191eacu;
    // NOP
    // 0x191eb0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191eb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_191eb8:
    // 0x191eb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ebc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x191ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x191ec0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x191ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191ec4: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191EC4u;
    SET_GPR_U32(ctx, 31, 0x191ECCu);
    ctx->pc = 0x191EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EC4u;
    // 0x191ec8: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191EC4u, 0x191ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191ECCu;
label_191ecc:
    // 0x191ecc: 0x44000ba  bltz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x191ECCu;
    {
        const bool branch_taken_0x191ecc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x191ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ECCu;
        // 0x191ed0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ecc) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191ED4u;
    // 0x191ed4: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x191ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x191ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191edc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x191ee0: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x191ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x191ee4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191EE4u;
    {
        const bool branch_taken_0x191ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191ee4) {
            ctx->pc = 0x191F50u;
            goto label_191f50;
        }
    }
    ctx->pc = 0x191EECu;
    // 0x191eec: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ef0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ef8: 0x0  nop
    ctx->pc = 0x191ef8u;
    // NOP
    // 0x191efc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191F00u;
    {
        const bool branch_taken_0x191f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f00) {
            ctx->pc = 0x191F18u;
            goto label_191f18;
        }
    }
    ctx->pc = 0x191F08u;
    // 0x191f08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191f08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191f0c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191f10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191F10u;
    {
        const bool branch_taken_0x191f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F10u;
        // 0x191f14: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f10) {
            ctx->pc = 0x191F34u;
            goto label_191f34;
        }
    }
    ctx->pc = 0x191F18u;
label_191f18:
    // 0x191f18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191f18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191f1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191f20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191f24: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191f28: 0x0  nop
    ctx->pc = 0x191f28u;
    // NOP
    // 0x191f2c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191f30: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_191f34:
    // 0x191f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f38: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x191f3c: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191F3Cu;
    SET_GPR_U32(ctx, 31, 0x191F44u);
    ctx->pc = 0x191F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F3Cu;
    // 0x191f40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191F3Cu, 0x191F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F44u;
label_191f44:
    // 0x191f44: 0x440009c  bltz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x191F44u;
    {
        const bool branch_taken_0x191f44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x191F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F44u;
        // 0x191f48: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f44) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191F4Cu;
    // 0x191f4c: 0x0  nop
    ctx->pc = 0x191f4cu;
    // NOP
label_191f50:
    // 0x191f50: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x191f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x191f54: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x191f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
    // 0x191f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f5c: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x191f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191f64: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x191f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x191f68: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x191f6c: 0xae8200a4  sw          $v0, 0xA4($s4)
    ctx->pc = 0x191f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
    // 0x191f70: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x191f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x191f74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191f78: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x191f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x191f7c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x191F7Cu;
    {
        const bool branch_taken_0x191f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F7Cu;
        // 0x191f80: 0xac4300b4  sw          $v1, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f7c) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x191F84u;
    // 0x191f84: 0x0  nop
    ctx->pc = 0x191f84u;
    // NOP
label_191f88:
    // 0x191f88: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x191f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x191f8c: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x191f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191f90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x191f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191f94: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x191f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f9c: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x191F9Cu;
    {
        const bool branch_taken_0x191f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f9c) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191FA4u;
    // 0x191fa4: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x191fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191fac: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x191FACu;
    {
        const bool branch_taken_0x191fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191fac) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x191FB4u;
    // 0x191fb4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x191fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191fb8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x191fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x191fbc: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x191fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191fc0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x191fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191fc4: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x191fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191fc8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191fcc: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x191fd0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x191fd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x191fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191fd8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x191fd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x191fdc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x191fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x191fe0: 0x46000044  c1          0x44
    ctx->pc = 0x191fe0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x191fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191fe8: 0x0  nop
    ctx->pc = 0x191fe8u;
    // NOP
    // 0x191fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191ff0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x191ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191ff4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x191FF4u;
    {
        const bool branch_taken_0x191ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191ff4) {
            ctx->pc = 0x192008u;
            goto label_192008;
        }
    }
    ctx->pc = 0x191FFCu;
    // 0x191ffc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191FFCu;
    {
        const bool branch_taken_0x191ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191ffc) {
            ctx->pc = 0x192010u;
            goto label_192010;
        }
    }
    ctx->pc = 0x192004u;
    // 0x192004: 0x0  nop
    ctx->pc = 0x192004u;
    // NOP
label_192008:
    // 0x192008: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x192008u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x19200c: 0x0  nop
    ctx->pc = 0x19200cu;
    // NOP
label_192010:
    // 0x192010: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x192010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192014: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x192014u;
    {
        const bool branch_taken_0x192014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192014) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x19201Cu;
    // 0x19201c: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x19201cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192020: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x192020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192024: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x192024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
    // 0x192028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19202c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192030: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x192030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192034: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x192034u;
    {
        const bool branch_taken_0x192034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192034u;
        // 0x192038: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192034) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x19203Cu;
    // 0x19203c: 0x0  nop
    ctx->pc = 0x19203cu;
    // NOP
label_192040:
    // 0x192040: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192048: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19204c: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x19204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x192050: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x192050u;
    {
        const bool branch_taken_0x192050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192050u;
        // 0x192054: 0x8c920004  lw          $s2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192050) {
            ctx->pc = 0x1920B8u;
            goto label_1920b8;
        }
    }
    ctx->pc = 0x192058u;
    // 0x192058: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x192058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19205c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x192060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192064: 0x0  nop
    ctx->pc = 0x192064u;
    // NOP
    // 0x192068: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x192068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19206c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19206Cu;
    {
        const bool branch_taken_0x19206c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19206c) {
            ctx->pc = 0x192084u;
            goto label_192084;
        }
    }
    ctx->pc = 0x192074u;
    // 0x192074: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192078: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x192078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19207c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19207Cu;
    {
        const bool branch_taken_0x19207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19207Cu;
        // 0x192080: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19207c) {
            ctx->pc = 0x1920A0u;
            goto label_1920a0;
        }
    }
    ctx->pc = 0x192084u;
label_192084:
    // 0x192084: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x192084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192088: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19208c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19208cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192090: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x192090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x192094: 0x0  nop
    ctx->pc = 0x192094u;
    // NOP
    // 0x192098: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x192098u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x19209c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x19209cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1920a0:
    // 0x1920a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1920a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1920a4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1920a8: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x1920A8u;
    SET_GPR_U32(ctx, 31, 0x1920B0u);
    ctx->pc = 0x1920ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1920A8u;
    // 0x1920ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x1920A8u, 0x1920B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1920B0u;
label_1920b0:
    // 0x1920b0: 0x4400041  bltz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1920B0u;
    {
        const bool branch_taken_0x1920b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1920B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920B0u;
        // 0x1920b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920b0) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x1920B8u;
label_1920b8:
    // 0x1920b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1920bc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1920bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1920c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1920c4: 0x0  nop
    ctx->pc = 0x1920c4u;
    // NOP
    // 0x1920c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1920c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1920cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1920CCu;
    {
        const bool branch_taken_0x1920cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1920cc) {
            ctx->pc = 0x1920E4u;
            goto label_1920e4;
        }
    }
    ctx->pc = 0x1920D4u;
    // 0x1920d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1920d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1920d8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1920d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1920dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1920DCu;
    {
        const bool branch_taken_0x1920dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920DCu;
        // 0x1920e0: 0x92430008  lbu         $v1, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920dc) {
            ctx->pc = 0x192100u;
            goto label_192100;
        }
    }
    ctx->pc = 0x1920E4u;
label_1920e4:
    // 0x1920e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1920e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1920e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1920e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1920ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1920ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1920f0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1920f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1920f4: 0x0  nop
    ctx->pc = 0x1920f4u;
    // NOP
    // 0x1920f8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1920f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1920fc: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x1920fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_192100:
    // 0x192100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192104: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192108: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x192108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x19210c: 0x2466fffe  addiu       $a2, $v1, -0x2
    ctx->pc = 0x19210cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x192110: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192110u;
    SET_GPR_U32(ctx, 31, 0x192118u);
    ctx->pc = 0x192114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192110u;
    // 0x192114: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192110u, 0x192118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192118u;
label_192118:
    // 0x192118: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x192118u;
    {
        const bool branch_taken_0x192118 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x19211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192118u;
        // 0x19211c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192118) {
            ctx->pc = 0x1921B8u;
            goto label_1921b8;
        }
    }
    ctx->pc = 0x192120u;
    // 0x192120: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192128: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x192128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
    // 0x19212c: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x19212cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192130: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192134: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192138: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x192138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x19213c: 0xae8200a4  sw          $v0, 0xA4($s4)
    ctx->pc = 0x19213cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
    // 0x192140: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192148: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19214c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19214Cu;
    {
        const bool branch_taken_0x19214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19214Cu;
        // 0x192150: 0xac4300b4  sw          $v1, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19214c) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x192154u;
    // 0x192154: 0x0  nop
    ctx->pc = 0x192154u;
    // NOP
label_192158:
    // 0x192158: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x19215c: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x19215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
    // 0x192160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192164: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192168: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x19216c: 0xae8200a4  sw          $v0, 0xA4($s4)
    ctx->pc = 0x19216cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
    // 0x192170: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192178: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19217c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x19217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192180: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192180u;
    {
        const bool branch_taken_0x192180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x192184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192180u;
        // 0x192184: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192180) {
            ctx->pc = 0x192190u;
            goto label_192190;
        }
    }
    ctx->pc = 0x192188u;
    // 0x192188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19218c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x19218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_192190:
    // 0x192190: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192198: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19219c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x19219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1921a0: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1921A0u;
    {
        const bool branch_taken_0x1921a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1921a0) {
            ctx->pc = 0x1921B0u;
            goto label_1921b0;
        }
    }
    ctx->pc = 0x1921A8u;
    // 0x1921a8: 0xafb600b0  sw          $s6, 0xB0($sp)
    ctx->pc = 0x1921a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 22));
    // 0x1921ac: 0x0  nop
    ctx->pc = 0x1921acu;
    // NOP
label_1921b0:
    // 0x1921b0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1921b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1921b4: 0x0  nop
    ctx->pc = 0x1921b4u;
    // NOP
label_1921b8:
    // 0x1921b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1921b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1921bc: 0x0  nop
    ctx->pc = 0x1921bcu;
    // NOP
label_1921c0:
    // 0x1921c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1921c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1921c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1921c8: 0x1440fee5  bnez        $v0, . + 4 + (-0x11B << 2)
    ctx->pc = 0x1921C8u;
    {
        const bool branch_taken_0x1921c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1921c8) {
            ctx->pc = 0x191D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191d60;
        }
    }
    ctx->pc = 0x1921D0u;
    // 0x1921d0: 0x7c00231  bltz        $fp, . + 4 + (0x231 << 2)
    ctx->pc = 0x1921D0u;
    {
        const bool branch_taken_0x1921d0 = (GPR_S64(ctx, 30) < 0);
        if (branch_taken_0x1921d0) {
            ctx->pc = 0x192A98u;
            goto label_192a98;
        }
    }
    ctx->pc = 0x1921D8u;
    // 0x1921d8: 0x13c00011  beqz        $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x1921D8u;
    {
        const bool branch_taken_0x1921d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921d8) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x1921E0u;
    // 0x1921e0: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x1921e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1921e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1921E4u;
    {
        const bool branch_taken_0x1921e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921e4) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x1921ECu;
    // 0x1921ec: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1921ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1921f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1921f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1921f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1921f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1921f8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1921f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1921fc: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1921FCu;
    {
        const bool branch_taken_0x1921fc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1921fc) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x192204u;
    // 0x192204: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x192204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x192208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192208u;
    {
        const bool branch_taken_0x192208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192208) {
            ctx->pc = 0x192220u;
            goto label_192220;
        }
    }
    ctx->pc = 0x192210u;
    // 0x192210: 0x93828c88  lbu         $v0, -0x7378($gp)
    ctx->pc = 0x192210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937736)));
    // 0x192214: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x192214u;
    {
        const bool branch_taken_0x192214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192214) {
            ctx->pc = 0x192518u;
            goto label_192518;
        }
    }
    ctx->pc = 0x19221Cu;
    // 0x19221c: 0x0  nop
    ctx->pc = 0x19221cu;
    // NOP
label_192220:
    // 0x192220: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192228: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x192228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19222c: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x19222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x192230: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x192234: 0x104300b6  beq         $v0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x192234u;
    {
        const bool branch_taken_0x192234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x192234) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x19223Cu;
    // 0x19223c: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x19223cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x192240: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x192240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x192244: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x192244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x192248: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x192248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x19224c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x19224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192250: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x192250u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192254: 0x26830050  addiu       $v1, $s4, 0x50
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x192258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19225c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x19225cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x192260: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192264: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x192264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192268: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192268u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x19226c: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x19226cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192270: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192274: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19227c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192280: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x192284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192288: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x192288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19228c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192290: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x192290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x192294: 0x86820088  lh          $v0, 0x88($s4)
    ctx->pc = 0x192294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x192298: 0xa682008a  sh          $v0, 0x8A($s4)
    ctx->pc = 0x192298u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x19229c: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x19229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1922a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1922A0u;
    {
        const bool branch_taken_0x1922a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1922a0) {
            ctx->pc = 0x1922D0u;
            goto label_1922d0;
        }
    }
    ctx->pc = 0x1922A8u;
    // 0x1922a8: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x1922a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x1922ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1922acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1922b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1922b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1922b4: 0xa0400011  sb          $zero, 0x11($v0)
    ctx->pc = 0x1922b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1922b8: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x1922b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1922bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1922bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1922c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1922C0u;
    {
        const bool branch_taken_0x1922c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922C0u;
        // 0x1922c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922c0) {
            ctx->pc = 0x1922D0u;
            goto label_1922d0;
        }
    }
    ctx->pc = 0x1922C8u;
    // 0x1922c8: 0xc064f38  jal         func_193CE0
    ctx->pc = 0x1922C8u;
    SET_GPR_U32(ctx, 31, 0x1922D0u);
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x1922C8u, 0x1922D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1922D0u;
label_1922d0:
    // 0x1922d0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1922d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1922d8: 0xae8000bc  sw          $zero, 0xBC($s4)
    ctx->pc = 0x1922d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 0));
    // 0x1922dc: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x1922dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1922e0: 0x90a40010  lbu         $a0, 0x10($a1)
    ctx->pc = 0x1922e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1922e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1922e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1922e8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1922E8u;
    {
        const bool branch_taken_0x1922e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1922ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922E8u;
        // 0x1922ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922e8) {
            ctx->pc = 0x192490u;
            goto label_192490;
        }
    }
    ctx->pc = 0x1922F0u;
    // 0x1922f0: 0x10820059  beq         $a0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1922F0u;
    {
        const bool branch_taken_0x1922f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1922f0) {
            ctx->pc = 0x192458u;
            goto label_192458;
        }
    }
    ctx->pc = 0x1922F8u;
    // 0x1922f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1922fc: 0x1082003e  beq         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1922FCu;
    {
        const bool branch_taken_0x1922fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x192300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922FCu;
        // 0x192300: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922fc) {
            ctx->pc = 0x1923F8u;
            goto label_1923f8;
        }
    }
    ctx->pc = 0x192304u;
    // 0x192304: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x192304u;
    {
        const bool branch_taken_0x192304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x192304) {
            ctx->pc = 0x192390u;
            goto label_192390;
        }
    }
    ctx->pc = 0x19230Cu;
    // 0x19230c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19230Cu;
    {
        const bool branch_taken_0x19230c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19230c) {
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x192314u;
    // 0x192314: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x192314u;
    {
        const bool branch_taken_0x192314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192314) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x19231Cu;
    // 0x19231c: 0x0  nop
    ctx->pc = 0x19231cu;
    // NOP
label_192320:
    // 0x192320: 0x8cb20014  lw          $s2, 0x14($a1)
    ctx->pc = 0x192320u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x192324: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x192324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x192328: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x192328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x19232c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x19232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x192330: 0xae8300bc  sw          $v1, 0xBC($s4)
    ctx->pc = 0x192330u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 3));
    // 0x192334: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x192334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19233c: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x19233cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x192340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192340u;
    {
        const bool branch_taken_0x192340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192340) {
            ctx->pc = 0x192358u;
            goto label_192358;
        }
    }
    ctx->pc = 0x192348u;
    // 0x192348: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x192348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x19234c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19234Cu;
    {
        const bool branch_taken_0x19234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19234c) {
            ctx->pc = 0x192378u;
            goto label_192378;
        }
    }
    ctx->pc = 0x192354u;
    // 0x192354: 0x0  nop
    ctx->pc = 0x192354u;
    // NOP
label_192358:
    // 0x192358: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x192358u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x19235c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19235cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x192360: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x192360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x192364: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x192364u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x192368: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x192368u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19236c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192370: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x192370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x192374: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x192374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_192378:
    // 0x192378: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x19237c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19237cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192380: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192384: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x192384u;
    {
        const bool branch_taken_0x192384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192384u;
        // 0x192388: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192384) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x19238Cu;
    // 0x19238c: 0x0  nop
    ctx->pc = 0x19238cu;
    // NOP
label_192390:
    // 0x192390: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192398: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19239c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x19239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1923a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1923a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1923a8: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1923a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1923ac: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1923acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1923b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1923b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1923b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1923B4u;
    {
        const bool branch_taken_0x1923b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1923b4) {
            ctx->pc = 0x1923E0u;
            goto label_1923e0;
        }
    }
    ctx->pc = 0x1923BCu;
    // 0x1923bc: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1923bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1923c0: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x1923c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x1923c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1923c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1923c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1923cc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1923d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1923d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1923d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1923d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1923d8: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1923d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x1923dc: 0x0  nop
    ctx->pc = 0x1923dcu;
    // NOP
label_1923e0:
    // 0x1923e0: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1923e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1923e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1923e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1923e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1923e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1923ec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1923ECu;
    {
        const bool branch_taken_0x1923ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923ECu;
        // 0x1923f0: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923ec) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x1923F4u;
    // 0x1923f4: 0x0  nop
    ctx->pc = 0x1923f4u;
    // NOP
label_1923f8:
    // 0x1923f8: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1923f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1923fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1923fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192400: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192404: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192408: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19240c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x192410: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x192414: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x192414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x192418: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x192418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x19241c: 0xae8200bc  sw          $v0, 0xBC($s4)
    ctx->pc = 0x19241cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 2));
    // 0x192420: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x192420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x192424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192428: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x192428u;
    {
        const bool branch_taken_0x192428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192428) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x192430u;
    // 0x192430: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x192430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x192434: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x192434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x192438: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x192438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x19243c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x192440: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x192440u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192444: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192448: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x192448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19244c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19244Cu;
    {
        const bool branch_taken_0x19244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19244Cu;
        // 0x192450: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19244c) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x192454u;
    // 0x192454: 0x0  nop
    ctx->pc = 0x192454u;
    // NOP
label_192458:
    // 0x192458: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x192458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x19245c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192460: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x192460u;
    {
        const bool branch_taken_0x192460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192460) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x192468u;
    // 0x192468: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x192468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x19246c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x192470: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x192470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x192474: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x192474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x192478: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x192478u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19247c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192480: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x192484: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x192484u;
    {
        const bool branch_taken_0x192484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192484u;
        // 0x192488: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192484) {
            ctx->pc = 0x192510u;
            goto label_192510;
        }
    }
    ctx->pc = 0x19248Cu;
    // 0x19248c: 0x0  nop
    ctx->pc = 0x19248cu;
    // NOP
label_192490:
    // 0x192490: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192494: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x192498: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19249c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x19249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1924a0: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1924a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1924a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1924a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1924a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1924ac: 0x8c720014  lw          $s2, 0x14($v1)
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1924b0: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x1924b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1924b4: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1924b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1924b8: 0xae8300bc  sw          $v1, 0xBC($s4)
    ctx->pc = 0x1924b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 3));
    // 0x1924bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1924bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1924c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1924c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1924c4: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x1924c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x1924c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1924C8u;
    {
        const bool branch_taken_0x1924c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1924c8) {
            ctx->pc = 0x1924E0u;
            goto label_1924e0;
        }
    }
    ctx->pc = 0x1924D0u;
    // 0x1924d0: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x1924d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x1924d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1924D4u;
    {
        const bool branch_taken_0x1924d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924d4) {
            ctx->pc = 0x192500u;
            goto label_192500;
        }
    }
    ctx->pc = 0x1924DCu;
    // 0x1924dc: 0x0  nop
    ctx->pc = 0x1924dcu;
    // NOP
label_1924e0:
    // 0x1924e0: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x1924e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x1924e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1924e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1924e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1924ec: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1924ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1924f0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1924f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1924f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1924f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1924f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1924f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1924fc: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1924fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_192500:
    // 0x192500: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192508: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19250c: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x19250cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_192510:
    // 0x192510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x192510u;
    {
        const bool branch_taken_0x192510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192510u;
        // 0x192514: 0xae96009c  sw          $s6, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192510) {
            ctx->pc = 0x192528u;
            goto label_192528;
        }
    }
    ctx->pc = 0x192518u;
label_192518:
    // 0x192518: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x192518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19251c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19251Cu;
    {
        const bool branch_taken_0x19251c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x19251c) {
            ctx->pc = 0x192528u;
            goto label_192528;
        }
    }
    ctx->pc = 0x192524u;
    // 0x192524: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x192524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_192528:
    // 0x192528: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x19252c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192534: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x192534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x192538: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x192538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x19253c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19253cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x192540: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x192540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x192544: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x192544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x192548: 0x106200e3  beq         $v1, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x192548u;
    {
        const bool branch_taken_0x192548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192548u;
        // 0x19254c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192548) {
            ctx->pc = 0x1928D8u;
            goto label_1928d8;
        }
    }
    ctx->pc = 0x192550u;
    // 0x192550: 0x106200a9  beq         $v1, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x192550u;
    {
        const bool branch_taken_0x192550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192550) {
            ctx->pc = 0x1927F8u;
            goto label_1927f8;
        }
    }
    ctx->pc = 0x192558u;
    // 0x192558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19255c: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x19255Cu;
    {
        const bool branch_taken_0x19255c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19255Cu;
        // 0x192560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19255c) {
            ctx->pc = 0x192728u;
            goto label_192728;
        }
    }
    ctx->pc = 0x192564u;
    // 0x192564: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x192564u;
    {
        const bool branch_taken_0x192564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192564) {
            ctx->pc = 0x192680u;
            goto label_192680;
        }
    }
    ctx->pc = 0x19256Cu;
    // 0x19256c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19256Cu;
    {
        const bool branch_taken_0x19256c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19256c) {
            ctx->pc = 0x192580u;
            goto label_192580;
        }
    }
    ctx->pc = 0x192574u;
    // 0x192574: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x192574u;
    {
        const bool branch_taken_0x192574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192574) {
            ctx->pc = 0x1929E8u;
            goto label_1929e8;
        }
    }
    ctx->pc = 0x19257Cu;
    // 0x19257c: 0x0  nop
    ctx->pc = 0x19257cu;
    // NOP
label_192580:
    // 0x192580: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x192580u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192584: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x192584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x192588: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19258c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x19258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x192590: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x192590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x192594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192598: 0x9042002f  lbu         $v0, 0x2F($v0)
    ctx->pc = 0x192598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
    // 0x19259c: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x19259cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x1925a0: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1925a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1925a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1925a8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1925a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1925ac: 0xc065094  jal         func_194250
    ctx->pc = 0x1925ACu;
    SET_GPR_U32(ctx, 31, 0x1925B4u);
    ctx->pc = 0x1925B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925ACu;
    // 0x1925b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194250u, 0x1925ACu, 0x1925B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925B4u;
label_1925b4:
    // 0x1925b4: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1925b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1925b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1925b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1925bc: 0x9249000b  lbu         $t1, 0xB($s2)
    ctx->pc = 0x1925bcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x1925c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1925c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925c4: 0x864a000e  lh          $t2, 0xE($s2)
    ctx->pc = 0x1925c4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1925c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1925c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1925cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1925ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1925d0: 0x26880040  addiu       $t0, $s4, 0x40
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1925d4: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x1925d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1925d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1925d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1925dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1925e0: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1925e4: 0xc064c4c  jal         func_193130
    ctx->pc = 0x1925E4u;
    SET_GPR_U32(ctx, 31, 0x1925ECu);
    ctx->pc = 0x1925E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925E4u;
    // 0x1925e8: 0x27ab01a0  addiu       $t3, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1925E4u, 0x1925ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925ECu;
label_1925ec:
    // 0x1925ec: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1925ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1925f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925f4: 0x9249000a  lbu         $t1, 0xA($s2)
    ctx->pc = 0x1925f4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1925f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1925f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1925fc: 0x924a0008  lbu         $t2, 0x8($s2)
    ctx->pc = 0x1925fcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x192600: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192604: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x192604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192608: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x192608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x19260c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19260cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192610: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192614: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192618: 0xc064d04  jal         func_193410
    ctx->pc = 0x192618u;
    SET_GPR_U32(ctx, 31, 0x192620u);
    ctx->pc = 0x19261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192618u;
    // 0x19261c: 0x27ab01a0  addiu       $t3, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193410u, 0x192618u, 0x192620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192620u;
label_192620:
    // 0x192620: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192628: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x192628u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19262c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19262cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192630: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x192630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192634: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x192634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x192638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19263c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192640: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192644: 0xc064d9c  jal         func_193670
    ctx->pc = 0x192644u;
    SET_GPR_U32(ctx, 31, 0x19264Cu);
    ctx->pc = 0x192648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192644u;
    // 0x192648: 0x24480070  addiu       $t0, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193670u, 0x192644u, 0x19264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19264Cu;
label_19264c:
    // 0x19264c: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x19264cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192654: 0x8249000d  lb          $t1, 0xD($s2)
    ctx->pc = 0x192654u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x192658: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19265c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192660: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x192664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192668: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19266c: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x19266cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192670: 0xc064db8  jal         func_1936E0
    ctx->pc = 0x192670u;
    SET_GPR_U32(ctx, 31, 0x192678u);
    ctx->pc = 0x192674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192670u;
    // 0x192674: 0x26880088  addiu       $t0, $s4, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1936E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1936E0u, 0x192670u, 0x192678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192678u;
label_192678:
    // 0x192678: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x192678u;
    {
        const bool branch_taken_0x192678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192678) {
            ctx->pc = 0x1929E8u;
            goto label_1929e8;
        }
    }
    ctx->pc = 0x192680u;
label_192680:
    // 0x192680: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x192680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192688: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x192688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
    // 0x19268c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x19268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x192690: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x192690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192694: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x192694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192698: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x192698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19269c: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x19269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x1926a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1926a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1926a4: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x1926a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1926a8: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1926a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1926ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1926acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1926b0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1926b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x1926b4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1926b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1926b8: 0x8646001c  lh          $a2, 0x1C($s2)
    ctx->pc = 0x1926b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1926bc: 0xc052550  jal         func_149540
    ctx->pc = 0x1926BCu;
    SET_GPR_U32(ctx, 31, 0x1926C4u);
    ctx->pc = 0x1926C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926BCu;
    // 0x1926c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149540u, 0x1926BCu, 0x1926C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926C4u;
label_1926c4:
    // 0x1926c4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1926c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1926c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1926c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1926cc: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x1926ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1926d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1926d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1926d4: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x1926d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x1926d8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1926d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1926dc: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x1926dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1926e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1926e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1926e4: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x1926e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x1926e8: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1926e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1926ec: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x1926ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1926f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1926f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1926f4: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x1926f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x1926f8: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x1926f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x1926fc: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1926fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192700: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x192700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x192704: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x192704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192708: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x192708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19270c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19270cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192710: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x192710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x192714: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x192714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192718: 0xe6800048  swc1        $f0, 0x48($s4)
    ctx->pc = 0x192718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x19271c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x19271cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
    // 0x192720: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x192720u;
    {
        const bool branch_taken_0x192720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192720u;
        // 0x192724: 0xa6800088  sh          $zero, 0x88($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 136), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192720) {
            ctx->pc = 0x1929E8u;
            goto label_1929e8;
        }
    }
    ctx->pc = 0x192728u;
label_192728:
    // 0x192728: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x192728u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19272c: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x19272cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x192730: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x192730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x192734: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192738: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x192738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x19273c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192740: 0xc065094  jal         func_194250
    ctx->pc = 0x192740u;
    SET_GPR_U32(ctx, 31, 0x192748u);
    ctx->pc = 0x192744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192740u;
    // 0x192744: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194250u, 0x192740u, 0x192748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192748u;
label_192748:
    // 0x192748: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x19274c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19274cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x192750: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192758: 0x9249000b  lbu         $t1, 0xB($s2)
    ctx->pc = 0x192758u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x19275c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19275cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192760: 0x864a000e  lh          $t2, 0xE($s2)
    ctx->pc = 0x192760u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x192764: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192768: 0x26880040  addiu       $t0, $s4, 0x40
    ctx->pc = 0x192768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x19276c: 0x27ab01a0  addiu       $t3, $sp, 0x1A0
    ctx->pc = 0x19276cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x192770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192774: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192778: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x192778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x19277c: 0xc064c4c  jal         func_193130
    ctx->pc = 0x19277Cu;
    SET_GPR_U32(ctx, 31, 0x192784u);
    ctx->pc = 0x192780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19277Cu;
    // 0x192780: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19277Cu, 0x192784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192784u;
label_192784:
    // 0x192784: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19278c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x192790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192794: 0x9249000a  lbu         $t1, 0xA($s2)
    ctx->pc = 0x192794u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x192798: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19279c: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1927a0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1927a4: 0x27ab01a0  addiu       $t3, $sp, 0x1A0
    ctx->pc = 0x1927a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1927a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1927a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1927ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1927acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1927b0: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x1927b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1927b4: 0xc064d04  jal         func_193410
    ctx->pc = 0x1927B4u;
    SET_GPR_U32(ctx, 31, 0x1927BCu);
    ctx->pc = 0x1927B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927B4u;
    // 0x1927b8: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193410u, 0x1927B4u, 0x1927BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927BCu;
label_1927bc:
    // 0x1927bc: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1927bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1927c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1927c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1927c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1927c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1927c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1927cc: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x1927ccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1927d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1927d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1927d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1927d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1927dc: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x1927dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1927e0: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1927e4: 0xc064d9c  jal         func_193670
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x1927E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927E4u;
    // 0x1927e8: 0x24480070  addiu       $t0, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193670u, 0x1927E4u, 0x1927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ECu;
label_1927ec:
    // 0x1927ec: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1927ECu;
    {
        const bool branch_taken_0x1927ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927ECu;
        // 0x1927f0: 0xa6800088  sh          $zero, 0x88($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 136), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927ec) {
            ctx->pc = 0x1929E8u;
            goto label_1929e8;
        }
    }
    ctx->pc = 0x1927F4u;
    // 0x1927f4: 0x0  nop
    ctx->pc = 0x1927f4u;
    // NOP
label_1927f8:
    // 0x1927f8: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x1927f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1927fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1927fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192800: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x192800u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
    // 0x192804: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x192804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192808: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x192808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19280c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x19280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192810: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x192810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192814: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x192814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x192818: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x192818u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x19281c: 0x46020d03  div.s       $f20, $f1, $f2
    ctx->pc = 0x19281cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x192820: 0x0  nop
    ctx->pc = 0x192820u;
    // NOP
    // 0x192824: 0x0  nop
    ctx->pc = 0x192824u;
    // NOP
    // 0x192828: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x192828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19282c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19282Cu;
    {
        const bool branch_taken_0x19282c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19282c) {
            ctx->pc = 0x192838u;
            goto label_192838;
        }
    }
    ctx->pc = 0x192834u;
    // 0x192834: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x192834u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_192838:
    // 0x192838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19283c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19283cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192840: 0x0  nop
    ctx->pc = 0x192840u;
    // NOP
    // 0x192844: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x192844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192848: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x192848u;
    {
        const bool branch_taken_0x192848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192848) {
            ctx->pc = 0x192858u;
            goto label_192858;
        }
    }
    ctx->pc = 0x192850u;
    // 0x192850: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x192850u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x192854: 0x0  nop
    ctx->pc = 0x192854u;
    // NOP
label_192858:
    // 0x192858: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19285c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x19285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192860: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192864: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x192864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x192868: 0xc0414c0  jal         func_105300
    ctx->pc = 0x192868u;
    SET_GPR_U32(ctx, 31, 0x192870u);
    ctx->pc = 0x19286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192868u;
    // 0x19286c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x192868u, 0x192870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192870u;
label_192870:
    // 0x192870: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x192870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192874: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x192874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192878: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19287c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x19287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x192880: 0xc0414c0  jal         func_105300
    ctx->pc = 0x192880u;
    SET_GPR_U32(ctx, 31, 0x192888u);
    ctx->pc = 0x192884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192880u;
    // 0x192884: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x192880u, 0x192888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192888u;
label_192888:
    // 0x192888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19288c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192890: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x192890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192894: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x192894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19289c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x19289cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1928a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1928a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1928a4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1928a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1928a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1928a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1928ac: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1928acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1928b0: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1928b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1928b4: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1928b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1928b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1928bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1928bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1928c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1928c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1928c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1928c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1928c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1928c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1928cc: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1928ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1928d0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1928D0u;
    {
        const bool branch_taken_0x1928d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928D0u;
        // 0x1928d4: 0xa6800088  sh          $zero, 0x88($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 136), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928d0) {
            ctx->pc = 0x1929E8u;
            goto label_1929e8;
        }
    }
    ctx->pc = 0x1928D8u;
label_1928d8:
    // 0x1928d8: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x1928d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1928dc: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x1928dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1928e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1928e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1928e4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1928e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1928e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1928ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1928ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1928f0: 0x904200af  lbu         $v0, 0xAF($v0)
    ctx->pc = 0x1928f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 175)));
    // 0x1928f4: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x1928f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x1928f8: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x1928f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1928fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1928fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192900: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x192904: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x192904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x192908: 0xc065094  jal         func_194250
    ctx->pc = 0x192908u;
    SET_GPR_U32(ctx, 31, 0x192910u);
    ctx->pc = 0x19290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192908u;
    // 0x19290c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194250u, 0x192908u, 0x192910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192910u;
label_192910:
    // 0x192910: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192914: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x192914u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x192918: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x192918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19291c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192920: 0x9249000b  lbu         $t1, 0xB($s2)
    ctx->pc = 0x192920u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x192924: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192928: 0x864a000e  lh          $t2, 0xE($s2)
    ctx->pc = 0x192928u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x19292c: 0x26880040  addiu       $t0, $s4, 0x40
    ctx->pc = 0x19292cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192930: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x192934: 0x27ab01a0  addiu       $t3, $sp, 0x1A0
    ctx->pc = 0x192934u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x192938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19293c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192940: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192944: 0xc064c4c  jal         func_193130
    ctx->pc = 0x192944u;
    SET_GPR_U32(ctx, 31, 0x19294Cu);
    ctx->pc = 0x192948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192944u;
    // 0x192948: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x192944u, 0x19294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19294Cu;
label_19294c:
    // 0x19294c: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x19294cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192954: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x192954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192958: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19295c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x19295cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x192960: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x192960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192964: 0x9249000a  lbu         $t1, 0xA($s2)
    ctx->pc = 0x192964u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x192968: 0x27ab01a0  addiu       $t3, $sp, 0x1A0
    ctx->pc = 0x192968u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x19296c: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x19296cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x192970: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192974: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x192974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x192978: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x192978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x19297c: 0x8c660094  lw          $a2, 0x94($v1)
    ctx->pc = 0x19297cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x192980: 0xc064d04  jal         func_193410
    ctx->pc = 0x192980u;
    SET_GPR_U32(ctx, 31, 0x192988u);
    ctx->pc = 0x192984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192980u;
    // 0x192984: 0x244afffe  addiu       $t2, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193410u, 0x192980u, 0x192988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192988u;
label_192988:
    // 0x192988: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x19298c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192990: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192994: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192998: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x192998u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19299c: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x19299cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1929a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1929a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1929a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1929a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1929a8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x1929a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1929ac: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x1929acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1929b0: 0xc064d9c  jal         func_193670
    ctx->pc = 0x1929B0u;
    SET_GPR_U32(ctx, 31, 0x1929B8u);
    ctx->pc = 0x1929B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929B0u;
    // 0x1929b4: 0x24480070  addiu       $t0, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193670u, 0x1929B0u, 0x1929B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929B8u;
label_1929b8:
    // 0x1929b8: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x1929b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1929bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1929bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929c0: 0x8249000d  lb          $t1, 0xD($s2)
    ctx->pc = 0x1929c0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x1929c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1929c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1929c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1929c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1929cc: 0x8e87009c  lw          $a3, 0x9C($s4)
    ctx->pc = 0x1929ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1929d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1929d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1929d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1929d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1929d8: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x1929d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1929dc: 0xc064db8  jal         func_1936E0
    ctx->pc = 0x1929DCu;
    SET_GPR_U32(ctx, 31, 0x1929E4u);
    ctx->pc = 0x1929E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929DCu;
    // 0x1929e0: 0x26880088  addiu       $t0, $s4, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1936E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1936E0u, 0x1929DCu, 0x1929E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929E4u;
label_1929e4:
    // 0x1929e4: 0x0  nop
    ctx->pc = 0x1929e4u;
    // NOP
label_1929e8:
    // 0x1929e8: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x1929e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1929ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1929ECu;
    {
        const bool branch_taken_0x1929ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1929ec) {
            ctx->pc = 0x192A00u;
            goto label_192a00;
        }
    }
    ctx->pc = 0x1929F4u;
    // 0x1929f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1929f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1929f8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1929f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1929fc: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x1929fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
label_192a00:
    // 0x192a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192a04: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x192a08: 0xaf82870c  sw          $v0, -0x78F4($gp)
    ctx->pc = 0x192a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 2));
    // 0x192a0c: 0xc0ecaf8  jal         func_3B2BE0
    ctx->pc = 0x192A0Cu;
    SET_GPR_U32(ctx, 31, 0x192A14u);
    ctx->pc = 0x192A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A0Cu;
    // 0x192a10: 0x2484fd60  addiu       $a0, $a0, -0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2BE0u, 0x192A0Cu, 0x192A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A14u;
label_192a14:
    // 0x192a14: 0x8f848724  lw          $a0, -0x78DC($gp)
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x192a18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192a1c: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x192A1Cu;
    {
        const bool branch_taken_0x192a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A1Cu;
        // 0x192a20: 0xaf888c7c  sw          $t0, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a1c) {
            ctx->pc = 0x192B48u;
            goto label_192b48;
        }
    }
    ctx->pc = 0x192A24u;
    // 0x192a24: 0x9383872c  lbu         $v1, -0x78D4($gp)
    ctx->pc = 0x192a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x192a28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x192a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a2c: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x192A2Cu;
    {
        const bool branch_taken_0x192a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A2Cu;
        // 0x192a30: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a2c) {
            ctx->pc = 0x192B48u;
            goto label_192b48;
        }
    }
    ctx->pc = 0x192A34u;
    // 0x192a34: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x192a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x192a38: 0x8c26fe84  lw          $a2, -0x17C($at)
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966916)));
    // 0x192a3c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x192a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x192a40: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x192a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x192a44: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x192a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x192a48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x192a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a4c: 0xa388872c  sb          $t0, -0x78D4($gp)
    ctx->pc = 0x192a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 8));
    // 0x192a50: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x192a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x192a54: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x192a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x192a58: 0xac27fe50  sw          $a3, -0x1B0($at)
    ctx->pc = 0x192a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x92FE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE50u, _value); } while (0);
    // 0x192a5c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x192a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x192a60: 0xa3888c88  sb          $t0, -0x7378($gp)
    ctx->pc = 0x192a60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 8));
    // 0x192a64: 0xac25fe84  sw          $a1, -0x17C($at)
    ctx->pc = 0x192a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x192a68: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x192a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x192a6c: 0x7c23fe60  sq          $v1, -0x1A0($at)
    ctx->pc = 0x192a6cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x92FE60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x92FE60u, _value); } while (0);
    // 0x192a70: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x192a74: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x192a74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x192a78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x192a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192a7c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x192a80: 0xc06462c  jal         func_1918B0
    ctx->pc = 0x192A80u;
    SET_GPR_U32(ctx, 31, 0x192A88u);
    ctx->pc = 0x192A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A80u;
    // 0x192a84: 0xac22fe84  sw          $v0, -0x17C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    goto label_1918b0;
    ctx->pc = 0x192A88u;
label_192a88:
    // 0x192a88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a8c: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x192A8Cu;
    {
        const bool branch_taken_0x192a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A8Cu;
        // 0x192a90: 0xa383872c  sb          $v1, -0x78D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a8c) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x192A94u;
    // 0x192a94: 0x0  nop
    ctx->pc = 0x192a94u;
    // NOP
label_192a98:
    // 0x192a98: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x192a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x192a9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192A9Cu;
    {
        const bool branch_taken_0x192a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192a9c) {
            ctx->pc = 0x192AB0u;
            goto label_192ab0;
        }
    }
    ctx->pc = 0x192AA4u;
    // 0x192aa4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x192aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x192aa8: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x192aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x192aac: 0x0  nop
    ctx->pc = 0x192aacu;
    // NOP
label_192ab0:
    // 0x192ab0: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x192ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x192ab4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x192AB4u;
    {
        const bool branch_taken_0x192ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ab4) {
            ctx->pc = 0x192AE8u;
            goto label_192ae8;
        }
    }
    ctx->pc = 0x192ABCu;
    // 0x192abc: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x192abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x192ac0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192ac4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x192ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x192ac8: 0xa0400011  sb          $zero, 0x11($v0)
    ctx->pc = 0x192ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x192acc: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x192accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x192ad0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x192ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x192ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192AD4u;
    {
        const bool branch_taken_0x192ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AD4u;
        // 0x192ad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ad4) {
            ctx->pc = 0x192AE8u;
            goto label_192ae8;
        }
    }
    ctx->pc = 0x192ADCu;
    // 0x192adc: 0xc064f38  jal         func_193CE0
    ctx->pc = 0x192ADCu;
    SET_GPR_U32(ctx, 31, 0x192AE4u);
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x192ADCu, 0x192AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AE4u;
label_192ae4:
    // 0x192ae4: 0x0  nop
    ctx->pc = 0x192ae4u;
    // NOP
label_192ae8:
    // 0x192ae8: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192aec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x192aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192af4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192af8: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x192af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x192afc: 0xae8300a4  sw          $v1, 0xA4($s4)
    ctx->pc = 0x192afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    // 0x192b00: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x192b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x192b04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192B04u;
    {
        const bool branch_taken_0x192b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b04) {
            ctx->pc = 0x192B10u;
            goto label_192b10;
        }
    }
    ctx->pc = 0x192B0Cu;
    // 0x192b0c: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x192b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
label_192b10:
    // 0x192b10: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x192b10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
    // 0x192b14: 0xae8000bc  sw          $zero, 0xBC($s4)
    ctx->pc = 0x192b14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 0));
label_192b18:
    // 0x192b18: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192b1c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x192b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x192b20: 0x2484fd60  addiu       $a0, $a0, -0x2A0
    ctx->pc = 0x192b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    // 0x192b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192b28: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192b2c: 0xc0ecba4  jal         func_3B2E90
    ctx->pc = 0x192B2Cu;
    SET_GPR_U32(ctx, 31, 0x192B34u);
    ctx->pc = 0x192B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B2Cu;
    // 0x192b30: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2E90u, 0x192B2Cu, 0x192B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B34u;
label_192b34:
    // 0x192b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b38: 0xc064120  jal         func_190480
    ctx->pc = 0x192B38u;
    SET_GPR_U32(ctx, 31, 0x192B40u);
    ctx->pc = 0x192B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B38u;
    // 0x192b3c: 0xa3838c88  sb          $v1, -0x7378($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190480u, 0x192B38u, 0x192B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B40u;
label_192b40:
    // 0x192b40: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x192B40u;
    {
        const bool branch_taken_0x192b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b40) {
            ctx->pc = 0x1930F8u;
            goto label_1930f8;
        }
    }
    ctx->pc = 0x192B48u;
label_192b48:
    // 0x192b48: 0x93828c88  lbu         $v0, -0x7378($gp)
    ctx->pc = 0x192b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937736)));
    // 0x192b4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192B4Cu;
    {
        const bool branch_taken_0x192b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b4c) {
            ctx->pc = 0x192B60u;
            goto label_192b60;
        }
    }
    ctx->pc = 0x192B54u;
    // 0x192b54: 0xa3808c88  sb          $zero, -0x7378($gp)
    ctx->pc = 0x192b54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 0));
    // 0x192b58: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x192b58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b5c: 0x0  nop
    ctx->pc = 0x192b5cu;
    // NOP
label_192b60:
    // 0x192b60: 0x12e00043  beqz        $s7, . + 4 + (0x43 << 2)
    ctx->pc = 0x192B60u;
    {
        const bool branch_taken_0x192b60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B60u;
        // 0x192b64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b60) {
            ctx->pc = 0x192C70u;
            goto label_192c70;
        }
    }
    ctx->pc = 0x192B68u;
    // 0x192b68: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192b6c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x192b6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192b70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b74: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x192b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192b78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b80: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x192b80u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192b84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b88: 0x268c0040  addiu       $t4, $s4, 0x40
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192b8c: 0x268d00f0  addiu       $t5, $s4, 0xF0
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x192b90: 0x268a0010  addiu       $t2, $s4, 0x10
    ctx->pc = 0x192b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192b94: 0x268b0030  addiu       $t3, $s4, 0x30
    ctx->pc = 0x192b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x192b98: 0x26880040  addiu       $t0, $s4, 0x40
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192b9c: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x192b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192ba0: 0x26890060  addiu       $t1, $s4, 0x60
    ctx->pc = 0x192ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x192ba4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x192ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x192ba8: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192bac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x192bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192bb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bb4: 0x784e0000  lq          $t6, 0x0($v0)
    ctx->pc = 0x192bb4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192bb8: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x192bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x192bbc: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x192bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192bc0: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x192bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x192bc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x192bc8: 0x7c6e0000  sq          $t6, 0x0($v1)
    ctx->pc = 0x192bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 14));
    // 0x192bcc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x192bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x192bd0: 0x79830000  lq          $v1, 0x0($t4)
    ctx->pc = 0x192bd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x192bd4: 0x7da30000  sq          $v1, 0x0($t5)
    ctx->pc = 0x192bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 3));
    // 0x192bd8: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x192bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x192bdc: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x192bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x192be0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x192be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x192be4: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x192be4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x192be8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x192be8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192bec: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x192becu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x192bf0: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x192bf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192bf4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x192bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x192bf8: 0x938486d0  lbu         $a0, -0x7930($gp)
    ctx->pc = 0x192bf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192bfc: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192c00: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x192c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x192c04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x192c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x192c08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192c0c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x192c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x192c10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192c14: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x192c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192c18: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x192c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x192c1c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x192c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x192c20: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192c24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192c2c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x192c30: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x192c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x192c34: 0x938486d0  lbu         $a0, -0x7930($gp)
    ctx->pc = 0x192c34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192c38: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x192c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192c3c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x192c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x192c40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x192c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x192c44: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x192c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x192c48: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x192c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192c4c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x192c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x192c50: 0xae8210d8  sw          $v0, 0x10D8($s4)
    ctx->pc = 0x192c50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4312), GPR_U32(ctx, 2));
    // 0x192c54: 0x86820088  lh          $v0, 0x88($s4)
    ctx->pc = 0x192c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x192c58: 0xa682008a  sh          $v0, 0x8A($s4)
    ctx->pc = 0x192c58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x192c5c: 0xa682008c  sh          $v0, 0x8C($s4)
    ctx->pc = 0x192c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x192c60: 0x86830088  lh          $v1, 0x88($s4)
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x192c64: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192c68: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x192C68u;
    {
        const bool branch_taken_0x192c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C68u;
        // 0x192c6c: 0xa4430024  sh          $v1, 0x24($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c68) {
            ctx->pc = 0x192E20u;
            goto label_192e20;
        }
    }
    ctx->pc = 0x192C70u;
label_192c70:
    // 0x192c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c74: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x192c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x192c78: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x192c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x192c7c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x192c7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192c80: 0x26830060  addiu       $v1, $s4, 0x60
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x192c84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c8c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x192c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x192c90: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x192c94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x192c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192c98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192c98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192c9c: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192ca0: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x192ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192ca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192cac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192cb0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x192cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x192cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192cb8: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x192cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cbc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192cc0: 0xe4410080  swc1        $f1, 0x80($v0)
    ctx->pc = 0x192cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x192cc4: 0x86820088  lh          $v0, 0x88($s4)
    ctx->pc = 0x192cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x192cc8: 0xa682008c  sh          $v0, 0x8C($s4)
    ctx->pc = 0x192cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x192ccc: 0xc68200c4  lwc1        $f2, 0xC4($s4)
    ctx->pc = 0x192cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192cd0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192cd4: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x192CD4u;
    {
        const bool branch_taken_0x192cd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CD4u;
        // 0x192cd8: 0x3c034060  lui         $v1, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cd4) {
            ctx->pc = 0x192DA0u;
            goto label_192da0;
        }
    }
    ctx->pc = 0x192CDCu;
    // 0x192cdc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x192cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x192ce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x192ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192ce8: 0x0  nop
    ctx->pc = 0x192ce8u;
    // NOP
    // 0x192cec: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x192cecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x192cf0: 0x0  nop
    ctx->pc = 0x192cf0u;
    // NOP
    // 0x192cf4: 0x0  nop
    ctx->pc = 0x192cf4u;
    // NOP
    // 0x192cf8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192cfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x192CFCu;
    {
        const bool branch_taken_0x192cfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192cfc) {
            ctx->pc = 0x192D08u;
            goto label_192d08;
        }
    }
    ctx->pc = 0x192D04u;
    // 0x192d04: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x192d04u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_192d08:
    // 0x192d08: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x192d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x192d0c: 0xc68000c4  lwc1        $f0, 0xC4($s4)
    ctx->pc = 0x192d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192d10: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x192d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x192d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192d18: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x192d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x192d1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x192d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x192d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x192d24: 0xe68000c4  swc1        $f0, 0xC4($s4)
    ctx->pc = 0x192d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
    // 0x192d28: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x192d28u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x192d2c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x192d2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x192d30: 0x0  nop
    ctx->pc = 0x192d30u;
    // NOP
    // 0x192d34: 0x0  nop
    ctx->pc = 0x192d34u;
    // NOP
    // 0x192d38: 0xc0414c0  jal         func_105300
    ctx->pc = 0x192D38u;
    SET_GPR_U32(ctx, 31, 0x192D40u);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x192D38u, 0x192D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D40u;
label_192d40:
    // 0x192d40: 0xc68000c4  lwc1        $f0, 0xC4($s4)
    ctx->pc = 0x192d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192d44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x192d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x192d48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192d4c: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x192d50: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x192d54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x192d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d58: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x192d58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x192d5c: 0x0  nop
    ctx->pc = 0x192d5cu;
    // NOP
    // 0x192d60: 0x0  nop
    ctx->pc = 0x192d60u;
    // NOP
    // 0x192d64: 0xc0414c0  jal         func_105300
    ctx->pc = 0x192D64u;
    SET_GPR_U32(ctx, 31, 0x192D6Cu);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x192D64u, 0x192D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D6Cu;
label_192d6c:
    // 0x192d6c: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192d70: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x192d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x192d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d78: 0xc68100c4  lwc1        $f1, 0xC4($s4)
    ctx->pc = 0x192d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192d7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192d80: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192d84: 0xc4420078  lwc1        $f2, 0x78($v0)
    ctx->pc = 0x192d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192d88: 0xc4430080  lwc1        $f3, 0x80($v0)
    ctx->pc = 0x192d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192d8c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x192d8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x192d90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x192d90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192d94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x192d94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192d98: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x192d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x192d9c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x192d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_192da0:
    // 0x192da0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x192da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192da4: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x192da8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x192da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x192dac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x192dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192db0: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x192db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x192db4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192db8: 0xc0651ac  jal         func_1946B0
    ctx->pc = 0x192DB8u;
    SET_GPR_U32(ctx, 31, 0x192DC0u);
    ctx->pc = 0x192DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DB8u;
    // 0x192dbc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1946B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1946B0u, 0x192DB8u, 0x192DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DC0u;
label_192dc0:
    // 0x192dc0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x192dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192dc4: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x192dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x192dc8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x192dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x192dcc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x192dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192dd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192dd4: 0xc0651ac  jal         func_1946B0
    ctx->pc = 0x192DD4u;
    SET_GPR_U32(ctx, 31, 0x192DDCu);
    ctx->pc = 0x192DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DD4u;
    // 0x192dd8: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1946B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1946B0u, 0x192DD4u, 0x192DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DDCu;
label_192ddc:
    // 0x192ddc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x192de0: 0x938386d0  lbu         $v1, -0x7930($gp)
    ctx->pc = 0x192de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x192de4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192de8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x192de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192dec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x192decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x192df0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x192df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x192df4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x192df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192df8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x192df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x192dfc: 0xc44c0080  lwc1        $f12, 0x80($v0)
    ctx->pc = 0x192dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192e00: 0xc065154  jal         func_194550
    ctx->pc = 0x192E00u;
    SET_GPR_U32(ctx, 31, 0x192E08u);
    ctx->pc = 0x192E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E00u;
    // 0x192e04: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194550u, 0x192E00u, 0x192E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E08u;
label_192e08:
    // 0x192e08: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192e0c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x192e10: 0x8685008c  lh          $a1, 0x8C($s4)
    ctx->pc = 0x192e10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x192e14: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x192e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x192e18: 0xc065174  jal         func_1945D0
    ctx->pc = 0x192E18u;
    SET_GPR_U32(ctx, 31, 0x192E20u);
    ctx->pc = 0x192E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E18u;
    // 0x192e1c: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1945D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1945D0u, 0x192E18u, 0x192E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E20u;
label_192e20:
    // 0x192e20: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x192e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x192e24: 0x2442d8d0  addiu       $v0, $v0, -0x2730
    ctx->pc = 0x192e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x192e28: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x192e2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x192e2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40D8D0u));
    // 0x192e30: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x192e34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x192e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e38: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192e38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192e3c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192e40: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095B4u));
    // 0x192e44: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x192e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x192e48: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x192e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192e4c: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x192e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192e50: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x192e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e54: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x192e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192e58: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x192e58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x192e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x192e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192e60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x192e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x192e64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x192e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x192e68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x192e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x192e6c: 0x46000504  c1          0x504
    ctx->pc = 0x192e6cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x192e70: 0x0  nop
    ctx->pc = 0x192e70u;
    // NOP
    // 0x192e74: 0x0  nop
    ctx->pc = 0x192e74u;
    // NOP
    // 0x192e78: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192E78u;
    {
        const bool branch_taken_0x192e78 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x192e78) {
            ctx->pc = 0x192EB0u;
            goto label_192eb0;
        }
    }
    ctx->pc = 0x192E80u;
    // 0x192e80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x192e84: 0xc0414d0  jal         func_105340
    ctx->pc = 0x192E84u;
    SET_GPR_U32(ctx, 31, 0x192E8Cu);
    ctx->pc = 0x192E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E84u;
    // 0x192e88: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x192E84u, 0x192E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E8Cu;
label_192e8c:
    // 0x192e8c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x192e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x192e90: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x192e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x192e94: 0xc041472  jal         func_1051C8
    ctx->pc = 0x192E94u;
    SET_GPR_U32(ctx, 31, 0x192E9Cu);
    ctx->pc = 0x192E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E94u;
    // 0x192e98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x192E94u, 0x192E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E9Cu;
label_192e9c:
    // 0x192e9c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x192e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x192ea0: 0xc06535c  jal         func_194D70
    ctx->pc = 0x192EA0u;
    SET_GPR_U32(ctx, 31, 0x192EA8u);
    ctx->pc = 0x192EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EA0u;
    // 0x192ea4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194D70u, 0x192EA0u, 0x192EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192EA8u;
label_192ea8:
    // 0x192ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eac: 0x0  nop
    ctx->pc = 0x192eacu;
    // NOP
label_192eb0:
    // 0x192eb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x192eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eb4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x192EB4u;
    {
        const bool branch_taken_0x192eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EB4u;
        // 0x192eb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192eb4) {
            ctx->pc = 0x192FB8u;
            goto label_192fb8;
        }
    }
    ctx->pc = 0x192EBCu;
    // 0x192ebc: 0x0  nop
    ctx->pc = 0x192ebcu;
    // NOP
label_192ec0:
    // 0x192ec0: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x192ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x192ec4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x192ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x192ec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x192ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ecc: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x192ed0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x192ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x192ed4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x192ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x192ed8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x192ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x192edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192ee0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x192ee0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192ee4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x192EE4u;
    SET_GPR_U32(ctx, 31, 0x192EECu);
    ctx->pc = 0x192EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EE4u;
    // 0x192ee8: 0x7ce80000  sq          $t0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x192EE4u, 0x192EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192EECu;
label_192eec:
    // 0x192eec: 0x8f8386b4  lw          $v1, -0x794C($gp)
    ctx->pc = 0x192eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x192ef0: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x192ef4: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x192ef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x192ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192efc: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x192efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x192f00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x192f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x192f04: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x192f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x192f08: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x192f0c: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x192f0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x192f10: 0x0  nop
    ctx->pc = 0x192f10u;
    // NOP
    // 0x192f14: 0x0  nop
    ctx->pc = 0x192f14u;
    // NOP
    // 0x192f18: 0x1810  mfhi        $v1
    ctx->pc = 0x192f18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x192f1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x192f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192f24: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x192f24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192f28: 0xc0414ca  jal         func_105328
    ctx->pc = 0x192F28u;
    SET_GPR_U32(ctx, 31, 0x192F30u);
    ctx->pc = 0x192F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F28u;
    // 0x192f2c: 0x7d090000  sq          $t1, 0x0($t0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x192F28u, 0x192F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F30u;
label_192f30:
    // 0x192f30: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x192f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192f34: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x192f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x192f38: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x192f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x192f3c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x192f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x192f40: 0x24422b40  addiu       $v0, $v0, 0x2B40
    ctx->pc = 0x192f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11072));
    // 0x192f44: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x192f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x192f48: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x192f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x192f4c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x192f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192f50: 0xc041442  jal         func_105108
    ctx->pc = 0x192F50u;
    SET_GPR_U32(ctx, 31, 0x192F58u);
    ctx->pc = 0x192F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F50u;
    // 0x192f54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x192F50u, 0x192F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F58u;
label_192f58:
    // 0x192f58: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x192f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x192f5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x192F5Cu;
    {
        const bool branch_taken_0x192f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f5c) {
            ctx->pc = 0x192FB0u;
            goto label_192fb0;
        }
    }
    ctx->pc = 0x192F64u;
    // 0x192f64: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x192f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f6c: 0x0  nop
    ctx->pc = 0x192f6cu;
    // NOP
    // 0x192f70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192f74: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x192F74u;
    {
        const bool branch_taken_0x192f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F74u;
        // 0x192f78: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f74) {
            ctx->pc = 0x192FB0u;
            goto label_192fb0;
        }
    }
    ctx->pc = 0x192F7Cu;
    // 0x192f7c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x192F7Cu;
    {
        const bool branch_taken_0x192f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F7Cu;
        // 0x192f80: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f7c) {
            ctx->pc = 0x192F90u;
            goto label_192f90;
        }
    }
    ctx->pc = 0x192F84u;
    // 0x192f84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x192f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x192f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x192f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x192f8c: 0xac5201b0  sw          $s2, 0x1B0($v0)
    ctx->pc = 0x192f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 18));
label_192f90:
    // 0x192f90: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x192f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x192f94: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x192f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192f98: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x192f9c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x192f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x192fa0: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x192fa4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192fa8: 0xc041442  jal         func_105108
    ctx->pc = 0x192FA8u;
    SET_GPR_U32(ctx, 31, 0x192FB0u);
    ctx->pc = 0x192FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FA8u;
    // 0x192fac: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x192FA8u, 0x192FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FB0u;
label_192fb0:
    // 0x192fb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x192fb4: 0x0  nop
    ctx->pc = 0x192fb4u;
    // NOP
label_192fb8:
    // 0x192fb8: 0x8f8386b4  lw          $v1, -0x794C($gp)
    ctx->pc = 0x192fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x192fbc: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x192fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x192fc0: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x192FC0u;
    {
        const bool branch_taken_0x192fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192fc0) {
            ctx->pc = 0x192EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192ec0;
        }
    }
    ctx->pc = 0x192FC8u;
    // 0x192fc8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x192FC8u;
    {
        const bool branch_taken_0x192fc8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x192fc8) {
            ctx->pc = 0x193000u;
            goto label_193000;
        }
    }
    ctx->pc = 0x192FD0u;
    // 0x192fd0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x192fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x192fd4: 0xc065380  jal         func_194E00
    ctx->pc = 0x192FD4u;
    SET_GPR_U32(ctx, 31, 0x192FDCu);
    ctx->pc = 0x192FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FD4u;
    // 0x192fd8: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E00u, 0x192FD4u, 0x192FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FDCu;
label_192fdc:
    // 0x192fdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192FDCu;
    {
        const bool branch_taken_0x192fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FDCu;
        // 0x192fe0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fdc) {
            ctx->pc = 0x193000u;
            goto label_193000;
        }
    }
    ctx->pc = 0x192FE4u;
    // 0x192fe4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x192fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x192fe8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x192fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x192fec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ff0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x192ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192ff4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x192ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x192ff8: 0x1000fed3  b           . + 4 + (-0x12D << 2)
    ctx->pc = 0x192FF8u;
    {
        const bool branch_taken_0x192ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FF8u;
        // 0x192ffc: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ff8) {
            ctx->pc = 0x192B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192b48;
        }
    }
    ctx->pc = 0x193000u;
label_193000:
    // 0x193000: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x193000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x193004: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x193004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095B4u));
    // 0x193008: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x193008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x19300c: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x19300Cu;
    SET_GPR_U32(ctx, 31, 0x193014u);
    ctx->pc = 0x193010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19300Cu;
    // 0x193010: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x19300Cu, 0x193014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193014u;
label_193014:
    // 0x193014: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x193014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x193018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19301c: 0x0  nop
    ctx->pc = 0x19301cu;
    // NOP
    // 0x193020: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193024: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x193024u;
    {
        const bool branch_taken_0x193024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193024) {
            ctx->pc = 0x193030u;
            goto label_193030;
        }
    }
    ctx->pc = 0x19302Cu;
    // 0x19302c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19302cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193030:
    // 0x193030: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x193030u;
    {
        const bool branch_taken_0x193030 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x193034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193030u;
        // 0x193034: 0x3c02435c  lui         $v0, 0x435C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193030) {
            ctx->pc = 0x1930A8u;
            goto label_1930a8;
        }
    }
    ctx->pc = 0x193038u;
    // 0x193038: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x193038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x19303c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19303cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193040: 0x0  nop
    ctx->pc = 0x193040u;
    // NOP
    // 0x193044: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x193044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193048: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x193048u;
    {
        const bool branch_taken_0x193048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193048u;
        // 0x19304c: 0xaf838758  sw          $v1, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193048) {
            ctx->pc = 0x193058u;
            goto label_193058;
        }
    }
    ctx->pc = 0x193050u;
    // 0x193050: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x193050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x193054: 0xaf828758  sw          $v0, -0x78A8($gp)
    ctx->pc = 0x193054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 2));
label_193058:
    // 0x193058: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x193058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19305c: 0x8fb201b0  lw          $s2, 0x1B0($sp)
    ctx->pc = 0x19305cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x193060: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x193060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x193064: 0xc0414d0  jal         func_105340
    ctx->pc = 0x193064u;
    SET_GPR_U32(ctx, 31, 0x19306Cu);
    ctx->pc = 0x193068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193064u;
    // 0x193068: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x193064u, 0x19306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19306Cu;
label_19306c:
    // 0x19306c: 0xc78c8758  lwc1        $f12, -0x78A8($gp)
    ctx->pc = 0x19306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193070: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x193074: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x193074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x193078: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x19307c: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x19307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x193080: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x193080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193084: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x193084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193088: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x193088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19308c: 0xc0651e0  jal         func_194780
    ctx->pc = 0x19308Cu;
    SET_GPR_U32(ctx, 31, 0x193094u);
    ctx->pc = 0x193090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19308Cu;
    // 0x193090: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194780u, 0x19308Cu, 0x193094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193094u;
label_193094:
    // 0x193094: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x193098: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x193098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x19309c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x19309Cu;
    SET_GPR_U32(ctx, 31, 0x1930A4u);
    ctx->pc = 0x1930A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19309Cu;
    // 0x1930a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19309Cu, 0x1930A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1930A4u;
label_1930a4:
    // 0x1930a4: 0x0  nop
    ctx->pc = 0x1930a4u;
    // NOP
label_1930a8:
    // 0x1930a8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1930a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x1930ac: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1930b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1930B0u;
    {
        const bool branch_taken_0x1930b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930b0) {
            ctx->pc = 0x1930E0u;
            goto label_1930e0;
        }
    }
    ctx->pc = 0x1930B8u;
    // 0x1930b8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1930b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1930bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1930bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1930c0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1930c4: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x1930c8: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x1930c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x1930cc: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x1930ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1930d0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1930d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1930d4: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1930d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1930d8: 0xc04e744  jal         func_139D10
    ctx->pc = 0x1930D8u;
    SET_GPR_U32(ctx, 31, 0x1930E0u);
    ctx->pc = 0x1930DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930D8u;
    // 0x1930dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D10u, 0x1930D8u, 0x1930E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1930E0u;
label_1930e0:
    // 0x1930e0: 0xc064120  jal         func_190480
    ctx->pc = 0x1930E0u;
    SET_GPR_U32(ctx, 31, 0x1930E8u);
    ctx->pc = 0x190480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190480u, 0x1930E0u, 0x1930E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1930E8u;
label_1930e8:
    // 0x1930e8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1930e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1930ec: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x1930ECu;
    SET_GPR_U32(ctx, 31, 0x1930F4u);
    ctx->pc = 0x1930F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930ECu;
    // 0x1930f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x1930ECu, 0x1930F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1930F4u;
label_1930f4:
    // 0x1930f4: 0x0  nop
    ctx->pc = 0x1930f4u;
    // NOP
label_1930f8:
    // 0x1930f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1930f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1930fc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1930fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x193100: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x193100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193104: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x193104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193108: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x193108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19310c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19310cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193110: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x193110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193114: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x193114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193118: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x193118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19311c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19311cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x193120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193124: 0x3e00008  jr          $ra
    ctx->pc = 0x193124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193124u;
        // 0x193128: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19312Cu;
}
