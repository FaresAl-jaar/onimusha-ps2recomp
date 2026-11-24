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

// Function: sub_003881F0
// Address: 0x3881f0 - 0x388540
void sub_003881F0_0x3881f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003881F0_0x3881f0");
#endif

    switch (ctx->pc) {
        case 0x3882b0u: goto label_3882b0;
        case 0x3882c8u: goto label_3882c8;
        case 0x3882d4u: goto label_3882d4;
        case 0x38830cu: goto label_38830c;
        case 0x388314u: goto label_388314;
        case 0x388338u: goto label_388338;
        case 0x3883b8u: goto label_3883b8;
        case 0x3883c8u: goto label_3883c8;
        case 0x3883fcu: goto label_3883fc;
        case 0x38841cu: goto label_38841c;
        case 0x388430u: goto label_388430;
        case 0x38843cu: goto label_38843c;
        case 0x388488u: goto label_388488;
        case 0x3884acu: goto label_3884ac;
        case 0x3884d4u: goto label_3884d4;
        case 0x3884e8u: goto label_3884e8;
        case 0x3884fcu: goto label_3884fc;
        case 0x38851cu: goto label_38851c;
        default: break;
    }

    ctx->pc = 0x3881f0u;

    // 0x3881f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3881f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3881f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3881f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3881f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3881f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3881fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3881fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x388200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x388200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x388204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x388208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38820c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x38820cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x388210: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x388210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x388214: 0x102000c2  beqz        $at, . + 4 + (0xC2 << 2)
    ctx->pc = 0x388214u;
    {
        const bool branch_taken_0x388214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x388218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388214u;
        // 0x388218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388214) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x38821Cu;
    // 0x38821c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x38821cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x388220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x388220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x388224: 0x24841f40  addiu       $a0, $a0, 0x1F40
    ctx->pc = 0x388224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    // 0x388228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x388228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38822c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x388230: 0x600008  jr          $v1
    ctx->pc = 0x388230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x388238u: goto label_388238;
            case 0x388268u: goto label_388268;
            case 0x388368u: goto label_388368;
            case 0x388398u: goto label_388398;
            case 0x388470u: goto label_388470;
            case 0x388478u: goto label_388478;
            case 0x388520u: goto label_388520;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388230u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388238u;
label_388238:
    // 0x388238: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x388238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x38823c: 0x24a5c6b8  addiu       $a1, $a1, -0x3948
    ctx->pc = 0x38823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952632));
    // 0x388240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x388240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388244: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x388244u;
    { uint32_t bits = FAST_READ32(0x65C6B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x388248: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x388248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38824c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x38824cu;
    { uint32_t bits = FAST_READ32(0x65C6BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x388250: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x388250u;
    { uint32_t bits = FAST_READ32(0x65C6C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x388254: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x388254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x388258: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x388258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x38825c: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x38825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x388260: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x388260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x388264: 0xa6032b6c  sh          $v1, 0x2B6C($s0)
    ctx->pc = 0x388264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11116), (uint16_t)GPR_U32(ctx, 3));
label_388268:
    // 0x388268: 0x86032b6c  lh          $v1, 0x2B6C($s0)
    ctx->pc = 0x388268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11116)));
    // 0x38826c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38826Cu;
    {
        const bool branch_taken_0x38826c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38826c) {
            ctx->pc = 0x388280u;
            goto label_388280;
        }
    }
    ctx->pc = 0x388274u;
    // 0x388274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388278: 0xa6032b6c  sh          $v1, 0x2B6C($s0)
    ctx->pc = 0x388278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11116), (uint16_t)GPR_U32(ctx, 3));
    // 0x38827c: 0x0  nop
    ctx->pc = 0x38827cu;
    // NOP
label_388280:
    // 0x388280: 0x86032b6c  lh          $v1, 0x2B6C($s0)
    ctx->pc = 0x388280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11116)));
    // 0x388284: 0x1c6000a6  bgtz        $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x388284u;
    {
        const bool branch_taken_0x388284 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x388284) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x38828Cu;
    // 0x38828c: 0x92032b62  lbu         $v1, 0x2B62($s0)
    ctx->pc = 0x38828cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11106)));
    // 0x388290: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x388290u;
    {
        const bool branch_taken_0x388290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388290u;
        // 0x388294: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388290) {
            ctx->pc = 0x3882A0u;
            goto label_3882a0;
        }
    }
    ctx->pc = 0x388298u;
    // 0x388298: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x388298u;
    {
        const bool branch_taken_0x388298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388298u;
        // 0x38829c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388298) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x3882A0u;
label_3882a0:
    // 0x3882a0: 0x8e052b38  lw          $a1, 0x2B38($s0)
    ctx->pc = 0x3882a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11064)));
    // 0x3882a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3882a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3882a8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3882A8u;
    SET_GPR_U32(ctx, 31, 0x3882B0u);
    ctx->pc = 0x3882ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3882A8u;
    // 0x3882ac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3882A8u, 0x3882B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3882B0u;
