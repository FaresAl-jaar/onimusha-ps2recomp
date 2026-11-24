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

// Function: sub_002DA820
// Address: 0x2da820 - 0x2da9c4
void sub_002DA820_0x2da820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA820_0x2da820");
#endif

    switch (ctx->pc) {
        case 0x2da86cu: goto label_2da86c;
        case 0x2da880u: goto label_2da880;
        case 0x2da888u: goto label_2da888;
        case 0x2da8a8u: goto label_2da8a8;
        case 0x2da914u: goto label_2da914;
        case 0x2da964u: goto label_2da964;
        case 0x2da988u: goto label_2da988;
        case 0x2da9a8u: goto label_2da9a8;
        default: break;
    }

    ctx->pc = 0x2da820u;

    // 0x2da820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2da820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2da824: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2da824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2da828: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2da828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2da82c: 0x24426880  addiu       $v0, $v0, 0x6880
    ctx->pc = 0x2da82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26752));
    // 0x2da830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da834: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2da834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2da838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da83c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2da83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da844: 0xa3a00060  sb          $zero, 0x60($sp)
    ctx->pc = 0x2da844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da848: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x2da848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da84c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2da84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2da850: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2da850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2da854: 0x344617fd  ori         $a2, $v0, 0x17FD
    ctx->pc = 0x2da854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x2da858: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x2da858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2da85c: 0xa3a20060  sb          $v0, 0x60($sp)
    ctx->pc = 0x2da85cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da860: 0x8c910044  lw          $s1, 0x44($a0)
    ctx->pc = 0x2da860u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2da864: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DA864u;
    SET_GPR_U32(ctx, 31, 0x2DA86Cu);
    ctx->pc = 0x2DA868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA864u;
    // 0x2da868: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DA864u, 0x2DA86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA86Cu;
label_2da86c:
    // 0x2da86c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2da870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da874: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2da878: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DA878u;
    SET_GPR_U32(ctx, 31, 0x2DA880u);
    ctx->pc = 0x2DA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA878u;
    // 0x2da87c: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DA878u, 0x2DA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA880u;
label_2da880:
    // 0x2da880: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2DA880u;
    {
        const bool branch_taken_0x2da880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA880u;
        // 0x2da884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da880) {
            ctx->pc = 0x2DA970u;
            goto label_2da970;
        }
    }
    ctx->pc = 0x2DA888u;
label_2da888:
    // 0x2da888: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2da888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x2da88c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2da890: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x2da890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x2da894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da898: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2da898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2da89c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da8a0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2DA8A0u;
    SET_GPR_U32(ctx, 31, 0x2DA8A8u);
    ctx->pc = 0x2DA8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8A0u;
    // 0x2da8a4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2DA8A0u, 0x2DA8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8A8u;
label_2da8a8:
    // 0x2da8a8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DA8A8u;
    {
        const bool branch_taken_0x2da8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8A8u;
        // 0x2da8ac: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8a8) {
            ctx->pc = 0x2DA968u;
            goto label_2da968;
        }
    }
    ctx->pc = 0x2DA8B0u;
    // 0x2da8b0: 0x24430770  addiu       $v1, $v0, 0x770
    ctx->pc = 0x2da8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    // 0x2da8b4: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2da8b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da8b8: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2da8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2da8bc: 0x24e7f390  addiu       $a3, $a3, -0xC70
    ctx->pc = 0x2da8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964112));
    // 0x2da8c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2da8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da8c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2da8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da8c8: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x2da8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2da8cc: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x2da8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x2da8d0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2da8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2da8d4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2da8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2da8d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da8dc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2da8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da8e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da8e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2da8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da8e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da8ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2da8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2da8f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2da8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2da8f8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2da8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da8fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2da8fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2da900: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2da900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2da904: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2da904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da908: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da90c: 0xc04d748  jal         func_135D20
    ctx->pc = 0x2DA90Cu;
    SET_GPR_U32(ctx, 31, 0x2DA914u);
    ctx->pc = 0x2DA910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA90Cu;
    // 0x2da910: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x2DA90Cu, 0x2DA914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA914u;
label_2da914:
    // 0x2da914: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DA914u;
    {
        const bool branch_taken_0x2da914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da914) {
            ctx->pc = 0x2DA968u;
            goto label_2da968;
        }
    }
    ctx->pc = 0x2DA91Cu;
    // 0x2da91c: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x2da91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da924: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2da924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2da928: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2da928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da92c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2da92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da930: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2da930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2da934: 0xa3a20060  sb          $v0, 0x60($sp)
    ctx->pc = 0x2da934u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da938: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2da93c: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x2da93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da940: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2da940u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2da944: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2da944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2da948: 0x24c6f900  addiu       $a2, $a2, -0x700
    ctx->pc = 0x2da948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965504));
    // 0x2da94c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2da94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da950: 0xa7a60068  sh          $a2, 0x68($sp)
    ctx->pc = 0x2da950u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 6));
    // 0x2da954: 0xa7a3006a  sh          $v1, 0x6A($sp)
    ctx->pc = 0x2da954u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x2da958: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2da958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2da95c: 0xc0b6a80  jal         func_2DAA00
    ctx->pc = 0x2DA95Cu;
    SET_GPR_U32(ctx, 31, 0x2DA964u);
    ctx->pc = 0x2DA960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA95Cu;
    // 0x2da960: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA00u, 0x2DA95Cu, 0x2DA964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA964u;
label_2da964:
    // 0x2da964: 0x0  nop
    ctx->pc = 0x2da964u;
    // NOP
label_2da968:
    // 0x2da968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2da968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2da96c: 0x0  nop
    ctx->pc = 0x2da96cu;
    // NOP
label_2da970:
    // 0x2da970: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x2da970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2da974: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2DA974u;
    {
        const bool branch_taken_0x2da974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA974u;
        // 0x2da978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da974) {
            ctx->pc = 0x2DA888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da888;
        }
    }
    ctx->pc = 0x2DA97Cu;
    // 0x2da97c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2da97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2da980: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DA980u;
    SET_GPR_U32(ctx, 31, 0x2DA988u);
    ctx->pc = 0x2DA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA980u;
    // 0x2da984: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DA980u, 0x2DA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA988u;
label_2da988:
    // 0x2da988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da98c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2da98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2da990: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2da990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2da994: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2da994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2da998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da99c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2da99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2da9a0: 0xc0b6b10  jal         func_2DAC40
    ctx->pc = 0x2DA9A0u;
    SET_GPR_U32(ctx, 31, 0x2DA9A8u);
    ctx->pc = 0x2DA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9A0u;
    // 0x2da9a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC40u, 0x2DA9A0u, 0x2DA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9A8u;
label_2da9a8:
    // 0x2da9a8: 0xae510044  sw          $s1, 0x44($s2)
    ctx->pc = 0x2da9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
    // 0x2da9ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2da9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da9b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da9b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da9b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9BCu;
        // 0x2da9c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9C4u;
}
