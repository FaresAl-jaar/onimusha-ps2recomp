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

// Function: sub_001AF1E0
// Address: 0x1af1e0 - 0x1af820
void sub_001AF1E0_0x1af1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF1E0_0x1af1e0");
#endif

    switch (ctx->pc) {
        case 0x1af248u: goto label_1af248;
        case 0x1af258u: goto label_1af258;
        case 0x1af38cu: goto label_1af38c;
        case 0x1af3c8u: goto label_1af3c8;
        case 0x1af3e4u: goto label_1af3e4;
        case 0x1af400u: goto label_1af400;
        case 0x1af424u: goto label_1af424;
        case 0x1af448u: goto label_1af448;
        case 0x1af464u: goto label_1af464;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4ecu: goto label_1af4ec;
        case 0x1af69cu: goto label_1af69c;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af710u: goto label_1af710;
        case 0x1af754u: goto label_1af754;
        case 0x1af7bcu: goto label_1af7bc;
        default: break;
    }

    ctx->pc = 0x1af1e0u;

    // 0x1af1e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1af1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1af1e4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1af1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1af1e8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1af1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1af1ec: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1af1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1af1f0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1af1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1af1f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1af1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1af1f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1af1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1af1fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1af1fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af200: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1af200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1af204: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1af204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af208: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1af208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1af20c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1af20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1af210: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1af210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1af214: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1af214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1af218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1af21c: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1af21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1af220: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1af220u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1af224: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x1af224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1af228: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1af228u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1af22c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1af22cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1af230: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1af230u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1af234: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1af234u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1af238: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1af238u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1af23c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1af23cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1af240: 0xc041442  jal         func_105108
    ctx->pc = 0x1AF240u;
    SET_GPR_U32(ctx, 31, 0x1AF248u);
    ctx->pc = 0x1AF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF240u;
    // 0x1af244: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1AF240u, 0x1AF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF248u;
label_1af248:
    // 0x1af248: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1af24c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x1af24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1af250: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1AF250u;
    SET_GPR_U32(ctx, 31, 0x1AF258u);
    ctx->pc = 0x1AF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF250u;
    // 0x1af254: 0x27a600ec  addiu       $a2, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1AF250u, 0x1AF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF258u;
label_1af258:
    // 0x1af258: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF258u;
    {
        const bool branch_taken_0x1af258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af258) {
            ctx->pc = 0x1AF270u;
            goto label_1af270;
        }
    }
    ctx->pc = 0x1AF260u;
    // 0x1af260: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x1af260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1af264: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1af264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1af268: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x1AF268u;
    {
        const bool branch_taken_0x1af268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF268u;
        // 0x1af26c: 0xa6830004  sh          $v1, 0x4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af268) {
            ctx->pc = 0x1AF7D0u;
            goto label_1af7d0;
        }
    }
    ctx->pc = 0x1AF270u;
label_1af270:
    // 0x1af270: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x1af270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1af274: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x1af274u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1af278: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x1af278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x1af27c: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x1af27cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1af280: 0x8e840060  lw          $a0, 0x60($s4)
    ctx->pc = 0x1af280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1af284: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1af284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1af288: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1af288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1af28c: 0x43042  srl         $a2, $a0, 1
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1af290: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1af290u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1af294: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1af294u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1af298: 0x2464f900  addiu       $a0, $v1, -0x700
    ctx->pc = 0x1af298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
    // 0x1af29c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1af29cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1af2a0: 0x2443f870  addiu       $v1, $v0, -0x790
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965360));
    // 0x1af2a4: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1af2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1af2a8: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af2ac: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1af2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1af2b0: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1af2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af2b4: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1af2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af2b8: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x1af2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af2bc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1af2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af2c0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF2C0u;
    {
        const bool branch_taken_0x1af2c0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1AF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2C0u;
        // 0x1af2c4: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2c0) {
            ctx->pc = 0x1AF2D0u;
            goto label_1af2d0;
        }
    }
    ctx->pc = 0x1AF2C8u;
    // 0x1af2c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1af2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2cc: 0x0  nop
    ctx->pc = 0x1af2ccu;
    // NOP