label_3882b0:
    // 0x3882b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3882B0u;
    {
        const bool branch_taken_0x3882b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882B0u;
        // 0x3882b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882b0) {
            ctx->pc = 0x3882C0u;
            goto label_3882c0;
        }
    }
    ctx->pc = 0x3882B8u;
    // 0x3882b8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x3882B8u;
    {
        const bool branch_taken_0x3882b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882B8u;
        // 0x3882bc: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882b8) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x3882C0u;
label_3882c0:
    // 0x3882c0: 0xc0e1cf8  jal         func_3873E0
    ctx->pc = 0x3882C0u;
    SET_GPR_U32(ctx, 31, 0x3882C8u);
    ctx->pc = 0x3882C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3882C0u;
    // 0x3882c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873E0u, 0x3882C0u, 0x3882C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3882C8u;
label_3882c8:
    // 0x3882c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3882c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3882cc: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x3882CCu;
    SET_GPR_U32(ctx, 31, 0x3882D4u);
    ctx->pc = 0x3882D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3882CCu;
    // 0x3882d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x3882CCu, 0x3882D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3882D4u;
label_3882d4:
    // 0x3882d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3882d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3882d8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3882D8u;
    {
        const bool branch_taken_0x3882d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882D8u;
        // 0x3882dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882d8) {
            ctx->pc = 0x3882E8u;
            goto label_3882e8;
        }
    }
    ctx->pc = 0x3882E0u;
    // 0x3882e0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x3882E0u;
    {
        const bool branch_taken_0x3882e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882E0u;
        // 0x3882e4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882e0) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x3882E8u;
label_3882e8:
    // 0x3882e8: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x3882e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3882ec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3882ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3882f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3882F0u;
    {
        const bool branch_taken_0x3882f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3882F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882F0u;
        // 0x3882f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882f0) {
            ctx->pc = 0x388300u;
            goto label_388300;
        }
    }
    ctx->pc = 0x3882F8u;
    // 0x3882f8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x3882F8u;
    {
        const bool branch_taken_0x3882f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882F8u;
        // 0x3882fc: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882f8) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x388300u;
label_388300:
    // 0x388300: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x388300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x388304: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x388304u;
    SET_GPR_U32(ctx, 31, 0x38830Cu);
    ctx->pc = 0x388308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388304u;
    // 0x388308: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x388304u, 0x38830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38830Cu;
label_38830c:
    // 0x38830c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x38830Cu;
    SET_GPR_U32(ctx, 31, 0x388314u);
    ctx->pc = 0x388310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38830Cu;
    // 0x388310: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x38830Cu, 0x388314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388314u;
label_388314:
    // 0x388314: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x388314u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x388318: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x388318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x38831c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x38831cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x388320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388324: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x388324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x388328: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x388328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x38832c: 0x25081f28  addiu       $t0, $t0, 0x1F28
    ctx->pc = 0x38832cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7976));
    // 0x388330: 0xc0e1d94  jal         func_387650
    ctx->pc = 0x388330u;
    SET_GPR_U32(ctx, 31, 0x388338u);
    ctx->pc = 0x388334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388330u;
    // 0x388334: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387650u, 0x388330u, 0x388338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388338u;
