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

// Function: sub_0037E480
// Address: 0x37e480 - 0x37ed84
void sub_0037E480_0x37e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E480_0x37e480");
#endif

    switch (ctx->pc) {
        case 0x37e4ecu: goto label_37e4ec;
        case 0x37e504u: goto label_37e504;
        case 0x37e5a4u: goto label_37e5a4;
        case 0x37e61cu: goto label_37e61c;
        case 0x37e630u: goto label_37e630;
        case 0x37e6c8u: goto label_37e6c8;
        case 0x37e74cu: goto label_37e74c;
        case 0x37e768u: goto label_37e768;
        case 0x37e84cu: goto label_37e84c;
        case 0x37e914u: goto label_37e914;
        case 0x37e91cu: goto label_37e91c;
        case 0x37e924u: goto label_37e924;
        case 0x37e9b8u: goto label_37e9b8;
        case 0x37ea74u: goto label_37ea74;
        case 0x37ea90u: goto label_37ea90;
        case 0x37eb90u: goto label_37eb90;
        case 0x37ec44u: goto label_37ec44;
        case 0x37ecb8u: goto label_37ecb8;
        case 0x37ed18u: goto label_37ed18;
        case 0x37ed60u: goto label_37ed60;
        default: break;
    }

    ctx->pc = 0x37e480u;

    // 0x37e480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37e484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37e488: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37e488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37e48c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37e490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37e494: 0x8c902b80  lw          $s0, 0x2B80($a0)
    ctx->pc = 0x37e494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x37e498: 0xa0832bbd  sb          $v1, 0x2BBD($a0)
    ctx->pc = 0x37e498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11197), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e49c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37e49cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37e4a0: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x37e4a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x37e4a4: 0x10200232  beqz        $at, . + 4 + (0x232 << 2)
    ctx->pc = 0x37E4A4u;
    {
        const bool branch_taken_0x37e4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4A4u;
        // 0x37e4a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4a4) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E4ACu;
    // 0x37e4ac: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x37e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x37e4b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e4b4: 0x24a51de0  addiu       $a1, $a1, 0x1DE0
    ctx->pc = 0x37e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
    // 0x37e4b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37e4bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e4c0: 0x600008  jr          $v1
    ctx->pc = 0x37E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E4C8u: goto label_37e4c8;
            case 0x37E4F8u: goto label_37e4f8;
            case 0x37E630u: goto label_37e630;
            case 0x37E6C0u: goto label_37e6c0;
            case 0x37E778u: goto label_37e778;
            case 0x37E8F8u: goto label_37e8f8;
            case 0x37E9B0u: goto label_37e9b0;
            case 0x37EAB0u: goto label_37eab0;
            case 0x37EAB8u: goto label_37eab8;
            case 0x37ECD0u: goto label_37ecd0;
            case 0x37ED20u: goto label_37ed20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E4C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37E4C8u;
label_37e4c8:
    // 0x37e4c8: 0xa2202b8a  sb          $zero, 0x2B8A($s1)
    ctx->pc = 0x37e4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11146), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e4cc: 0xa2202b88  sb          $zero, 0x2B88($s1)
    ctx->pc = 0x37e4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11144), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e4d4: 0xa2202b89  sb          $zero, 0x2B89($s1)
    ctx->pc = 0x37e4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11145), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e4d8: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x37e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x37e4dc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x37e4dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e4e0: 0xa6232b8c  sh          $v1, 0x2B8C($s1)
    ctx->pc = 0x37e4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11148), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e4e4: 0xc0e0198  jal         func_380660
    ctx->pc = 0x37E4E4u;
    SET_GPR_U32(ctx, 31, 0x37E4ECu);
    ctx->pc = 0x37E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E4E4u;
    // 0x37e4e8: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380660u, 0x37E4E4u, 0x37E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E4ECu;
label_37e4ec:
    // 0x37e4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e4f0: 0xa2222b92  sb          $v0, 0x2B92($s1)
    ctx->pc = 0x37e4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11154), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e4f4: 0xa6202b94  sh          $zero, 0x2B94($s1)
    ctx->pc = 0x37e4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11156), (uint16_t)GPR_U32(ctx, 0));
label_37e4f8:
    // 0x37e4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4fc: 0xc0e00fc  jal         func_3803F0
    ctx->pc = 0x37E4FCu;
    SET_GPR_U32(ctx, 31, 0x37E504u);
    ctx->pc = 0x37E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E4FCu;
    // 0x37e500: 0xa6200826  sh          $zero, 0x826($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3803F0u, 0x37E4FCu, 0x37E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E504u;
