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

// Function: sub_002BC220
// Address: 0x2bc220 - 0x2bc2cc
void sub_002BC220_0x2bc220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC220_0x2bc220");
#endif

    switch (ctx->pc) {
        case 0x2bc260u: goto label_2bc260;
        default: break;
    }

    ctx->pc = 0x2bc220u;

    // 0x2bc220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bc228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc234: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2bc234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bc238: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC238u;
    {
        const bool branch_taken_0x2bc238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC238u;
        // 0x2bc23c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc238) {
            ctx->pc = 0x2BC258u;
            goto label_2bc258;
        }
    }
    ctx->pc = 0x2BC240u;
    // 0x2bc240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc244: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x2bc244u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bc248: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bc248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc24c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC24Cu;
    {
        const bool branch_taken_0x2bc24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc24c) {
            ctx->pc = 0x2BC290u;
            goto label_2bc290;
        }
    }
    ctx->pc = 0x2BC254u;
    // 0x2bc254: 0x0  nop
    ctx->pc = 0x2bc254u;
    // NOP
label_2bc258:
    // 0x2bc258: 0xc09d968  jal         func_2765A0
    ctx->pc = 0x2BC258u;
    SET_GPR_U32(ctx, 31, 0x2BC260u);
    ctx->pc = 0x2765A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765A0u, 0x2BC258u, 0x2BC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC260u;
label_2bc260:
    // 0x2bc260: 0x96250046  lhu         $a1, 0x46($s1)
    ctx->pc = 0x2bc260u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x2bc264: 0x96230048  lhu         $v1, 0x48($s1)
    ctx->pc = 0x2bc264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2bc268: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bc26c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2bc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bc270: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2bc270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2bc274: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC274u;
    {
        const bool branch_taken_0x2bc274 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc274) {
            ctx->pc = 0x2BC290u;
            goto label_2bc290;
        }
    }
    ctx->pc = 0x2BC27Cu;
    // 0x2bc27c: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2bc27cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2bc280: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2bc280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2bc284: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BC284u;
    {
        const bool branch_taken_0x2bc284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC284u;
        // 0x2bc288: 0xfe030500  sd          $v1, 0x500($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc284) {
            ctx->pc = 0x2BC2B8u;
            goto label_2bc2b8;
        }
    }
    ctx->pc = 0x2BC28Cu;
    // 0x2bc28c: 0x0  nop
    ctx->pc = 0x2bc28cu;
    // NOP
label_2bc290:
    // 0x2bc290: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2bc290u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2bc294: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2bc294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2bc298: 0xfe030500  sd          $v1, 0x500($s0)
    ctx->pc = 0x2bc298u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
    // 0x2bc29c: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2bc29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc2a0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2bc2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc2a4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2bc2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc2a8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2bc2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2bc2ac: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2bc2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2bc2b0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2bc2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2bc2b4: 0x0  nop
    ctx->pc = 0x2bc2b4u;
    // NOP
label_2bc2b8:
    // 0x2bc2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C4u;
        // 0x2bc2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC2CCu;
}