label_1af2d0:
    // 0x1af2d0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF2D0u;
    {
        const bool branch_taken_0x1af2d0 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1af2d0) {
            ctx->pc = 0x1AF2E0u;
            goto label_1af2e0;
        }
    }
    ctx->pc = 0x1AF2D8u;
    // 0x1af2d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2dc: 0x0  nop
    ctx->pc = 0x1af2dcu;
    // NOP
label_1af2e0:
    // 0x1af2e0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF2E0u;
    {
        const bool branch_taken_0x1af2e0 = (GPR_S64(ctx, 18) > 0);
        if (branch_taken_0x1af2e0) {
            ctx->pc = 0x1AF2F0u;
            goto label_1af2f0;
        }
    }
    ctx->pc = 0x1AF2E8u;
    // 0x1af2e8: 0x69140  sll         $s2, $a2, 5
    ctx->pc = 0x1af2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1af2ec: 0x0  nop
    ctx->pc = 0x1af2ecu;
    // NOP
label_1af2f0:
    // 0x1af2f0: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF2F0u;
    {
        const bool branch_taken_0x1af2f0 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x1af2f0) {
            ctx->pc = 0x1AF300u;
            goto label_1af300;
        }
    }
    ctx->pc = 0x1AF2F8u;
    // 0x1af2f8: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x1af2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1af2fc: 0x0  nop
    ctx->pc = 0x1af2fcu;
    // NOP
label_1af300:
    // 0x1af300: 0x2a622000  slti        $v0, $s3, 0x2000
    ctx->pc = 0x1af300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1af304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF304u;
    {
        const bool branch_taken_0x1af304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF304u;
        // 0x1af308: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af304) {
            ctx->pc = 0x1AF318u;
            goto label_1af318;
        }
    }
    ctx->pc = 0x1AF30Cu;
    // 0x1af30c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1af310: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af314: 0x0  nop
    ctx->pc = 0x1af314u;
    // NOP
label_1af318:
    // 0x1af318: 0x2a220e00  slti        $v0, $s1, 0xE00
    ctx->pc = 0x1af318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3584) ? 1 : 0);
    // 0x1af31c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF31Cu;
    {
        const bool branch_taken_0x1af31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF31Cu;
        // 0x1af320: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af31c) {
            ctx->pc = 0x1AF330u;
            goto label_1af330;
        }
    }
    ctx->pc = 0x1AF324u;
    // 0x1af324: 0x24020e00  addiu       $v0, $zero, 0xE00
    ctx->pc = 0x1af324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1af328: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x1af328u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af32c: 0x0  nop
    ctx->pc = 0x1af32cu;
    // NOP
label_1af330:
    // 0x1af330: 0x2a412001  slti        $at, $s2, 0x2001
    ctx->pc = 0x1af330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x1af334: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF334u;
    {
        const bool branch_taken_0x1af334 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af334) {
            ctx->pc = 0x1AF340u;
            goto label_1af340;
        }
    }
    ctx->pc = 0x1AF33Cu;
    // 0x1af33c: 0x24122000  addiu       $s2, $zero, 0x2000
    ctx->pc = 0x1af33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1af340:
    // 0x1af340: 0x2a010e01  slti        $at, $s0, 0xE01
    ctx->pc = 0x1af340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3585) ? 1 : 0);
    // 0x1af344: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF344u;
    {
        const bool branch_taken_0x1af344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af344) {
            ctx->pc = 0x1AF350u;
            goto label_1af350;
        }
    }
    ctx->pc = 0x1AF34Cu;
    // 0x1af34c: 0x24100e00  addiu       $s0, $zero, 0xE00
    ctx->pc = 0x1af34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
label_1af350:
    // 0x1af350: 0x26627000  addiu       $v0, $s3, 0x7000
    ctx->pc = 0x1af350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28672));
    // 0x1af354: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1af354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af358: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1af35c: 0x26227900  addiu       $v0, $s1, 0x7900
    ctx->pc = 0x1af35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x1af360: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1af360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1af364: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1af364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af368: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1af368u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af36c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af370: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1af370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1af374: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af378: 0x83b025  or          $s6, $a0, $v1
    ctx->pc = 0x1af378u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1af37c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1af37cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1af380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af384: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF384u;
    SET_GPR_U32(ctx, 31, 0x1AF38Cu);
    ctx->pc = 0x1AF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF384u;
    // 0x1af388: 0x2c23025  or          $a2, $s6, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF384u, 0x1AF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF38Cu;