label_37e504:
    // 0x37e504: 0x82232b90  lb          $v1, 0x2B90($s1)
    ctx->pc = 0x37e504u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11152)));
    // 0x37e508: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x37e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37e50c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x37e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37e510: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37e510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37e514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e518: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x37e518u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37e51c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x37e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x37e520: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x37e520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37e524: 0x26262b50  addiu       $a2, $s1, 0x2B50
    ctx->pc = 0x37e524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37e528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e52c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x37e52cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x37e530: 0x3c02458c  lui         $v0, 0x458C
    ctx->pc = 0x37e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17804 << 16));
    // 0x37e534: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x37e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37e538: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x37e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x37e53c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37e53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37e540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37e544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e548: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x37e548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x37e54c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x37e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x37e550: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x37e550u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x37e554: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x37e554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x37e558: 0xa62500c0  sh          $a1, 0xC0($s1)
    ctx->pc = 0x37e558u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 5));
    // 0x37e55c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37e55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37e560: 0xa62000c2  sh          $zero, 0xC2($s1)
    ctx->pc = 0x37e560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x37e564: 0xa62000c4  sh          $zero, 0xC4($s1)
    ctx->pc = 0x37e564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 0));
    // 0x37e568: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x37e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x37e56c: 0x82232b90  lb          $v1, 0x2B90($s1)
    ctx->pc = 0x37e56cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11152)));
    // 0x37e570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37e570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37e574: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x37e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37e578: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x37e578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x37e57c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x37e57cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x37e580: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37e580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37e584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e588: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37e588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37e58c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x37e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x37e590: 0xc6222b54  lwc1        $f2, 0x2B54($s1)
    ctx->pc = 0x37e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e594: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x37e594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37e598: 0xe6212b54  swc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37e598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11092), bits); }
    // 0x37e59c: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37E59Cu;
    SET_GPR_U32(ctx, 31, 0x37E5A4u);
    ctx->pc = 0x37E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E59Cu;
    // 0x37e5a0: 0xe6202b70  swc1        $f0, 0x2B70($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37E59Cu, 0x37E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E5A4u;
label_37e5a4:
    // 0x37e5a4: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x37e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37e5a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37e5ac: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x37e5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37e5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e5b4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x37e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x37e5b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37e5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37e5bc: 0x0  nop
    ctx->pc = 0x37e5bcu;
    // NOP
    // 0x37e5c0: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x37e5c0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x37e5c4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x37e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x37e5c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x37e5c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x37e5cc: 0xe6222b64  swc1        $f2, 0x2B64($s1)
    ctx->pc = 0x37e5ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11108), bits); }
    // 0x37e5d0: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x37e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37e5d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37e5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37e5d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x37e5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37e5dc: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x37e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x37e5e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37e5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e5e8: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x37e5e8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x37e5ec: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x37e5ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x37e5f0: 0xe6222b68  swc1        $f2, 0x2B68($s1)
    ctx->pc = 0x37e5f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11112), bits); }
    // 0x37e5f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e5f8: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x37e5f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x37e5fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37e5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37e600: 0xe6212b6c  swc1        $f1, 0x2B6C($s1)
    ctx->pc = 0x37e600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11116), bits); }
    // 0x37e604: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x37e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e608: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x37e608u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x37e60c: 0x0  nop
    ctx->pc = 0x37e60cu;
    // NOP
    // 0x37e610: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37e610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37e614: 0xc0e049c  jal         func_381270
    ctx->pc = 0x37E614u;
    SET_GPR_U32(ctx, 31, 0x37E61Cu);
    ctx->pc = 0x37E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E614u;
    // 0x37e618: 0xe6202b60  swc1        $f0, 0x2B60($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x381270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381270u, 0x37E614u, 0x37E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E61Cu;
label_37e61c:
    // 0x37e61c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37e620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e624: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37e624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e628: 0xc0df834  jal         func_37E0D0
    ctx->pc = 0x37E628u;
    SET_GPR_U32(ctx, 31, 0x37E630u);
    ctx->pc = 0x37E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E628u;
    // 0x37e62c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E0D0u, 0x37E628u, 0x37E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E630u;
label_37e630:
    // 0x37e630: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x37e630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x37e634: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e638: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37e638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37e63c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37e63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37e640: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37e640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37e644: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37e644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37e648: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37e648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37e64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e650: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37e650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37e654: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37e654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37e658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e65c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37E65Cu;
    {
        const bool branch_taken_0x37e65c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e65c) {
            ctx->pc = 0x37E674u;
            goto label_37e674;
        }
    }
    ctx->pc = 0x37E664u;
    // 0x37e664: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e668: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e66c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E66Cu;
    {
        const bool branch_taken_0x37e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E66Cu;
        // 0x37e670: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e66c) {
            ctx->pc = 0x37E690u;
            goto label_37e690;
        }
    }
    ctx->pc = 0x37E674u;
