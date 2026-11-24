#include <cstdio>
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

// Function: sub_00178320
// Address: 0x178320 - 0x17836c
void sub_00178320_0x178320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178320_0x178320");
#endif

    ctx->pc = 0x178320u;

    { static uint64_t last[5]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[5]={(uint64_t)(READ8(0x81cea4u)),(uint64_t)(READ64(0x81cea0u+0x2888u)),(uint64_t)(READ64(0x81cea0u+0x2888u+56u)),(uint64_t)(READ64(0x81cea0u+0x2870u)),(uint64_t)(READ64(0x81cea0u+0x2870u+56u)),}; bool chg=first; for(int i=0;i<5;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<20) { ++lines; first=false; for(int i=0;i<5;++i) last[i]=cur[i]; fprintf(stderr,"[px dispfb] hit=%u " "idx=%llu fb1a=0x%llx fb1b=0x%llx fb2a=0x%llx fb2b=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4]); } }
    // 0x178320: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x178320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178324: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178328: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x178328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x17832c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178330: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178334: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178338: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x178338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17833c: 0xdc632888  ld          $v1, 0x2888($v1)
    ctx->pc = 0x17833cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 10376)));
    // 0x178340: 0xfc230070  sd          $v1, 0x70($at)
    ctx->pc = 0x178340u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 112), GPR_U64(ctx, 3));
    // 0x178344: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x178344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178348: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x17834c: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x17834cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178350: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178354: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178354u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178358: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17835c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x178360: 0xdc632870  ld          $v1, 0x2870($v1)
    ctx->pc = 0x178360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 10352)));
    // 0x178364: 0x3e00008  jr          $ra
    ctx->pc = 0x178364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178364u;
        // 0x178368: 0xfc230090  sd          $v1, 0x90($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 144), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17836Cu;
}