label_1af38c:
    // 0x1af38c: 0x26027900  addiu       $v0, $s0, 0x7900
    ctx->pc = 0x1af38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30976));
    // 0x1af390: 0x26437000  addiu       $v1, $s2, 0x7000
    ctx->pc = 0x1af390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28672));
    // 0x1af394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af398: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1af398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af39c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1af39cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1af3a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1af3a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1af3a4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1af3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1af3a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1af3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af3ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af3b0: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x1af3b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1af3b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af3b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3bc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1af3bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1af3c0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF3C0u;
    SET_GPR_U32(ctx, 31, 0x1AF3C8u);
    ctx->pc = 0x1AF3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3C0u;
    // 0x1af3c4: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF3C0u, 0x1AF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3C8u;
label_1af3c8:
    // 0x1af3c8: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x1af3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1af3cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af3d4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1af3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1af3d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af3dc: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF3DCu;
    SET_GPR_U32(ctx, 31, 0x1AF3E4u);
    ctx->pc = 0x1AF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3DCu;
    // 0x1af3e0: 0x563025  or          $a2, $v0, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF3DCu, 0x1AF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3E4u;
label_1af3e4:
    // 0x1af3e4: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x1af3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1af3e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af3f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1af3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af3f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af3f8: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF3F8u;
    SET_GPR_U32(ctx, 31, 0x1AF400u);
    ctx->pc = 0x1AF3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3F8u;
    // 0x1af3fc: 0x573025  or          $a2, $v0, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF3F8u, 0x1AF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF400u;
label_1af400:
    // 0x1af400: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1af400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1af404: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1af404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1af408: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1af408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1af40c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1af40cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af410: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1af410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1af414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af418: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1af418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1af41c: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF41Cu;
    SET_GPR_U32(ctx, 31, 0x1AF424u);
    ctx->pc = 0x1AF420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF41Cu;
    // 0x1af420: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF41Cu, 0x1AF424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF424u;
label_1af424:
    // 0x1af424: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1af424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1af428: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1af428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1af42c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1af42cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1af430: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1af430u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af434: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1af434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1af438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af43c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1af43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1af440: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF440u;
    SET_GPR_U32(ctx, 31, 0x1AF448u);
    ctx->pc = 0x1AF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF440u;
    // 0x1af444: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF440u, 0x1AF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF448u;
label_1af448:
    // 0x1af448: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1af448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1af44c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af450: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1af450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1af454: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1af454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1af458: 0x24508700  addiu       $s0, $v0, -0x7900
    ctx->pc = 0x1af458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1af45c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AF45Cu;
    SET_GPR_U32(ctx, 31, 0x1AF464u);
    ctx->pc = 0x1AF460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF45Cu;
    // 0x1af460: 0x24719000  addiu       $s1, $v1, -0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AF45Cu, 0x1AF464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF464u;
label_1af464:
    // 0x1af464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af46c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1af470: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1af470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1af474: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1af474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af478: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1af478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1af47c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1af47cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af480: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1af480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1af484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af488: 0x0  nop
    ctx->pc = 0x1af488u;
    // NOP
    // 0x1af48c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1af48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1af490: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1af490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1af494: 0x460106c3  div.s       $f27, $f0, $f1
    ctx->pc = 0x1af494u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[27] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1af498: 0x0  nop
    ctx->pc = 0x1af498u;
    // NOP
    // 0x1af49c: 0x0  nop
    ctx->pc = 0x1af49cu;
    // NOP
    // 0x1af4a0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AF4A0u;
    SET_GPR_U32(ctx, 31, 0x1AF4A8u);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AF4A0u, 0x1AF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4A8u;