label_37e674:
    // 0x37e674: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37e674u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37e678: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37e678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37e67c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e67cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e680: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e684: 0x0  nop
    ctx->pc = 0x37e684u;
    // NOP
    // 0x37e688: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37e688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37e68c: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x37e68cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37e690:
    // 0x37e690: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37e690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37e694: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E694u;
    {
        const bool branch_taken_0x37e694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e694) {
            ctx->pc = 0x37E6A8u;
            goto label_37e6a8;
        }
    }
    ctx->pc = 0x37E69Cu;
    // 0x37e69c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37e6a0: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x37E6A0u;
    {
        const bool branch_taken_0x37e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6A0u;
        // 0x37e6a4: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6a0) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E6A8u;
label_37e6a8:
    // 0x37e6a8: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x37e6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37e6ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37e6b0: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37e6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e6b4: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x37e6b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37e6b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x37e6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x37e6bc: 0xa622082a  sh          $v0, 0x82A($s1)
    ctx->pc = 0x37e6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
label_37e6c0:
    // 0x37e6c0: 0xc0e049c  jal         func_381270
    ctx->pc = 0x37E6C0u;
    SET_GPR_U32(ctx, 31, 0x37E6C8u);
    ctx->pc = 0x37E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E6C0u;
    // 0x37e6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381270u, 0x37E6C0u, 0x37E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6C8u;
label_37e6c8:
    // 0x37e6c8: 0xc6212b54  lwc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e6cc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37e6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e6d4: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x37e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e6d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37e6d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37e6dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x37e6dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e6e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37E6E0u;
    {
        const bool branch_taken_0x37e6e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e6e0) {
            ctx->pc = 0x37E6F8u;
            goto label_37e6f8;
        }
    }
    ctx->pc = 0x37E6E8u;
    // 0x37e6e8: 0x92222b78  lbu         $v0, 0x2B78($s1)
    ctx->pc = 0x37e6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37e6ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x37e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37e6f0: 0xa2222b78  sb          $v0, 0x2B78($s1)
    ctx->pc = 0x37e6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e6f4: 0x0  nop
    ctx->pc = 0x37e6f4u;
    // NOP
label_37e6f8:
    // 0x37e6f8: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x37e6f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37e6fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37e6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37e700: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37E700u;
    {
        const bool branch_taken_0x37e700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e700) {
            ctx->pc = 0x37E758u;
            goto label_37e758;
        }
    }
    ctx->pc = 0x37E708u;
    // 0x37e708: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e70c: 0xc6212ba4  lwc1        $f1, 0x2BA4($s1)
    ctx->pc = 0x37e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37e710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e714: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x37E714u;
    {
        const bool branch_taken_0x37e714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E714u;
        // 0x37e718: 0x26272ba0  addiu       $a3, $s1, 0x2BA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 11168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e714) {
            ctx->pc = 0x37E758u;
            goto label_37e758;
        }
    }
    ctx->pc = 0x37E71Cu;
    // 0x37e71c: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x37e71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x37e720: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37e720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37e724: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x37e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x37e728: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37e72c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37e72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e730: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37e730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37e734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37e734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e738: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37e738u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e73c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37e73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37e740: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37e740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37e744: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37E744u;
    SET_GPR_U32(ctx, 31, 0x37E74Cu);
    ctx->pc = 0x37E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E744u;
    // 0x37e748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37E744u, 0x37E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E74Cu;
label_37e74c:
    // 0x37e74c: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x37e74cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37e750: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x37e750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x37e754: 0xa622082a  sh          $v0, 0x82A($s1)
    ctx->pc = 0x37e754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
label_37e758:
    // 0x37e758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37e758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e760: 0xc0dfde8  jal         func_37F7A0
    ctx->pc = 0x37E760u;
    SET_GPR_U32(ctx, 31, 0x37E768u);
    ctx->pc = 0x37E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E760u;
    // 0x37e764: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7A0u, 0x37E760u, 0x37E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E768u;
label_37e768:
    // 0x37e768: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x37E768u;
    {
        const bool branch_taken_0x37e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E768u;
        // 0x37e76c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e768) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E770u;
    // 0x37e770: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x37E770u;
    {
        const bool branch_taken_0x37e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E770u;
        // 0x37e774: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e770) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E778u;
label_37e778:
    // 0x37e778: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x37e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x37e77c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e780: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37e780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x37e784: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37e784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37e788: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x37e788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x37e78c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37e78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37e790: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37e794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e798: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37e798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37e79c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37e79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37e7a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e7a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e7a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37E7A4u;
    {
        const bool branch_taken_0x37e7a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e7a4) {
            ctx->pc = 0x37E7BCu;
            goto label_37e7bc;
        }
    }
    ctx->pc = 0x37E7ACu;
    // 0x37e7ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e7acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e7b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e7b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E7B4u;
    {
        const bool branch_taken_0x37e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7B4u;
        // 0x37e7b8: 0x96220826  lhu         $v0, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7b4) {
            ctx->pc = 0x37E7D8u;
            goto label_37e7d8;
        }
    }
    ctx->pc = 0x37E7BCu;
label_37e7bc:
    // 0x37e7bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37e7bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37e7c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37e7c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e7c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e7c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e7cc: 0x0  nop
    ctx->pc = 0x37e7ccu;
    // NOP
    // 0x37e7d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37e7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37e7d4: 0x96220826  lhu         $v0, 0x826($s1)
    ctx->pc = 0x37e7d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37e7d8:
    // 0x37e7d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E7D8u;
    {
        const bool branch_taken_0x37e7d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x37E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7D8u;
        // 0x37e7dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7d8) {
            ctx->pc = 0x37E7ECu;
            goto label_37e7ec;
        }
    }
    ctx->pc = 0x37E7E0u;
    // 0x37e7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e7e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37E7E4u;
    {
        const bool branch_taken_0x37e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7E4u;
        // 0x37e7e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7e4) {
            ctx->pc = 0x37E804u;
            goto label_37e804;
        }
    }
    ctx->pc = 0x37E7ECu;