label_388338:
    // 0x388338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388338u;
    {
        const bool branch_taken_0x388338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388338u;
        // 0x38833c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388338) {
            ctx->pc = 0x388348u;
            goto label_388348;
        }
    }
    ctx->pc = 0x388340u;
    // 0x388340: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x388340u;
    {
        const bool branch_taken_0x388340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388340u;
        // 0x388344: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388340) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x388348u;
label_388348:
    // 0x388348: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x388348u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38834c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x388350: 0x7e042b50  sq          $a0, 0x2B50($s0)
    ctx->pc = 0x388350u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11088), GPR_VEC(ctx, 4));
    // 0x388354: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x388354u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x388358: 0x7e042b40  sq          $a0, 0x2B40($s0)
    ctx->pc = 0x388358u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11072), GPR_VEC(ctx, 4));
    // 0x38835c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x38835Cu;
    {
        const bool branch_taken_0x38835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38835Cu;
        // 0x388360: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38835c) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x388364u;
    // 0x388364: 0x0  nop
    ctx->pc = 0x388364u;
    // NOP
label_388368:
    // 0x388368: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x388368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38836c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38836cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x388370: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x388370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x388374: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x388374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x388378: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x388378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38837c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x38837cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x388380: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x388380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x388384: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x388384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x388388: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38838c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x38838cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x388390: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x388390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x388394: 0x0  nop
    ctx->pc = 0x388394u;
    // NOP
label_388398:
    // 0x388398: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x388398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x38839c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x38839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3883a0: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x3883a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x3883a4: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3883a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3883a8: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x3883A8u;
    {
        const bool branch_taken_0x3883a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883A8u;
        // 0x3883ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883a8) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x3883B0u;
    // 0x3883b0: 0xc0a4768  jal         func_291DA0
    ctx->pc = 0x3883B0u;
    SET_GPR_U32(ctx, 31, 0x3883B8u);
    ctx->pc = 0x291DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DA0u, 0x3883B0u, 0x3883B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883B8u;
label_3883b8:
    // 0x3883b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3883b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3883bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3883bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3883c0: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3883C0u;
    SET_GPR_U32(ctx, 31, 0x3883C8u);
    ctx->pc = 0x3883C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3883C0u;
    // 0x3883c4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3883C0u, 0x3883C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883C8u;
label_3883c8:
    // 0x3883c8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3883c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3883cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3883ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3883d0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3883d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3883d4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3883d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3883d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3883d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3883dc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3883dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3883e0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3883e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3883e4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3883e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3883e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3883e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3883ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3883ECu;
    {
        const bool branch_taken_0x3883ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883ECu;
        // 0x3883f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883ec) {
            ctx->pc = 0x388408u;
            goto label_388408;
        }
    }
    ctx->pc = 0x3883F4u;
    // 0x3883f4: 0xc0e1d2c  jal         func_3874B0
    ctx->pc = 0x3883F4u;
    SET_GPR_U32(ctx, 31, 0x3883FCu);
    ctx->pc = 0x3883F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3883F4u;
    // 0x3883f8: 0x26052b50  addiu       $a1, $s0, 0x2B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3874B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3874B0u, 0x3883F4u, 0x3883FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883FCu;
label_3883fc:
    // 0x3883fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3883FCu;
    {
        const bool branch_taken_0x3883fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883FCu;
        // 0x388400: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883fc) {
            ctx->pc = 0x388420u;
            goto label_388420;
        }
    }
    ctx->pc = 0x388404u;
    // 0x388404: 0x0  nop
    ctx->pc = 0x388404u;
    // NOP
label_388408:
    // 0x388408: 0x7a022b50  lq          $v0, 0x2B50($s0)
    ctx->pc = 0x388408u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x38840c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388410: 0x26052b40  addiu       $a1, $s0, 0x2B40
    ctx->pc = 0x388410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x388414: 0xc0e1d2c  jal         func_3874B0
    ctx->pc = 0x388414u;
    SET_GPR_U32(ctx, 31, 0x38841Cu);
    ctx->pc = 0x388418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388414u;
    // 0x388418: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3874B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3874B0u, 0x388414u, 0x38841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38841Cu;
label_38841c:
    // 0x38841c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38841cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388420:
    // 0x388420: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x388420u;
    {
        const bool branch_taken_0x388420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x388424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388420u;
        // 0x388424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388420) {
            ctx->pc = 0x388460u;
            goto label_388460;
        }
    }
    ctx->pc = 0x388428u;
    // 0x388428: 0xc0e1d24  jal         func_387490
    ctx->pc = 0x388428u;
    SET_GPR_U32(ctx, 31, 0x388430u);
    ctx->pc = 0x38842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388428u;
    // 0x38842c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387490u, 0x388428u, 0x388430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388430u;
label_388430:
    // 0x388430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x388430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388434: 0xc0e1d20  jal         func_387480
    ctx->pc = 0x388434u;
    SET_GPR_U32(ctx, 31, 0x38843Cu);
    ctx->pc = 0x388438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388434u;
    // 0x388438: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387480u, 0x388434u, 0x38843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38843Cu;
label_38843c:
    // 0x38843c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x38843cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x388440: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x388440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x388444: 0xac206ce4  sw          $zero, 0x6CE4($at)
    ctx->pc = 0x388444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CE4u, _value); } while (0);
    // 0x388448: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x388448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38844c: 0x8c246ccc  lw          $a0, 0x6CCC($at)
    ctx->pc = 0x38844cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x388450: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x388450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x388454: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x388454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x388458: 0xac236ccc  sw          $v1, 0x6CCC($at)
    ctx->pc = 0x388458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x38845c: 0x0  nop
    ctx->pc = 0x38845cu;
    // NOP