label_1af4a8:
    // 0x1af4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af4ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4b0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1af4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1af4b4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1af4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1af4b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1af4b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af4bc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1af4c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1af4c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af4c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1af4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1af4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af4cc: 0x0  nop
    ctx->pc = 0x1af4ccu;
    // NOP
    // 0x1af4d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1af4d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1af4d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1af4d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1af4d8: 0x46010683  div.s       $f26, $f0, $f1
    ctx->pc = 0x1af4d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1af4dc: 0x0  nop
    ctx->pc = 0x1af4dcu;
    // NOP
    // 0x1af4e0: 0x0  nop
    ctx->pc = 0x1af4e0u;
    // NOP
    // 0x1af4e4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AF4E4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ECu);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AF4E4u, 0x1AF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4ECu;
label_1af4ec:
    // 0x1af4ec: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x1af4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af4f4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1af4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af4f8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1af4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1af4fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1af4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af500: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x1af500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x1af504: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1af504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1af508: 0x3c0344e0  lui         $v1, 0x44E0
    ctx->pc = 0x1af508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17632 << 16));
    // 0x1af50c: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x1af50cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af510: 0x4618d801  sub.s       $f0, $f27, $f24
    ctx->pc = 0x1af510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[24]);
    // 0x1af514: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1af514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1af518: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1af518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1af51c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1af51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af520: 0x0  nop
    ctx->pc = 0x1af520u;
    // NOP
    // 0x1af524: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1af524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1af528: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1af528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af52c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1AF52Cu;
    {
        const bool branch_taken_0x1af52c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF52Cu;
        // 0x1af530: 0x46801660  cvt.s.w     $f25, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af52c) {
            ctx->pc = 0x1AF590u;
            goto label_1af590;
        }
    }
    ctx->pc = 0x1AF534u;
    // 0x1af534: 0x4618d001  sub.s       $f0, $f26, $f24
    ctx->pc = 0x1af534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[24]);
    // 0x1af538: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x1af538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x1af53c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1af53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1af540: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1af540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af544: 0x0  nop
    ctx->pc = 0x1af544u;
    // NOP
    // 0x1af548: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af54c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1af54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af550: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1AF550u;
    {
        const bool branch_taken_0x1af550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF550u;
        // 0x1af554: 0x4618d800  add.s       $f0, $f27, $f24 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af550) {
            ctx->pc = 0x1AF590u;
            goto label_1af590;
        }
    }
    ctx->pc = 0x1AF558u;
    // 0x1af558: 0x3c034580  lui         $v1, 0x4580
    ctx->pc = 0x1af558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17792 << 16));
    // 0x1af55c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1af55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1af560: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1af560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1af564: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1af564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af568: 0x0  nop
    ctx->pc = 0x1af568u;
    // NOP
    // 0x1af56c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1af56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af570: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF570u;
    {
        const bool branch_taken_0x1af570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1af570) {
            ctx->pc = 0x1AF590u;
            goto label_1af590;
        }
    }
    ctx->pc = 0x1AF578u;
    // 0x1af578: 0x4618d000  add.s       $f0, $f26, $f24
    ctx->pc = 0x1af578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[24]);
    // 0x1af57c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1af57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1af580: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af584: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1af584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af588: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF588u;
    {
        const bool branch_taken_0x1af588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1af588) {
            ctx->pc = 0x1AF5A0u;
            goto label_1af5a0;
        }
    }
    ctx->pc = 0x1AF590u;
label_1af590:
    // 0x1af590: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x1af590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1af594: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1af594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1af598: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1AF598u;
    {
        const bool branch_taken_0x1af598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF598u;
        // 0x1af59c: 0xa6830004  sh          $v1, 0x4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af598) {
            ctx->pc = 0x1AF7D0u;
            goto label_1af7d0;
        }
    }
    ctx->pc = 0x1AF5A0u;