label_37e7ec:
    // 0x37e7ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37e7f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37e7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37e7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e7f8: 0x0  nop
    ctx->pc = 0x37e7f8u;
    // NOP
    // 0x37e7fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37e7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37e800: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37e800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37e804:
    // 0x37e804: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E804u;
    {
        const bool branch_taken_0x37e804 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x37E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E804u;
        // 0x37e808: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e804) {
            ctx->pc = 0x37E818u;
            goto label_37e818;
        }
    }
    ctx->pc = 0x37E80Cu;
    // 0x37e80c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x37e80cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37E810u;
    {
        const bool branch_taken_0x37e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E810u;
        // 0x37e814: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e810) {
            ctx->pc = 0x37E830u;
            goto label_37e830;
        }
    }
    ctx->pc = 0x37E818u;
label_37e818:
    // 0x37e818: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x37e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x37e81c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37e81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37e820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e824: 0x0  nop
    ctx->pc = 0x37e824u;
    // NOP
    // 0x37e828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37e828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37e82c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37e82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37e830:
    // 0x37e830: 0x0  nop
    ctx->pc = 0x37e830u;
    // NOP
    // 0x37e834: 0x0  nop
    ctx->pc = 0x37e834u;
    // NOP
    // 0x37e838: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x37e838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37e83c: 0x0  nop
    ctx->pc = 0x37e83cu;
    // NOP
    // 0x37e840: 0x0  nop
    ctx->pc = 0x37e840u;
    // NOP
    // 0x37e844: 0xc0e040c  jal         func_381030
    ctx->pc = 0x37E844u;
    SET_GPR_U32(ctx, 31, 0x37E84Cu);
    ctx->pc = 0x37E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E844u;
    // 0x37e848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381030u, 0x37E844u, 0x37E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E84Cu;
label_37e84c:
    // 0x37e84c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e850: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x37e850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x37e854: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37e854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37e858: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37e858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x37e85c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x37e85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x37e860: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37e860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37e864: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37e864u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37e868: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37e868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37e86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e870: 0x0  nop
    ctx->pc = 0x37e870u;
    // NOP
    // 0x37e874: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37e874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37e878: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e87c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37E87Cu;
    {
        const bool branch_taken_0x37e87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e87c) {
            ctx->pc = 0x37E894u;
            goto label_37e894;
        }
    }
    ctx->pc = 0x37E884u;
    // 0x37e884: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e888: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e88c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E88Cu;
    {
        const bool branch_taken_0x37e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E88Cu;
        // 0x37e890: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e88c) {
            ctx->pc = 0x37E8B0u;
            goto label_37e8b0;
        }
    }
    ctx->pc = 0x37E894u;
label_37e894:
    // 0x37e894: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37e894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37e898: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37e898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37e89c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e89cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e8a0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e8a4: 0x0  nop
    ctx->pc = 0x37e8a4u;
    // NOP
    // 0x37e8a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37e8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37e8ac: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x37e8acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37e8b0:
    // 0x37e8b0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37e8b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37e8b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E8B4u;
    {
        const bool branch_taken_0x37e8b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e8b4) {
            ctx->pc = 0x37E8C8u;
            goto label_37e8c8;
        }
    }
    ctx->pc = 0x37E8BCu;
    // 0x37e8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37e8c0: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x37E8C0u;
    {
        const bool branch_taken_0x37e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8C0u;
        // 0x37e8c4: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e8c0) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E8C8u;
label_37e8c8:
    // 0x37e8c8: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x37e8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37e8cc: 0x96232b94  lhu         $v1, 0x2B94($s1)
    ctx->pc = 0x37e8ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11156)));
    // 0x37e8d0: 0x28610190  slti        $at, $v1, 0x190
    ctx->pc = 0x37e8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x37e8d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E8D4u;
    {
        const bool branch_taken_0x37e8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8D4u;
        // 0x37e8d8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e8d4) {
            ctx->pc = 0x37E8E8u;
            goto label_37e8e8;
        }
    }
    ctx->pc = 0x37E8DCu;
    // 0x37e8dc: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x37E8DCu;
    {
        const bool branch_taken_0x37e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8DCu;
        // 0x37e8e0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e8dc) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E8E4u;
    // 0x37e8e4: 0x0  nop
    ctx->pc = 0x37e8e4u;
    // NOP
label_37e8e8:
    // 0x37e8e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x37e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37e8ec: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x37e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e8f0: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x37E8F0u;
    {
        const bool branch_taken_0x37e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8F0u;
        // 0x37e8f4: 0xa6200826  sh          $zero, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e8f0) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E8F8u;
label_37e8f8:
    // 0x37e8f8: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x37e8f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x37e8fc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x37E8FCu;
    {
        const bool branch_taken_0x37e8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37e8fc) {
            ctx->pc = 0x37E928u;
            goto label_37e928;
        }
    }
    ctx->pc = 0x37E904u;
    // 0x37e904: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x37e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37e908: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x37e908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x37e90c: 0xc0ddee4  jal         func_377B90
    ctx->pc = 0x37E90Cu;
    SET_GPR_U32(ctx, 31, 0x37E914u);
    ctx->pc = 0x37E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E90Cu;
    // 0x37e910: 0xc62c0020  lwc1        $f12, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x377B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377B90u, 0x37E90Cu, 0x37E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E914u;
label_37e914:
    // 0x37e914: 0xc0e0124  jal         func_380490
    ctx->pc = 0x37E914u;
    SET_GPR_U32(ctx, 31, 0x37E91Cu);
    ctx->pc = 0x37E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E914u;
    // 0x37e918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380490u, 0x37E914u, 0x37E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E91Cu;
label_37e91c:
    // 0x37e91c: 0xc0dff70  jal         func_37FDC0
    ctx->pc = 0x37E91Cu;
    SET_GPR_U32(ctx, 31, 0x37E924u);
    ctx->pc = 0x37E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E91Cu;
    // 0x37e920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FDC0u, 0x37E91Cu, 0x37E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E924u;
label_37e924:
    // 0x37e924: 0x0  nop
    ctx->pc = 0x37e924u;
    // NOP
label_37e928:
    // 0x37e928: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x37e928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x37e92c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e930: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37e930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37e934: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37e934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37e938: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37e938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37e93c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37e93cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37e940: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37e940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37e944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e948: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37e948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37e94c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37e94cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37e950: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e954: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37E954u;
    {
        const bool branch_taken_0x37e954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e954) {
            ctx->pc = 0x37E96Cu;
            goto label_37e96c;
        }
    }
    ctx->pc = 0x37E95Cu;
    // 0x37e95c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e960: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e964: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E964u;
    {
        const bool branch_taken_0x37e964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E964u;
        // 0x37e968: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e964) {
            ctx->pc = 0x37E988u;
            goto label_37e988;
        }
    }
    ctx->pc = 0x37E96Cu;