label_388460:
    // 0x388460: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x388460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x388464: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x388464u;
    {
        const bool branch_taken_0x388464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388464u;
        // 0x388468: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388464) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x38846Cu;
    // 0x38846c: 0x0  nop
    ctx->pc = 0x38846cu;
    // NOP
label_388470:
    // 0x388470: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x388470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x388474: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x388474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_388478:
    // 0x388478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38847c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388480: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x388480u;
    SET_GPR_U32(ctx, 31, 0x388488u);
    ctx->pc = 0x388484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388480u;
    // 0x388484: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x388480u, 0x388488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388488u;
label_388488:
    // 0x388488: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x388488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x38848c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38848cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x388490: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x388490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x388494: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x388494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x388498: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x388498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x38849c: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x38849cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3884a0: 0x8e052b38  lw          $a1, 0x2B38($s0)
    ctx->pc = 0x3884a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11064)));
    // 0x3884a4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3884A4u;
    SET_GPR_U32(ctx, 31, 0x3884ACu);
    ctx->pc = 0x3884A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3884A4u;
    // 0x3884a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3884A4u, 0x3884ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3884ACu;
label_3884ac:
    // 0x3884ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3884acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3884b0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3884B0u;
    {
        const bool branch_taken_0x3884b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3884b0) {
            ctx->pc = 0x388520u;
            goto label_388520;
        }
    }
    ctx->pc = 0x3884B8u;
    // 0x3884b8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3884b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3884bc: 0xa2220780  sb          $v0, 0x780($s1)
    ctx->pc = 0x3884bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3884c0: 0x92022b6f  lbu         $v0, 0x2B6F($s0)
    ctx->pc = 0x3884c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11119)));
    // 0x3884c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3884C4u;
    {
        const bool branch_taken_0x3884c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3884C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884C4u;
        // 0x3884c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884c4) {
            ctx->pc = 0x3884D8u;
            goto label_3884d8;
        }
    }
    ctx->pc = 0x3884CCu;
    // 0x3884cc: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x3884CCu;
    SET_GPR_U32(ctx, 31, 0x3884D4u);
    ctx->pc = 0x3884D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3884CCu;
    // 0x3884d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x3884CCu, 0x3884D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3884D4u;
label_3884d4:
    // 0x3884d4: 0x0  nop
    ctx->pc = 0x3884d4u;
    // NOP
label_3884d8:
    // 0x3884d8: 0x3c130068  lui         $s3, 0x68
    ctx->pc = 0x3884d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)104 << 16));
    // 0x3884dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3884dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3884e0: 0x26731ee0  addiu       $s3, $s3, 0x1EE0
    ctx->pc = 0x3884e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7904));
    // 0x3884e4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3884e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3884e8:
    // 0x3884e8: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x3884e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3884ec: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x3884ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3884f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3884f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3884f4: 0xc0bc72c  jal         func_2F1CB0
    ctx->pc = 0x3884F4u;
    SET_GPR_U32(ctx, 31, 0x3884FCu);
    ctx->pc = 0x3884F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3884F4u;
    // 0x3884f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CB0u, 0x3884F4u, 0x3884FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3884FCu;
label_3884fc:
    // 0x3884fc: 0xae422b20  sw          $v0, 0x2B20($s2)
    ctx->pc = 0x3884fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11040), GPR_U32(ctx, 2));
    // 0x388500: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x388500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x388504: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x388504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x388508: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x388508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x38850c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x38850Cu;
    {
        const bool branch_taken_0x38850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38850Cu;
        // 0x388510: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38850c) {
            ctx->pc = 0x3884E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3884e8;
        }
    }
    ctx->pc = 0x388514u;
    // 0x388514: 0xc0e1ea4  jal         func_387A90
    ctx->pc = 0x388514u;
    SET_GPR_U32(ctx, 31, 0x38851Cu);
    ctx->pc = 0x388518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388514u;
    // 0x388518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387A90u, 0x388514u, 0x38851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38851Cu;
label_38851c:
    // 0x38851c: 0x0  nop
    ctx->pc = 0x38851cu;
    // NOP
label_388520:
    // 0x388520: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x388520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x388524: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x388524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x388528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x388528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38852c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38852cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388538: 0x3e00008  jr          $ra
    ctx->pc = 0x388538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388538u;
        // 0x38853c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388540u;
}