label_1af5a0:
    // 0x1af5a0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1af5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1af5a4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1af5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1af5a8: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1af5ac: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x1af5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1af5b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF5B0u;
    {
        const bool branch_taken_0x1af5b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B0u;
        // 0x1af5b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5b0) {
            ctx->pc = 0x1AF5C4u;
            goto label_1af5c4;
        }
    }
    ctx->pc = 0x1AF5B8u;
    // 0x1af5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af5bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF5BCu;
    {
        const bool branch_taken_0x1af5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5BCu;
        // 0x1af5c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5bc) {
            ctx->pc = 0x1AF5DCu;
            goto label_1af5dc;
        }
    }
    ctx->pc = 0x1AF5C4u;
label_1af5c4:
    // 0x1af5c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1af5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1af5c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1af5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1af5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af5d0: 0x0  nop
    ctx->pc = 0x1af5d0u;
    // NOP
    // 0x1af5d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1af5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1af5d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1af5d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1af5dc:
    // 0x1af5dc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1af5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1af5e0: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x1af5e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1af5e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1af5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1af5e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af5ec: 0x0  nop
    ctx->pc = 0x1af5ecu;
    // NOP
    // 0x1af5f0: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1af5f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1af5f4: 0x0  nop
    ctx->pc = 0x1af5f4u;
    // NOP
    // 0x1af5f8: 0x0  nop
    ctx->pc = 0x1af5f8u;
    // NOP
    // 0x1af5fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1af5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1af600: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF600u;
    {
        const bool branch_taken_0x1af600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af600) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF608u;
    // 0x1af608: 0xc6810068  lwc1        $f1, 0x68($s4)
    ctx->pc = 0x1af608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af60c: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x1af60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1af610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1af614: 0xe6800080  swc1        $f0, 0x80($s4)
    ctx->pc = 0x1af614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
label_1af618:
    // 0x1af618: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x1af618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x1af61c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1af61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1af620: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af624: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1af624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1af628: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1af628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1af62c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af630: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x1af634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af638: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1af638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1af63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af640: 0x0  nop
    ctx->pc = 0x1af640u;
    // NOP
    // 0x1af644: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x1af644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    // 0x1af648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af64c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af650: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1af650u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1af654: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1af658: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1af658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1af65c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af65cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af660: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1af660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af664: 0x4619d002  mul.s       $f0, $f26, $f25
    ctx->pc = 0x1af664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[25]);
    // 0x1af668: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1af668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af66c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1af66cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af670: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1af670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1af674: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1af674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1af678: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af67c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1af67cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1af680: 0x0  nop
    ctx->pc = 0x1af680u;
    // NOP
    // 0x1af684: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1af684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1af688: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1af688u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1af68c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1af68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1af690: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1af690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1af694: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF694u;
    SET_GPR_U32(ctx, 31, 0x1AF69Cu);
    ctx->pc = 0x1AF698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF694u;
    // 0x1af698: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF694u, 0x1AF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF69Cu;
label_1af69c:
    // 0x1af69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af6a0:
    // 0x1af6a0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1af6a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af6a8: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x1af6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af6ac: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1af6acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1af6b0: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1AF6B0u;
    SET_GPR_U32(ctx, 31, 0x1AF6B8u);
    ctx->pc = 0x1AF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6B0u;
    // 0x1af6b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1AF6B0u, 0x1AF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6B8u;
label_1af6b8:
    // 0x1af6b8: 0xc6820080  lwc1        $f2, 0x80($s4)
    ctx->pc = 0x1af6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af6bc: 0xc681006c  lwc1        $f1, 0x6C($s4)
    ctx->pc = 0x1af6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af6c0: 0x46171080  add.s       $f2, $f2, $f23
    ctx->pc = 0x1af6c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x1af6c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1af6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1af6c8: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1AF6C8u;
    SET_GPR_U32(ctx, 31, 0x1AF6D0u);
    ctx->pc = 0x1AF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6C8u;
    // 0x1af6cc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1AF6C8u, 0x1AF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6D0u;