label_37e96c:
    // 0x37e96c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37e96cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37e970: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37e970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37e974: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e978: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37e97c: 0x0  nop
    ctx->pc = 0x37e97cu;
    // NOP
    // 0x37e980: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37e980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37e984: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x37e984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37e988:
    // 0x37e988: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37e988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37e98c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E98Cu;
    {
        const bool branch_taken_0x37e98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e98c) {
            ctx->pc = 0x37E9A0u;
            goto label_37e9a0;
        }
    }
    ctx->pc = 0x37E994u;
    // 0x37e994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37e998: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x37E998u;
    {
        const bool branch_taken_0x37e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E998u;
        // 0x37e99c: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e998) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E9A0u;
label_37e9a0:
    // 0x37e9a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x37e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37e9a4: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x37E9A4u;
    {
        const bool branch_taken_0x37e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9A4u;
        // 0x37e9a8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9a4) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37E9ACu;
    // 0x37e9ac: 0x0  nop
    ctx->pc = 0x37e9acu;
    // NOP
label_37e9b0:
    // 0x37e9b0: 0xc0c0890  jal         func_302240
    ctx->pc = 0x37E9B0u;
    SET_GPR_U32(ctx, 31, 0x37E9B8u);
    ctx->pc = 0x37E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E9B0u;
    // 0x37e9b4: 0x8e242b84  lw          $a0, 0x2B84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x37E9B0u, 0x37E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E9B8u;
label_37e9b8:
    // 0x37e9b8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x37E9B8u;
    {
        const bool branch_taken_0x37e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e9b8) {
            ctx->pc = 0x37EA98u;
            goto label_37ea98;
        }
    }
    ctx->pc = 0x37E9C0u;
    // 0x37e9c0: 0x96222b94  lhu         $v0, 0x2B94($s1)
    ctx->pc = 0x37e9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11156)));
    // 0x37e9c4: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x37e9c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x37e9c8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x37E9C8u;
    {
        const bool branch_taken_0x37e9c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e9c8) {
            ctx->pc = 0x37EA88u;
            goto label_37ea88;
        }
    }
    ctx->pc = 0x37E9D0u;
    // 0x37e9d0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x37e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e9d4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x37e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x37e9d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37e9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37e9dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37e9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e9e4: 0x0  nop
    ctx->pc = 0x37e9e4u;
    // NOP
    // 0x37e9e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x37e9e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37e9ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e9ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e9f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37E9F0u;
    {
        const bool branch_taken_0x37e9f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e9f0) {
            ctx->pc = 0x37EA08u;
            goto label_37ea08;
        }
    }
    ctx->pc = 0x37E9F8u;
    // 0x37e9f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e9f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37e9fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37e9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37ea00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EA00u;
    {
        const bool branch_taken_0x37ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA00u;
        // 0x37ea04: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea00) {
            ctx->pc = 0x37EA24u;
            goto label_37ea24;
        }
    }
    ctx->pc = 0x37EA08u;
label_37ea08:
    // 0x37ea08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37ea08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37ea0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37ea10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ea10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37ea14: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37ea14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37ea18: 0x0  nop
    ctx->pc = 0x37ea18u;
    // NOP
    // 0x37ea1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37ea1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37ea20: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x37ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ea24:
    // 0x37ea24: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x37ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37ea28: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EA28u;
    {
        const bool branch_taken_0x37ea28 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x37EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA28u;
        // 0x37ea2c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea28) {
            ctx->pc = 0x37EA3Cu;
            goto label_37ea3c;
        }
    }
    ctx->pc = 0x37EA30u;
    // 0x37ea30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x37ea30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ea34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EA34u;
    {
        const bool branch_taken_0x37ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA34u;
        // 0x37ea38: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea34) {
            ctx->pc = 0x37EA58u;
            goto label_37ea58;
        }
    }
    ctx->pc = 0x37EA3Cu;
label_37ea3c:
    // 0x37ea3c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x37ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x37ea40: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x37ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x37ea44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37ea48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ea48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ea4c: 0x0  nop
    ctx->pc = 0x37ea4cu;
    // NOP
    // 0x37ea50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ea50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37ea54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37ea54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37ea58:
    // 0x37ea58: 0x0  nop
    ctx->pc = 0x37ea58u;
    // NOP
    // 0x37ea5c: 0x0  nop
    ctx->pc = 0x37ea5cu;
    // NOP
    // 0x37ea60: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x37ea60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37ea64: 0x0  nop
    ctx->pc = 0x37ea64u;
    // NOP
    // 0x37ea68: 0x0  nop
    ctx->pc = 0x37ea68u;
    // NOP
    // 0x37ea6c: 0xc0ddef4  jal         func_377BD0
    ctx->pc = 0x37EA6Cu;
    SET_GPR_U32(ctx, 31, 0x37EA74u);
    ctx->pc = 0x377BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377BD0u, 0x37EA6Cu, 0x37EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA74u;
label_37ea74:
    // 0x37ea74: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x37ea74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x37ea78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37ea7c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x37EA7Cu;
    {
        const bool branch_taken_0x37ea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA7Cu;
        // 0x37ea80: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea7c) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37EA84u;
    // 0x37ea84: 0x0  nop
    ctx->pc = 0x37ea84u;
    // NOP
label_37ea88:
    // 0x37ea88: 0xc0c0860  jal         func_302180
    ctx->pc = 0x37EA88u;
    SET_GPR_U32(ctx, 31, 0x37EA90u);
    ctx->pc = 0x37EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA88u;
    // 0x37ea8c: 0x8e242b84  lw          $a0, 0x2B84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x37EA88u, 0x37EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA90u;
label_37ea90:
    // 0x37ea90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37EA90u;
    {
        const bool branch_taken_0x37ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA90u;
        // 0x37ea94: 0xae202b84  sw          $zero, 0x2B84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea90) {
            ctx->pc = 0x37EAA0u;
            goto label_37eaa0;
        }
    }
    ctx->pc = 0x37EA98u;
label_37ea98:
    // 0x37ea98: 0xae202b84  sw          $zero, 0x2B84($s1)
    ctx->pc = 0x37ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11140), GPR_U32(ctx, 0));
    // 0x37ea9c: 0x0  nop
    ctx->pc = 0x37ea9cu;
    // NOP
label_37eaa0:
    // 0x37eaa0: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x37eaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37eaa4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x37eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37eaa8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x37EAA8u;
    {
        const bool branch_taken_0x37eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAA8u;
        // 0x37eaac: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eaa8) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37EAB0u;
label_37eab0:
    // 0x37eab0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x37eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37eab4: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37eab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_37eab8:
    // 0x37eab8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x37eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x37eabc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37eac0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x37eac4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37eac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37eac8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x37eac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x37eacc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37eaccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ead0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37ead4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ead4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ead8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37ead8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37eadc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37eadcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37eae0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37eae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37eae4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37EAE4u;
    {
        const bool branch_taken_0x37eae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37eae4) {
            ctx->pc = 0x37EAFCu;
            goto label_37eafc;
        }
    }
    ctx->pc = 0x37EAECu;
    // 0x37eaec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37eaecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37eaf0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37eaf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37eaf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EAF4u;
    {
        const bool branch_taken_0x37eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EAF4u;
        // 0x37eaf8: 0x96220826  lhu         $v0, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eaf4) {
            ctx->pc = 0x37EB18u;
            goto label_37eb18;
        }
    }
    ctx->pc = 0x37EAFCu;
label_37eafc:
    // 0x37eafc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37eafcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37eb00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37eb04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37eb04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37eb08: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37eb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37eb0c: 0x0  nop
    ctx->pc = 0x37eb0cu;
    // NOP
    // 0x37eb10: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37eb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37eb14: 0x96220826  lhu         $v0, 0x826($s1)
    ctx->pc = 0x37eb14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37eb18:
    // 0x37eb18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EB18u;
    {
        const bool branch_taken_0x37eb18 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x37EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB18u;
        // 0x37eb1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb18) {
            ctx->pc = 0x37EB2Cu;
            goto label_37eb2c;
        }
    }
    ctx->pc = 0x37EB20u;
    // 0x37eb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37eb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37eb24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37EB24u;
    {
        const bool branch_taken_0x37eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB24u;
        // 0x37eb28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb24) {
            ctx->pc = 0x37EB44u;
            goto label_37eb44;
        }
    }
    ctx->pc = 0x37EB2Cu;