label_1af6d0:
    // 0x1af6d0: 0xc6820064  lwc1        $f2, 0x64($s4)
    ctx->pc = 0x1af6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af6d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1af6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1af6d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af6dc: 0x0  nop
    ctx->pc = 0x1af6dcu;
    // NOP
    // 0x1af6e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1af6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1af6e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1af6e8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF6E8u;
    {
        const bool branch_taken_0x1af6e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6E8u;
        // 0x1af6ec: 0x4600c502  mul.s       $f20, $f24, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6e8) {
            ctx->pc = 0x1AF6F8u;
            goto label_1af6f8;
        }
    }
    ctx->pc = 0x1AF6F0u;
    // 0x1af6f0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1af6f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1af6f4: 0x0  nop
    ctx->pc = 0x1af6f4u;
    // NOP
label_1af6f8:
    // 0x1af6f8: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1af6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1af6fc: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF6FCu;
    {
        const bool branch_taken_0x1af6fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af6fc) {
            ctx->pc = 0x1AF708u;
            goto label_1af708;
        }
    }
    ctx->pc = 0x1AF704u;
    // 0x1af704: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x1af704u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_1af708:
    // 0x1af708: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1AF708u;
    SET_GPR_U32(ctx, 31, 0x1AF710u);
    ctx->pc = 0x1AF70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF708u;
    // 0x1af70c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1AF708u, 0x1AF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF710u;
label_1af710:
    // 0x1af710: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1af710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1af714: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x1af714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x1af718: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1af718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1af71c: 0x4600d000  add.s       $f0, $f26, $f0
    ctx->pc = 0x1af71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x1af720: 0x4600c882  mul.s       $f2, $f25, $f0
    ctx->pc = 0x1af720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1af724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1af724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af72c: 0x0  nop
    ctx->pc = 0x1af72cu;
    // NOP
    // 0x1af730: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1af734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1af734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1af738: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af73c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1af73cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1af740: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1af740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1af744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1af748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1af74c: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1AF74Cu;
    SET_GPR_U32(ctx, 31, 0x1AF754u);
    ctx->pc = 0x1AF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF74Cu;
    // 0x1af750: 0x28438  dsll        $s0, $v0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1AF74Cu, 0x1AF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF754u;
label_1af754:
    // 0x1af754: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1af754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1af758: 0x3c074400  lui         $a3, 0x4400
    ctx->pc = 0x1af758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17408 << 16));
    // 0x1af75c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af760: 0x3c0644e0  lui         $a2, 0x44E0
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17632 << 16));
    // 0x1af764: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af768: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1af768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1af76c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1af76cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1af770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af774: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af778: 0x4600d880  add.s       $f2, $f27, $f0
    ctx->pc = 0x1af778u;
    ctx->f[2] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
    // 0x1af77c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1af77cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af780: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1af780u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af784: 0x0  nop
    ctx->pc = 0x1af784u;
    // NOP
    // 0x1af788: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1af788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1af78c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1af78cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1af790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af794: 0x0  nop
    ctx->pc = 0x1af794u;
    // NOP
    // 0x1af798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1af798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1af79c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af79cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af7a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1af7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af7a4: 0x0  nop
    ctx->pc = 0x1af7a4u;
    // NOP
    // 0x1af7a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1af7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af7ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1af7acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af7b0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1af7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1af7b4: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AF7B4u;
    SET_GPR_U32(ctx, 31, 0x1AF7BCu);
    ctx->pc = 0x1AF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7B4u;
    // 0x1af7b8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AF7B4u, 0x1AF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7BCu;
label_1af7bc:
    // 0x1af7bc: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1af7c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af7c4: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1af7c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1af7c8: 0x1020ffb5  beqz        $at, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1AF7C8u;
    {
        const bool branch_taken_0x1af7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C8u;
        // 0x1af7cc: 0x4616bdc0  add.s       $f23, $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7c8) {
            ctx->pc = 0x1AF6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af6a0;
        }
    }
    ctx->pc = 0x1AF7D0u;
label_1af7d0:
    // 0x1af7d0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1af7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1af7d4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1af7d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1af7d8: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1af7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1af7dc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1af7dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1af7e0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1af7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1af7e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1af7e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af7e8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1af7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1af7ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1af7ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af7f0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1af7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1af7f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1af7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af7f8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1af7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1af7fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1af7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af800: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1af800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1af804: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1af804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af808: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1af808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1af80c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1af80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af810: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1af810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af818: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF818u;
        // 0x1af81c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF820u;
}