label_37eb2c:
    // 0x37eb2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37eb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37eb30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37eb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37eb34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37eb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37eb38: 0x0  nop
    ctx->pc = 0x37eb38u;
    // NOP
    // 0x37eb3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37eb3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37eb40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37eb40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37eb44:
    // 0x37eb44: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37EB44u;
    {
        const bool branch_taken_0x37eb44 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x37EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB44u;
        // 0x37eb48: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb44) {
            ctx->pc = 0x37EB58u;
            goto label_37eb58;
        }
    }
    ctx->pc = 0x37EB4Cu;
    // 0x37eb4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x37eb4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37eb50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37EB50u;
    {
        const bool branch_taken_0x37eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB50u;
        // 0x37eb54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb50) {
            ctx->pc = 0x37EB70u;
            goto label_37eb70;
        }
    }
    ctx->pc = 0x37EB58u;
label_37eb58:
    // 0x37eb58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x37eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x37eb5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37eb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37eb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37eb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37eb64: 0x0  nop
    ctx->pc = 0x37eb64u;
    // NOP
    // 0x37eb68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37eb68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37eb6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37eb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37eb70:
    // 0x37eb70: 0x0  nop
    ctx->pc = 0x37eb70u;
    // NOP
    // 0x37eb74: 0x0  nop
    ctx->pc = 0x37eb74u;
    // NOP
    // 0x37eb78: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x37eb78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37eb7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37eb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37eb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37eb88: 0xc0e040c  jal         func_381030
    ctx->pc = 0x37EB88u;
    SET_GPR_U32(ctx, 31, 0x37EB90u);
    ctx->pc = 0x37EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB88u;
    // 0x37eb8c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x381030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381030u, 0x37EB88u, 0x37EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EB90u;
label_37eb90:
    // 0x37eb90: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37eb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37eb94: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x37eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x37eb98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37eb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37eb9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x37eba0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x37eba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x37eba4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37eba8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37eba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37ebac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37ebacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ebb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ebb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ebb4: 0x0  nop
    ctx->pc = 0x37ebb4u;
    // NOP
    // 0x37ebb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37ebb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37ebbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37ebbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37ebc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37EBC0u;
    {
        const bool branch_taken_0x37ebc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37ebc0) {
            ctx->pc = 0x37EBD8u;
            goto label_37ebd8;
        }
    }
    ctx->pc = 0x37EBC8u;
    // 0x37ebc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ebc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37ebcc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37ebccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37ebd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EBD0u;
    {
        const bool branch_taken_0x37ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBD0u;
        // 0x37ebd4: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebd0) {
            ctx->pc = 0x37EBF4u;
            goto label_37ebf4;
        }
    }
    ctx->pc = 0x37EBD8u;
label_37ebd8:
    // 0x37ebd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37ebd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37ebdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37ebe0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ebe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37ebe4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37ebe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37ebe8: 0x0  nop
    ctx->pc = 0x37ebe8u;
    // NOP
    // 0x37ebec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37ebecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37ebf0: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x37ebf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37ebf4:
    // 0x37ebf4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37ebf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37ebf8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x37EBF8u;
    {
        const bool branch_taken_0x37ebf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ebf8) {
            ctx->pc = 0x37EC10u;
            goto label_37ec10;
        }
    }
    ctx->pc = 0x37EC00u;
    // 0x37ec00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37ec04: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x37EC04u;
    {
        const bool branch_taken_0x37ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EC04u;
        // 0x37ec08: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ec04) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37EC0Cu;
    // 0x37ec0c: 0x0  nop
    ctx->pc = 0x37ec0cu;
    // NOP
label_37ec10:
    // 0x37ec10: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x37ec10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37ec14: 0x92222b8a  lbu         $v0, 0x2B8A($s1)
    ctx->pc = 0x37ec14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11146)));
    // 0x37ec18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ec1c: 0xa2222b8a  sb          $v0, 0x2B8A($s1)
    ctx->pc = 0x37ec1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11146), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ec20: 0x92222b8a  lbu         $v0, 0x2B8A($s1)
    ctx->pc = 0x37ec20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11146)));
    // 0x37ec24: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37EC24u;
    {
        const bool branch_taken_0x37ec24 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x37ec24) {
            ctx->pc = 0x37EC78u;
            goto label_37ec78;
        }
    }
    ctx->pc = 0x37EC2Cu;
    // 0x37ec2c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x37ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x37ec30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec34: 0x96222b8c  lhu         $v0, 0x2B8C($s1)
    ctx->pc = 0x37ec34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11148)));
    // 0x37ec38: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x37ec38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37ec3c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37EC3Cu;
    SET_GPR_U32(ctx, 31, 0x37EC44u);
    ctx->pc = 0x37EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC3Cu;
    // 0x37ec40: 0x438023  subu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37EC3Cu, 0x37EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC44u;
label_37ec44:
    // 0x37ec44: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x37ec44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ec48: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37ec4c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x37ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x37ec50: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37ec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37ec54: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x37ec54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37ec58: 0x0  nop
    ctx->pc = 0x37ec58u;
    // NOP
    // 0x37ec5c: 0x0  nop
    ctx->pc = 0x37ec5cu;
    // NOP
    // 0x37ec60: 0x1010  mfhi        $v0
    ctx->pc = 0x37ec60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37ec64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ec68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x37ec68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37ec6c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37EC6Cu;
    {
        const bool branch_taken_0x37ec6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ec6c) {
            ctx->pc = 0x37ECC8u;
            goto label_37ecc8;
        }
    }
    ctx->pc = 0x37EC74u;
    // 0x37ec74: 0x0  nop
    ctx->pc = 0x37ec74u;
    // NOP
label_37ec78:
    // 0x37ec78: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37ec78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37ec7c: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x37ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x37ec80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37ec84: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37ec84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37ec88: 0x26272ba0  addiu       $a3, $s1, 0x2BA0
    ctx->pc = 0x37ec88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 11168));
    // 0x37ec8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37ec90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37ec90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37ec94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37ec98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x37ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37eca0: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37eca4: 0x922208e8  lbu         $v0, 0x8E8($s1)
    ctx->pc = 0x37eca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x37eca8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x37eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x37ecac: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37ecb0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37ECB0u;
    SET_GPR_U32(ctx, 31, 0x37ECB8u);
    ctx->pc = 0x37ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ECB0u;
    // 0x37ecb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37ECB0u, 0x37ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ECB8u;
label_37ecb8:
    // 0x37ecb8: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x37ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x37ecbc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x37ECBCu;
    {
        const bool branch_taken_0x37ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ECBCu;
        // 0x37ecc0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ecbc) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37ECC4u;
    // 0x37ecc4: 0x0  nop
    ctx->pc = 0x37ecc4u;
    // NOP
label_37ecc8:
    // 0x37ecc8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x37ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37eccc: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37ecccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_37ecd0:
    // 0x37ecd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37ecd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ecd4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x37ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37ecd8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x37ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x37ecdc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x37ecdcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ece0: 0x26252b50  addiu       $a1, $s1, 0x2B50
    ctx->pc = 0x37ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37ece4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ece4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ece8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ecec: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x37ececu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x37ecf0: 0x3c02c58c  lui         $v0, 0xC58C
    ctx->pc = 0x37ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50572 << 16));
    // 0x37ecf4: 0xc6222b54  lwc1        $f2, 0x2B54($s1)
    ctx->pc = 0x37ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37ecf8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x37ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x37ecfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37ecfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ed00: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x37ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x37ed04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37ed04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37ed08: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x37ed08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37ed0c: 0xe6212b54  swc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37ed0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11092), bits); }
    // 0x37ed10: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37ED10u;
    SET_GPR_U32(ctx, 31, 0x37ED18u);
    ctx->pc = 0x37ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED10u;
    // 0x37ed14: 0xe6202b70  swc1        $f0, 0x2B70($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37ED10u, 0x37ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED18u;
label_37ed18:
    // 0x37ed18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37ed1c: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_37ed20:
    // 0x37ed20: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37ed24: 0xc6212b54  lwc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ed28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ed28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ed2c: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x37ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37ed30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37ed30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37ed34: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x37ed34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37ed38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x37ED38u;
    {
        const bool branch_taken_0x37ed38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37ed38) {
            ctx->pc = 0x37ED50u;
            goto label_37ed50;
        }
    }
    ctx->pc = 0x37ED40u;
    // 0x37ed40: 0x92222b78  lbu         $v0, 0x2B78($s1)
    ctx->pc = 0x37ed40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37ed44: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x37ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x37ed48: 0xa2222b78  sb          $v0, 0x2B78($s1)
    ctx->pc = 0x37ed48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ed4c: 0x0  nop
    ctx->pc = 0x37ed4cu;
    // NOP
label_37ed50:
    // 0x37ed50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37ed54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed58: 0xc0dfde8  jal         func_37F7A0
    ctx->pc = 0x37ED58u;
    SET_GPR_U32(ctx, 31, 0x37ED60u);
    ctx->pc = 0x37ED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED58u;
    // 0x37ed5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7A0u, 0x37ED58u, 0x37ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ED60u;
label_37ed60:
    // 0x37ed60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37ED60u;
    {
        const bool branch_taken_0x37ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED60u;
        // 0x37ed64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed60) {
            ctx->pc = 0x37ED70u;
            goto label_37ed70;
        }
    }
    ctx->pc = 0x37ED68u;
    // 0x37ed68: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x37ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x37ed6c: 0x0  nop
    ctx->pc = 0x37ed6cu;
    // NOP
label_37ed70:
    // 0x37ed70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37ed70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ed74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37ed74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ed78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ed78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x37ED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED7Cu;
        // 0x37ed80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ED7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37ED84u;
}
